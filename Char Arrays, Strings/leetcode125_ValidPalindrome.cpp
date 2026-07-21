#include<iostream>
using namespace std;
bool valid(char ch){
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9')){
        return true;
    }
    return false;
}
char toLowerCase(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        return ch - 'A' + 'a';
    }
    return ch;
}
bool isPalindrome(string s) {
    int start=0;
    int end=s.length()-1;
    int i=0;
    while(start<end){
        if(!valid(s[start])){
          start++;
          continue;
        }
        if(!valid(s[end])){
           end--;
           continue;
        }
        if(toLowerCase(s[start])!=toLowerCase(s[end])){
            return 0;
        }else{
            start++;
            end--;
        }
    }
    return 1;
}
int main(){
    string str;
    getline(cin, str);
    if(isPalindrome(str)){
        cout<<"Is Palindrome";
    }else{
        cout<<"Is NOT Palindrome";
    }
    return 0;
}