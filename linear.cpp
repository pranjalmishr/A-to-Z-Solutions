#include<iostream>
using namespace std;
bool linear(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]={1,2,3,12,32,31.45,21,77,13};
    cout<<"find the key"<<endl;
    int key;
    cin>>key;
    bool found = linear(arr,10,key);
    if(found){
        cout<<"the value of key is present"<<endl;
    }
    else{
        cout<<"The value of key is absent"<<endl;
    }
}