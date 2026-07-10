#include<iostream>
using namespace std;
bool isPossible(int arr[], int size, int students, int mid){
    int StudentCount=1;
    int PageSum=0;
    for(int i=0;i<size;i++){
        if(PageSum+arr[i]<=mid){
            PageSum=PageSum+arr[i];
        }else{
            StudentCount++;
            if(StudentCount>students||arr[i]>mid){
                return false;
            }
            PageSum=arr[i];
        }
    }
    return true;
}
int Allocate(int arr[], int size, int students){
    int s=0;
    int sum=0;
    int ans=-1;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr, size, students, mid)){
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[4]={10,20,30,40};
    cout<<Allocate(arr, 4, 2);
    return 0;
}