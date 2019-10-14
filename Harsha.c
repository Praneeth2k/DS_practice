#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct website{
    char name[20];
    struct website *next;
};
typedef struct website *WEBSITE;
WEBSITE getnode();
WEBSITE insert_front(WEBSITE head,char web[20],int *N);

int main(){
    int ch,x,i,N=0;
    char web[20],initial[20];
    
    WEBSITE head=getnode();
    WEBSITE s;
    printf("Enter the name of the initial webpage\n");
    scanf("%s",initial);
    strcpy(head->name,initial);
    head->next=NULL;

    do{
        printf("Click on new website:1\nWebsite name on Xth click:2\nExit:3\n");
        scanf("%d",&ch);
        
        switch(ch){
            case 1:printf("Enter the name of the website you wnat to go into\n");
                   scanf("%s",web);
                   head=insert_front(head,web,&N);break;
            case 2:printf("Enter the value of X\n");
                   scanf("%d",&x); 
                   s=head; 
                   for(i=0;i<N-x;i++){
                        s=s->next;
                    } 
                    printf("The website that you were on after %d clicks is %s",x,s->name);
                    break;
            case 3:exit(0);
            default:printf("Wrong input\n");

             
        }
    }while(1);
    return 0;
}

    WEBSITE getnode(){
        WEBSITE p;
        p=(WEBSITE)malloc(sizeof(struct website));
        return p;

    }
    WEBSITE insert_front(WEBSITE head,char web[20],int *N){
        WEBSITE p=getnode();
        strcpy(p->name,web);
        p->next=head;
        head=p;
        *N=*N+1;
        return head;
        
    }



