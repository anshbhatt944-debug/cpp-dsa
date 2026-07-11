#include<iostream>
using namespace std;
int BinarySearch(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    //int mid=(start+end)/2;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            //go to right part of array
            start=mid+1;
        }else{
            //go to the left part of the array
            end=mid-1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int main(){
    int arr[]={3, 6, 8, 10, 21, 22, 23, 78};
    int index=BinarySearch(arr, 8, 22);
    cout<<"Index is "<<index;
    return 0;
}