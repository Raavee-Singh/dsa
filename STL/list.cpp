#include<iostream>
#include<list>
int main(){
    std::list<int> num;
    num.push_back(2);
    num.push_front(1);
    num.push_back(3);
    std::list<int> n(num);
    std::list<int> a(5,1);
    for(int i:a){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"List elements are: ";
    for(int i:num){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"size: "<<num.size()<<std::endl;
    num.erase(num.begin());
    std::cout<<"after erasing: "<<std::endl;
    for(int i:num){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"new list is: ";
    for(int i:n){
        std::cout<<i<<" ";
    }
    return 0;
}