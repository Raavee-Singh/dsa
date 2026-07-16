#include<iostream>
void reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        std::swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
}
    
int main(){
    int arr[]={1,45,86,47,69};
    int size=5;
    reverse(arr,size);
    printarray(arr,size);
}