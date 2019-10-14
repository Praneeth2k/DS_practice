/*Write a Program to store and retrieve the student information (USN,Name and mobile number) in Last In First Out order.*/

#include<stdio.h>
#include <stdlib.h>
struct student{
    char usn[15];
    char name[20];
    long int mob;
};
void push(int *t,struct student arr[]);
struct student pop(int *t,struct student arr[]);
void display(int t,struct student arr[]);


int main(){
    int n,top=-1,ch;
    struct student this;
    struct student arr[5];
    do{
        printf("Push new student:1\nPop:2\nDisplay:3\nExit:4\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:push(&top,arr);
                    break;
            case 2:this=pop(&top,arr);
                   if(this.mob!=-1){
                       printf("The details of the popped student are:-\n");
                       printf("NAME:      %s\n",this.name);
                       printf("USN:       %s\n",this.usn);
                       printf("MOBILE NO: %d\n",this.mob);

                   }
                   break;
            case 3:display(top,arr);break;
            case 4:exit(0);break;
            default:printf("Wrong input wtf man give 1,2,3 or 4..how dumb are you??uninstall VScode and go sleep you wont get a job");

        };

    }while(1);

    return 0;
}
void push(int *t,struct student arr[]){
    if(*t==4){
        printf("Full");
        return;
    }
    *t=*t+1;
    printf("Enter the name:\n");
    scanf("%s",arr[*t].name);
    printf("Enter USN:\n");
    scanf("%s",arr[*t].usn);
    printf("Enter the mob_no:");
    scanf("%lu",&arr[*t].mob);
    
}
struct student pop(int *t,struct student arr[]){
    struct student a;
    a.mob=-1;
    if(*t==-1){
        printf("Underflow\n");
        return a;
    }
    a=arr[*t];
    *t=*t-1;
    return a;
    
}
void display(int t,struct student arr[]){
    int i;
    if(t==-1){
        printf("kuch nahi hain");
        return;   
    }
    for(i=t;i>=0;i--){
        printf("Student %d:-\n",i+1);
        printf("NAME:      %s\n",arr[i].name);
        printf("USN:       %s\n",arr[i].usn);
        printf("MOBILE NO: %lu\n\n",arr[i].mob);
    }
}
