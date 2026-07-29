#include<iostream>
#include<deque>
#include<list>
int main(){
    std::deque<int> deque1;
    std::list<int> list1;
    deque1.push_front(1);
    deque1.push_back(2);
    deque1.push_back(3);
    list1.push_front(4);
    list1.push_back(5);
    list1.push_back(6);

    std::cout<<"Printing deque: "<<std::endl;
    for(int i:deque1){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"Printing list: "<<std::endl;
    for(int i:list1){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl<<"Printing complete!"<<std::endl;
    std::cout<<"List and deque can be edited from both directions!";
}