#include<iostream>
int binarysearch(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int mid=start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }

        if (key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start + (end-start)/2;
    }
    return -1;

}
int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,6,7,4,2};
    int index=binarysearch(odd, 6, 12);
    std::cout<<"Index is: "<<index<<std::endl;
    return 0;
}