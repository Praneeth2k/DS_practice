#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
struct node{
    char item[15];
    struct node *next;
};
typedef struct node * NODE;
NODE getnode();
NODE insert_end(NODE head,char item[]);
NODE delete_val(NODE head,char val[]);
void display(NODE head);
int main(){
    char item[15];
    char del[15];
    int ch;
    NODE head=NULL;
    do{
        printf("To insert an item press 1.\nPress 2 to delete an item from the list\nPress 3 to display\nPress 4 to exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:printf("Enter the item name:");
                   scanf("%s",item);
                   head=insert_end(head,item);
                   break;
            case 2:printf("Enter the name of the item which you want to delete ");
                   scanf("%s",del);
                   head=delete_val(head,del);
                   break;
            case 3:display(head);
                   break;
            case 4:exit(0);
            default:printf("Hey maria!!Go meet a doctor..u are retarded..i literally told you to press 1,2 or 3 and you pressed something else wtf");
        }
    }while(1);
    return 0;
}

NODE getnode(){
    NODE p;
    p=(NODE)malloc(sizeof(struct node));
    return p;
}
NODE insert_end(NODE head,char item[]){
    NODE p=getnode();
    NODE q;
    strcpy(p->item,item);
    q=head;
    p->next=NULL;
    if(q==NULL){
        head=p;
        return head;
    }
    while(q->next!=NULL){
        q=q->next;
    }

    q->next=p;
    return head;
    
}

NODE delete_val(NODE head,char val[]){
    NODE curr,prev=NULL;
    curr=head;
    if(curr==NULL){
        printf("List is empty");
        return NULL;
    }
    


    while((strcmp(curr->item,val))&&curr!=NULL){
        prev=curr;
        curr=curr->next;
    }

    if(!(strcmp(curr->item,val))){
        if(prev==NULL){
            head=head->next;
            free(curr);
        }
        else{
            prev->next=curr->next;
            free(curr);

        }
    }
    else
    {
         printf("Entered item is not preesent in the list\n");
    }
    
    return head;
       
    
}
void display(NODE head){
    NODE p=head;
    if(p==NULL){
        printf("The list is empty\n");
        return;  
    }
    while(p!=NULL){
        printf("%s  ",p->item);
        p=p->next;
    }


}