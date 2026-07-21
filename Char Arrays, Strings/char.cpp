#include <iostream>
using namespace std;
int findLength(char arr[]){
    int count=0;
    int i=0;
    while(arr[i]!='\0'){
        count++;
        i++;
    }
    return count;
}
void reverseString(char arr[]){
    int start=0;
    int end= findLength(arr)-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    char name[20];
    cout<<"Enter your name-> ";
    cin>>name;
    cout<<"Your name is-> "<<name<<endl;
    //finding the length of string  
    cout<<"String Length-> "<<findLength(name)<<endl;
    //reverse a string
    reverseString(name);
    cout<<"Reverse->"<<name;
    return 0;
}