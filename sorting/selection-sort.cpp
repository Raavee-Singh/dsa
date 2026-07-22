#include<iostream>
int main(){
    int arr[5]={23,54,12,11,64};
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size-1;i++){
        int min_index=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        std::swap(arr[min_index],arr[i]);
    }
    std::cout<<"The sorted array is: ";
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
}