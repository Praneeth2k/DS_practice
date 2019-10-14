#include<stdio.h>
int find_smallest(int arr[],int n);
void push_bottom(int arr[],int smallest,int n);

int main(){
    int n,i,j,smallest,input[30];

    printf("No of elements?\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&input[i]);
    smallest=find_smallest(input,n);
    push_bottom(input,smallest,n);  
    printf("The stack after modification is\n");
    for(i=n-1;i>=0;i--){
        printf("%d\n",input[i]);
    }  
}

int find_smallest(int arr[],int n){
    int smallest,i;
    smallest=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]<smallest)
            smallest=arr[i];
    }
    return smallest;
}

void push_bottom(int arr[],int smallest,int n){
    int i,j;
    for(i=0;i<n;i++){
        if(arr[i]==smallest){
            for(j=i-1;j>=0;j--)
                arr[j+1]=arr[j];
            arr[0]=smallest;
        }
    }
}