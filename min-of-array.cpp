#include<iostream>
int main(){
    int arr[]={23,45,-78,41,53};
    int size=5;
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    std::cout<<"Minimum value is: "<<min;
    return 0;
}