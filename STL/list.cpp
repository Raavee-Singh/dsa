#include<iostream>
#include<list>
int main(){
    std::list<int> num;
    num.push_back(2);
    num.push_front(1);
    num.push_back(3);
    std::cout<<"List elements are: ";
    for(int i:num){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}