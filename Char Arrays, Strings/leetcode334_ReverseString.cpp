#include<iostream>
#include<vector>
using namespace std;
void reverseString(vector<char>& s){
    int start=0;
    int end=s.size()-1;
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
        
    }
}
int main(){
    vector<char> arr{'h','e','l','l','o'};
    reverseString(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    return 0;
}