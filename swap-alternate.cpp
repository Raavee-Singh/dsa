#include<iostream>
int main(){
    int arr[6]={};
    std::cout<<"Enter the elements of the array: ";
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }
    std::cout<<"Array is stored."<<std::endl;
    int start=0;
    int end=1;
    while(end < size){
        std::swap(arr[start], arr[end]);
        start+=2;
        end+=2;
    }
    std::cout<<"Final array is: ";
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
}