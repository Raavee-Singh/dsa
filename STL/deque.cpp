#include<iostream>
#include<deque>
int main(){
    std::deque<int> d;
    d.push_back(3);
    d.push_front(2);
    d.push_front(1);
    for(int i:d){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    d.pop_back();
    for(int i:d){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"First element: "<<d.at(0)<<std::endl;
    std::cout<<"Front: "<<d.front()<<std::endl;
    std::cout<<"Empty or not: "<<d.empty()<<std::endl;
    d.push_back(3);
    std::cout<<"before erase: ";
    for(int i:d){
        std::cout<<i<<" ";
    }
    std::cout<<"Size: "<<d.size();
    std::cout<<std::endl;
    d.erase(d.begin(),d.begin()+1);
    std::cout<<"after erase: ";
    std::cout<<"Size: "<<d.size()<<std::endl;
    for(int i:d){
        std::cout<<i<<" ";
    }
    return 0;
}