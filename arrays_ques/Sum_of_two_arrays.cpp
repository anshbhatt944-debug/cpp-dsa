#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
vector<int> sum(vector<int> A, vector<int> B){
    int sum1=0;
    int sum2=0;
    for(int i=0;i<A.size();i++){
        sum1=sum1*10+A[i];
    }
    for(int i=0;i<B.size();i++){
        sum2=sum2*10+B[i];
    }
    int sum=sum1+sum2;
    int temp = sum;
    int digit=0;
    while(temp!=0){
        temp=temp/10;
        digit++;
    }
    vector<int> arr(digit);
    for(int i=0;i<digit;i++){
        int rem = sum % 10;
        arr[digit-i-1] = rem;
        sum = sum / 10;
    }
    return arr;
}
int main(){
    vector<int> A={4,5,1};
    vector<int> B={3,4,5};
    vector<int> ans=sum(A, B);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}