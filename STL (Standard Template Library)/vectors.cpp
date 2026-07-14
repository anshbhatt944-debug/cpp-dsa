#include<iostream>
#include<vector>
using namespace std;
int main(){
    int basic[5]={1,2,3,4,5};
    vector<int> v;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    cout<<"size-> "<<v.size()<<endl;
    v.push_back(2);
    cout<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.capacity()<<endl;
    cout<<"size-> "<<v.size()<<endl;
    v.push_back(4);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    return 0;
}
/*
| Function         | Purpose                            | Example                      | Output / Effect                 | Time Complexity                   |
| ---------------- | ---------------------------------- | ---------------------------- | ------------------------------- | --------------------------------- |
| `push_back(x)`   | Add element at the end             | `v.push_back(10);`           | Adds `10` to the end            | **O(1)** amortized                |
| `pop_back()`     | Remove last element                | `v.pop_back();`              | Removes last element            | **O(1)**                          |
| `size()`         | Returns number of elements         | `v.size()`                   | `3`                             | **O(1)**                          |
| `capacity()`     | Returns allocated capacity         | `v.capacity()`               | `4` (example)                   | **O(1)**                          |
| `front()`        | Returns first element              | `v.front()`                  | `10`                            | **O(1)**                          |
| `back()`         | Returns last element               | `v.back()`                   | `30`                            | **O(1)**                          |
| `at(i)`          | Safe access to index `i`           | `v.at(2)`                    | `30`                            | **O(1)**                          |
| `operator[]`     | Access element by index            | `v[2]`                       | `30`                            | **O(1)**                          |
| `empty()`        | Checks if vector is empty          | `v.empty()`                  | `true` / `false`                | **O(1)**                          |
| `clear()`        | Removes all elements               | `v.clear()`                  | Size becomes `0`                | **O(n)**                          |
| `begin()`        | Iterator to first element          | `v.begin()`                  | Used with STL algorithms        | **O(1)**                          |
| `end()`          | Iterator after last element        | `v.end()`                    | Used with STL algorithms        | **O(1)**                          |
| `swap(v2)`       | Swaps contents with another vector | `v.swap(v2)`                 | Both vectors exchanged          | **O(1)**                          |
| `insert(pos, x)` | Insert element at a position       | `v.insert(v.begin()+1, 50);` | Inserts `50`                    | **O(n)**                          |
| `erase(pos)`     | Remove element at a position       | `v.erase(v.begin()+2);`      | Deletes that element            | **O(n)**                          |
| `resize(n)`      | Changes vector size                | `v.resize(5);`               | Increases/decreases size        | **O(n)**                          |
| `reserve(n)`     | Reserves capacity                  | `v.reserve(100);`            | Capacity becomes at least `100` | **O(n)** (if reallocation occurs) |

*/