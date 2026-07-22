#include<iostream>
int main(){
    int arr[5]={23,43,12,65,21};
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
            std::swap(arr[j],arr[j+1]);
            }
        }
    }
    std::cout<<"The sorted array is: ";
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
}