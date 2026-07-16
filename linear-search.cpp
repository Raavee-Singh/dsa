#include<iostream>
bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;

}
int main(){
    int arr[10]={23,4,5,67,47,3,62,1,0,-43};
    //whether 1 is present in array
    int size=10;
    int key;
    std::cout<<"Enter the value of key: ";
    std::cin>>key;
    bool found=search(arr,size,key);
    if(found){
        std::cout<<"Key found";
    }
    else{
        std::cout<<"Key not found";
    }

}