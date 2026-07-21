#include<iostream>
#include<vector>
using namespace std;
void reverse(string &s, int start, int end){
    while(start<end){
        swap(s[start], s[end]);
        start++;
        end--;
    }
}
void reverseWords(string &s){
    int n=s.size(); //15
    reverse(s, 0, n-1);
    int start=0;
    for(int end=0;end<=n;end++){
        if(end==n||s[end]==' '){
            reverse(s, start, end-1);
            start = end + 1;
        }
    }
}
int main(){
    string str;
    getline(cin, str);
    reverseWords(str);
    //reverse(str, 0, str.size()-1);
    cout<<str;
    return 0;
}
