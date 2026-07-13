#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void insertionSort(int arr[], int size){
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0){
            if(arr[j]>temp){
                //shift larger elements
                arr[j+1]=arr[j];
                j--;
            }else{
                //stop
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main(){
    int arr[]={5, 2, 4, 6, 1, 3};
    insertionSort(arr, 6);
    printArray(arr, 6);
    return 0;
}