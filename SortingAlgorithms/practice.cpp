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
void bubbleSort(int arr[], int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
void InsertionSort(int arr[], int size){
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
                j--;
            }else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
void insertionSort(int arr[], int size){
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1; //j points to the element just before i
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1]=arr[j]; //basically moving greater element to the right
                j--;
            }else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main(){
    int arr[]={64, 25, 12, 22, 11};
    //selectionSort(arr, 4);
    InsertionSort(arr, 4);
    //bubbleSort(arr, 4);
    printArray(arr,4);
    return 0;
}