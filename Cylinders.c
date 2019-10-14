#include<stdio.h>
#include<stdlib.h>
int sum(int arr[],int t);
void pop(int arr[],int *);
int main(){
    int stack1[20],stack2[20],stack3[20];
    int n1,n2,n3,i,flag=0;
    int t1,t2,t3;
    printf("Enter the sizes of the 3 stacks\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    t1=n1-1;t2=n2-1;t3=n3-1;
    printf("Enter the heights of each cylinders from top to bottom in stack 1\n");
    for(i=n1-1;i>=0;i--){
        scanf("%d",&stack1[i]);
    }
    printf("Enter the heights of each cylinders from top to bottom in stack 2\n");
    for(i=n2-1;i>=0;i--){
        scanf("%d",&stack2[i]);
    }
    printf("Enter the heights of each cylinders from top to bottom in stack 3\n");
    for(i=n3-1;i>=0;i--){
        scanf("%d",&stack3[i]);
    }
    do{
        if(sum(stack1,t1)==sum(stack2,t2)&&sum(stack1,t1)==sum(stack3,t3))
            flag=1;
        else{
            if(sum(stack1,t1)>=sum(stack2,t2)&&sum(stack1,t1)>=sum(stack3,t3))
                pop(stack1,&t1);
            else if(sum(stack2,t2)>=sum(stack1,t1)&&sum(stack2,t2)>=sum(stack3,t3))
                pop(stack2,&t2);
            else if(sum(stack3,t3)>sum(stack1,t1)&&sum(stack3,t3)>sum(stack1,t1))
                pop(stack3,&t3);
            }  

            
        }while(flag==0);
    
        printf("The size of each stack is %d",sum(stack1,t1));
    }

int sum(int arr[],int t){
    int s=0,i;
    
    for(i=0;i<=t;i++){
        s=s+arr[i];
    }
    return s;
}
void pop(int arr[],int *t){
    if(*t!=-1){
        *t=*t-1;
        
    }
}

