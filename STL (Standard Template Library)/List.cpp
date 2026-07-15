#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    //list<int> n(l); list is copied
    list<int> n(5, 100);
    cout<<"Printing n:- ";
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;
    l.push_back(1);
    l.push_front(2);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"sizeof list:- "<<l.size()<<endl;
    return 0;
}
/*
| Function             | Description                     | Time Complexity   |
| -------------------- | ------------------------------- | ----------------- |
| `push_back(x)`       | Insert element at the end       | O(1)              |
| `push_front(x)`      | Insert element at the front     | O(1)              |
| `pop_back()`         | Remove last element             | O(1)              |
| `pop_front()`        | Remove first element            | O(1)              |
| `front()`            | Returns first element           | O(1)              |
| `back()`             | Returns last element            | O(1)              |
| `begin()`            | Iterator to first element       | O(1)              |
| `end()`              | Iterator past the last element  | O(1)              |
| `empty()`            | Checks if list is empty         | O(1)              |
| `size()`             | Returns number of elements      | O(1)*             |
| `clear()`            | Removes all elements            | O(n)              |
| `erase(it)`          | Erase element at iterator       | O(1)              |
| `erase(first, last)` | Erase a range                   | O(n)              |
| `insert(it, x)`      | Insert before iterator          | O(1)              |
| `swap(l2)`           | Swap two lists                  | O(1)              |
| `reverse()`          | Reverse the list                | O(n)              |
| `sort()`             | Sort the list                   | O(n log n)        |
| `unique()`           | Remove consecutive duplicates   | O(n)              |
| `remove(x)`          | Remove all occurrences of `x`   | O(n)              |
| `resize(n)`          | Change size of list             | O(n)              |
| `merge(l2)`          | Merge two sorted lists          | O(n)              |
| `splice(it, l2)`     | Move elements from another list | O(1) (whole list) |

*/