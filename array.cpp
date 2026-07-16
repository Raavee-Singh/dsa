#include<iostream>
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<std::endl;
    }
    std::cout<<"Printing Complete!"<<std::endl;

}
int main(){
    int arr[]={1,2,3,4,5};
    int size;
    std::cout<<"Enter the size of array: ";
    std::cin>>size;
    printarray(arr,size);
}