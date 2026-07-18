#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printarray(int arr[] , int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void rotateArray(int arr[], int size, int k){
    k=k%size;
    for(int i=0;i<k;i++){
        int temp = arr[size-1];
        for(int j=size-1;j>0;j--){
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    rotateArray(arr, 7, 3);
    printarray(arr, 7);
    //output = 5,6,7,1,2,3,4; moving k=3 steps to the right;
    return 0;
}
/*
 index-    0 1 2 3 4 5 6
 array -   1 2 3 4 5 6 7
*/