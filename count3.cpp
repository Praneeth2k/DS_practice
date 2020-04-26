#include<iostream>
using namespace std;

bool contains3(int i){
    while(i!=0){
        if(i%10 == 3){
            return true;
        }
        i = i/10;
    }
    return false;
}

int count_3(int n){
    int count = 0;
    for(int i=1; i <= n; i++){
        if(!contains3(i)){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int ans = count_3(n);
    cout<<ans<<endl;
}