#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> MovingZeros(int arr[], int size){
    int ZeroCount=0;
    vector<int> ans;
    int s=0;
    for(int i=0;i<size;i++){
        ans.push_back(arr[i]);
    }
    while(s<ans.size()){
        if(ans.at(s)==0){
            ans.erase(ans.begin()+s);
            ZeroCount++;
        }else{
            s++;
        }
    }
    for(int i=0;i<ZeroCount;i++){
        ans.push_back(0);
    }
    return ans;
}
int main(){
    int nums[] = {0,1,0,3,12};
    vector<int> ans=MovingZeros(nums, 5);
    for(int i=0;i<ans.size();i++){
        cout<<ans.at(i)<<" ";
    }
    return 0;
}