#include<iostream>
using namespace std;
bool isPossible(int arr[], int size, int painters, int mid){
    int PainterCount=1;
    int pageSum=0;
    for(int i=0;i<size;i++){
        if(pageSum+arr[i]<=mid){
            pageSum=pageSum+arr[i];
        }else{
            PainterCount++;
            if(PainterCount>painters||arr[i]>mid){
                return false;
            }
            pageSum=arr[i];
        }
    }
    return true;
}
int painterPartition(int arr[], int size, int painters) {
    int s=0;
    int sum=0;
    int ans=-1;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    int e=sum;
    int mid=s + (e-s)/2;
    while(s<=e){
        if(isPossible(arr, size, painters, mid)){
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
        mid=s + (e-s)/2;
    }
    return ans;
}
int main(){
    int arr[]={5, 10, 30, 20, 15};
    cout<<painterPartition(arr, 5,2);
    return 0;
}