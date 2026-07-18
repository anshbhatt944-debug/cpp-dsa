#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
//// Reverse array after a given index
void reverseArray(int arr[], int size, int M){
    int start=M+1;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    reverseArray(arr, 10, 3);
    printArray(arr, 10);
    return 0;
}
