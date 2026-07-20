#include<iostream>
#include<array>

int main(){
    int arr[5]={};
    std::cout<<"Enter the elements of array: ";
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }
    int mini= arr[0];
    for(int i=0; i<size;i++){
       mini=std::min(mini,arr[i]);
    }
    int index=0;
    for(int i=0;i<size;i++){
        if(mini==arr[i]){
            index=i;
        }
    }
    std::cout<<"The index of minimum value "<<mini<<" is: "<<index;
}