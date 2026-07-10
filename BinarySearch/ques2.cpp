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
    int arr[]={1,3,3,3,7,9,11};
    int key=3;
    int first = FirstOcc(arr, 7, key);
    int last = LastOcc(arr, 7, key);

    if(first == -1){
    cout << "Element not found";
    }
    else{
        cout << "First occurrence is at " << first << endl;
        cout << "Last occurrence is at " << last << endl;
        cout << "Total occurrences are " << last - first + 1;
    }
    return 0;
}