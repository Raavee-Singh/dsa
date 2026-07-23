#include<iostream>
#include<vector>
int main(){
    std::vector<int> v;
    std::vector<int> vec(4,2);
    std::cout<<"Printing vec: ";
    for(int i:vec){
        std::cout<<i<<" ";
    }

    std::vector<int> last(vec);
    std::cout<<"Printing last: ";
    for(int i:last){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"Size: "<<v.capacity()<<std::endl;
    std::cout<<"No. of elements: "<<v.size()<<std::endl;
    v.push_back(1);
    std::cout<<"Size: "<<v.capacity()<<std::endl;
    std::cout<<"No. of elements: "<<v.size()<<std::endl;
    v.push_back(3);
    std::cout<<"Size: "<<v.capacity()<<std::endl;
    std::cout<<"No. of elements: "<<v.size()<<std::endl;
    v.push_back(3);
    std::cout<<"Size: "<<v.capacity()<<std::endl;
    std::cout<<"No. of elements: "<<v.size()<<std::endl;

    std::cout<<"First element: "<<v.front()<<std::endl;
    std::cout<<"Last element: "<<v.back()<<std::endl;

    std::cout<<"Before pop: ";
    for(int i:v){
        std::cout<<i<<" ";  
    }

    v.pop_back();
    std::cout<<std::endl;
    std::cout<<"After pop: ";
    for(int i:v){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"Before clear: "<<v.size()<<std::endl;
    v.clear();
    std::cout<<"After clear: "<<v.size()<<std::endl;
    return 0;
}