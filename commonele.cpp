#include<iostream>

using namespace std;

int main(){
    int a, b ,c, i , j = 0 ,k = 0;
    cout<<"Enter the sizes of the three arrrays"<<endl;
    cin>>a>>b>>c;
    int arr1[a], arr2[b], arr3[c];
    cout<<"Enter the first array\n";
    for(i = 0 ; i < a ; i++){
        cin>>arr1[i];
    }
    cout<<"Enter the 2nd array\n";
    for(i = 0 ; i < b ; i++){
        cin>>arr2[i];
    }
    cout<<"Enter the 3rd array\n";
    for(i = 0 ; i < c ; i++){
        cin>>arr3[i];
    }

    for(i = 0 ; i < a; i++){
        while(arr2[j] < arr1[i] && j <= b){
            j++;
        }
        while(arr3[k] < arr1[i] && k <= c){
            k++;
        }
        if(arr1[i] == arr2[j] && arr1[i] == arr3[k]){
            cout<<arr1[i]<<" ";
        }
        
    }
}
/*6 5 8 1 5 10 20 40 80 6 7 20 80 100 3 4 15 20 30 70 80 120*/