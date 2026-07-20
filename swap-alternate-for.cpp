#include<iostream>
int main(){
    int arr[6]={};
    std::cout<<"Enter the elements of the array: ";
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }
    std::cout<<"The array is stored.";
    for(int i=0;i<size;i+=2){
        std::swap(arr[i],arr[i+1]);
    }
    std::cout<<std::endl;
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
        
}