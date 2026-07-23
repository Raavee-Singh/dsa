#include<iostream>
int main(){
    int arr[5]={23,42,12,11,27};//selection sort
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size-1;i++){
        int min_ind=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min_ind]){
                min_ind=j;
            }
        }
        std::swap(arr[i],arr[min_ind]);
    }
    std::cout<<"Sorted array is: ";
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
}