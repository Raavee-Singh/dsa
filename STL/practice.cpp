#include<iostream>
#include<array>
#include<vector>
int main(){
    std::array<int, 5> arr={23,4,2,1,45};
    std::vector<int> vec;
    for(int i:arr){
        vec.push_back(i);
    }
    std::cout<<"The vector is: "<<std::endl;
    for(int i:vec){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"Printing complete!"<<std::endl;

    std::cout<<"First element of array is: "<<arr.front()<<std::endl;
    std::cout<<"Last element of array is: "<<arr.back()<<std::endl;

    vec.pop_back();
    std::cout<<"Printing array after pop: "<<std::endl;
    for(int i:vec){
        std::cout<<i<<" ";
    }
    return 0;
}