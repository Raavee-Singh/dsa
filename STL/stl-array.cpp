#include<iostream>
#include<array>
int main(){
    std::array<int, 4> arr={1,2,3,4};
    int size=arr.size();
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"Element at index 2 is: "<<arr.at(2)<<std::endl;
    std::cout<<"Empty or not: "<<arr.empty()<<std::endl;
    std::cout<<"First element is: "<<arr.front()<<std::endl;
    std::cout<<"Last element is: "<<arr.back()<<std::endl;
}