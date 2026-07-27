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
    
    return 0;
}