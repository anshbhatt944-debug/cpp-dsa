#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void selectionSort(int arr[], int size){
    for(int i=0;i<size-1;i++){
        int minIndex=i;
        for(int j=i+1;j<size;j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main(){
    int arr[]={64, 25, 12, 22, 11};
    selectionSort(arr, 4);
    printArray(arr,4);
    return 0;
}