#include<iostream>
int main(){
    int arr[5]={23,42,6,12,64};
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        int j=i-1;
        int temp=arr[i];
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    std::cout<<"The sorted array is: ";
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
}
