#include<stdio.h>
#include<stdlib.h>
struct song{
    int num;
    struct song *next;
};

typedef struct song * SONG;
SONG getnode(){
    SONG newn;
    newn=(SONG)malloc(sizeof(struct song));
    return newn;

}

int main(){
    int f=0,ch;
    SONG songa=NULL;
    SONG a=getnode();
    a->num=1;
    songa=a;
    SONG b=getnode();
    b->num=2;
    a->next=b;
    a=getnode();
    b->next=a;
    a->num=3;
    a->next=songa;
    

    SONG songb=NULL;
    a=getnode();
    a->num=1;
    songb=a;
    b=getnode();
    b->num=2;
    a->next=b;
    a=getnode();
    b->next=a;
    a->num=3;
    a->next=songb;

    SONG songc=NULL;
    a=getnode();
    a->num=1;
    songc=a;
    b=getnode();
    b->num=2;
    a->next=b;
    a=getnode();
    b->next=a;
    a->num=3;
    a->next=songc;
    SONG current=songa;
    do{
       if(f==0){
           current=songa;
           printf("Playing songs from playlist A\n");
           while(f==0){
           printf("Playing song %d\n",current->num);

           printf("Do you want to go to the next song?:1\nJump to next playlist?:2\nDelete this song:3\nExit?:4\n");
           scanf("%d",&ch);
           if(ch==1){
            
               current=current->next;
           }
           else if(ch==2){
               f=(f+1)%3;
           }
           else if(ch==3){
               
           }
           else if(ch==4){
               exit(0);
               
           }
           }

       }
        else if(f==1){
           current=songb;
           printf("Playing songs from playlist B\n");
           while(f==1){           
            printf("Playing song %d\n",current->num);
           printf("Do you want to go to the next song?:1\nJump to next playlist?:2\nExit?:3\n");
           scanf("%d",&ch);
           if(ch==1){
               current=current->next;
           }
           else if(ch==2){
               f=(f+1)%3;
           }
           else if(ch==3){
               exit(0);
               
           }

        }
        }
        else if(f==2){
           current=songc;
           printf("Playing songs from playlist C\n");
           while(f==2){
           printf("Playing song %d\n",current->num);
           printf("Do you want to go to the next song?:1\nJump to next playlist?:2\nExit?:3\n");
           scanf("%d",&ch);
           if(ch==1){
               current=current->next;
           }
           else if(ch==2){
               f=(f+1)%3;
           }
           else if(ch==3){
               exit(0);
               
           }

       }
        }
       }while(1);
    
   
    return 0;
}