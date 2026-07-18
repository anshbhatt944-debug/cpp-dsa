#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Merge(int nums1[], int nums2[], int m, int n){
    vector<int> arr;
    for(int i=0;i<m;i++){
        arr.push_back(nums1[i]);
    }
    for(int i=0;i<n;i++){
        arr.push_back(nums2[i]);
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < m + n; i++) {
        nums1[i] = arr[i];
    }
}
int main(){
    int nums1[]={1,2,3,0,0,0};
    int m=3;
    int nums2[]={2,5,6};
    int n=3;
    Merge(nums1, nums2, 3, 3);
    for(int i=0;i<6;i++){
        cout<<nums1[i]<<" ";
    }
    return 0;
}