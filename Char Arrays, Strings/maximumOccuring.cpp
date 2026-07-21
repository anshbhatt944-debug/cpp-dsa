#include<iostream>
#include<climits>
using namespace std;
int getMax(int num[], int n){
    int max = INT_MIN;
    int count;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
            count =i;
        }
    }
    return count;
}
char MaximumOcc(string s){
    int start=0;
    int n = s.size();
    int count[n] = {0};
    for(int i=0;i<n;i++){
        char a=s[i];
        for(int j=0;j<n;j++){
            if(s[j]==a){
                count[i]++;
            }
        }
    }
    int index=getMax(count, n);
    return s[index];
}
int main(){
    string str;
    getline(cin, str);
    cout<<MaximumOcc(str);
    return 0;
}