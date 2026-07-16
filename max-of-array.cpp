#include<iostream>
int main(){
    int arr[5]={23,4,12,65,32};
    int size=5;
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    std::cout<<"Maximum is: "<<max;
    return 0;
}