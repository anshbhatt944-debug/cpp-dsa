#include<iostream>
#include<array>
using namespace std;
int main(){
    int basic[3]={1,2,3};        //Built-in array
    array<int,4> a={1,2,3,4,};    //STL array
    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"Element at 2nd Index-> "<<a.at(2)<<endl;
    cout<<"Emply or not-> "<<a.empty()<<endl;
    return 0;
}
/*
array<int,5> arr = {1,2,3,4,5};
commonly used functions with std::array
arr.size();            Returns the total number of elements in the array.
arr.front();           Returns the first element.
arr.back();            Returns the last element.
arr.at(2);             Accesses an element with bounds checking.
arr.empty();           Checks whether the array contains zero elements.
arr.fill(10);          Fills every element with the given value.
arr.begin();           Returns an iterator pointing to the first element.
arr.end();             Returns an iterator one position after the last element.
arr.swap(otherArray);  Swaps the contents of two arrays.
*/