#include<iostream>
#include<array>
int main(){
   std::array<int, 5> arr={};
   std::cout<<"Enter the values of array: ";
   for(int i=0;i<5;i++){
    std::cin>>arr[i];
   }
   std::cout<<"The array is: "<<std::endl;
   for(int i=0;i<5;i++){
    std::cout<<arr[i]<<" ";
   }
}
