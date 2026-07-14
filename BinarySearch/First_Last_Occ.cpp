#include<iostream>
using namespace std;
int FirstOcc(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int mid = start + (end-start)/2;
    int ans=-1;
    while(start<=end){
        if(key==arr[mid]){
            ans=mid;
            end=mid-1;
        }else if(key>arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
int LastOcc(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int mid = start + (end-start)/2;
    int ans=-1;
    while(start<=end){
        if(key==arr[mid]){
            ans=mid;
            start=mid+1;
        }else if(key>arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
int main(){
    int arr[]={1,3,3,7,9,11};
    int key=3;
    cout<<"First occurrence is at "<<FirstOcc(arr, 6, key)<<endl;
    cout<<"Last occurrence is at "<<LastOcc(arr, 6, key);
    return 0;
}
