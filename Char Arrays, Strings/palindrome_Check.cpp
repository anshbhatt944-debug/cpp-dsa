#include<iostream>
#include<vector>
using namespace std;
char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
int findLength(char arr[]){
    int count=0;
    int i=0;
    while(arr[i]!='\0'){
        count++;
        i++;
    }
    return count;
}
bool checkPalindrome(char a[], int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        if(toLowerCase(a[start])!=toLowerCase(a[end])){
            return 0;
        }else{
            start++;
            end--;
        }
    }
    return 1;
}
int main(){
    char str[100];
    cout<<"Enter a word-> ";
    cin>>str;
    int n=findLength(str);
    if(checkPalindrome(str, n)){
        cout<<"Is Palindrome"<<endl;
    }else{
        cout<<"Is NOT Palindrome"<<endl;
    }
    return 0;
}