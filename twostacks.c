#include<stdio.h>
#include<stdlib.h>
#define size 10
void push1(int *t1,int *t2,int arr[],int item);
void push2(int *t1,int *t2,int arr[],int item);
int pop1(int *t1,int arr[]);
int pop2(int *t2,int arr[]);

int main(){
    int arr[size],ch,item,del;
    int top1=-1;
    int top2=size;
    do{
        printf("Push1:1  Pop1:2  Push2:3  Pop2:4   exit:5 ");
        scanf("%d",&ch);
        switch(ch){
            case 1:printf("Enter the element you want to push\n");
                   scanf("%d",&item);
                   push1(&top1,&top2,arr,item);break;
            case 2:del=pop1(&top1,arr);
                   if(del!=-9999){
                       printf("The deleted element is %d\n",del);
                   }break;
            case 3:printf("Enter the element you want to push\n");
                   scanf("%d",&item);
                   push2(&top1,&top2,arr,item);break;
            case 4:del=pop2(&top2,arr);
                   if(del!=-9999){
                       printf("The deleted elemetn is %d\n",del);
                   }break;
            default:exit(0);
        }

    }while(1);

}

void push1(int *t1,int *t2,int arr[],int item){
    if(*t1<*t2-1){
        *t1+=1;
        arr[*t1]=item;
        
    }
    else{
        printf("Stack overflow\n");
    }
}

void push2(int *t1,int *t2,int arr[],int item){
    if(*t1<*t2-1){
        *t2-=1;
        arr[*t2]=item;

    }
    else{
        printf("Stack overflow\n");
    }
}

int pop1(int *t1,int arr[]){
    int del;
    if(*t1==-1){
        printf("Stack underflow\n");
        return -9999;
    }
    else{
        del=arr[*t1];
        *t1=*t1-1;
        return del;

    }
}
int pop2(int *t2,int arr[]){
    int del;
    if(*t2==size){
        printf("Stack underflow\n");
        return -9999;
    }
    else{
        del=arr[*t2];
        *t2=*t2+1;
        return del;

    }
}
