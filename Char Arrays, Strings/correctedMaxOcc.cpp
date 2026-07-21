#include<iostream>
using namespace std;
char MaximumOcc(string s){
    int n = s.size();
    int count[26] = {0};
    for(int i=0;i<n;i++){
        char a=s[i];
        //lowercase
        int number=0;
        if(a>='a'&&a<='z'){
            number = a-'a';
        }else{
            //uppercase
            number = a-'A';
        }
        count[number]++;
    }
    int maxi=-1, ans=0;
    for(int i=0;i<26;i++){
        if(maxi<count[i]){
            ans=i;
            maxi=count[i];
        }
    }
    char finalAns='a'+ans;
    return finalAns;
}
int main(){
    string str;
    cout<<"Enter a line:- ";
    getline(cin, str);
    cout<<MaximumOcc(str);
    return 0;
}