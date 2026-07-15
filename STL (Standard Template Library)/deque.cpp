#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for(int i: d){
        cout<<i<<" ";
    }
    cout<<endl;
    //d.pop_front();

    // for(int i: d){
    //     cout<<i<<" ";
    // }
    cout<<"1st element:- "<<d.at(0)<<endl;
    cout<<"Empty or Not:- "<<d.empty()<<endl;
    cout<<"size:- "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    for(int i: d){
        cout<<i<<" ";
    }
    return 0;
}    
    /*
| Function       | Syntax                | Description                            | Time Complexity |
| -------------- | --------------------- | -------------------------------------- | --------------- |
| Declare        | `deque<int> d;`       | Creates an empty deque                 | O(1)            |
| `push_back()`  | `d.push_back(10);`    | Insert element at the back             | O(1)            |
| `push_front()` | `d.push_front(10);`   | Insert element at the front            | O(1)            |
| `pop_back()`   | `d.pop_back();`       | Remove last element                    | O(1)            |
| `pop_front()`  | `d.pop_front();`      | Remove first element                   | O(1)            |
| `front()`      | `d.front();`          | Returns first element                  | O(1)            |
| `back()`       | `d.back();`           | Returns last element                   | O(1)            |
| `at()`         | `d.at(i);`            | Access element with bounds checking    | O(1)            |
| `[]`           | `d[i];`               | Access element without bounds checking | O(1)            |
| `size()`       | `d.size();`           | Returns number of elements             | O(1)            |
| `empty()`      | `d.empty();`          | Returns `true` if deque is empty       | O(1)            |
| `erase()`      | `d.erase(d.begin());` | Removes element(s) at given position   | O(n)            |
| `clear()`      | `d.clear();`          | Removes all elements                   | O(n)            |
| `begin()`      | `d.begin();`          | Iterator to first element              | O(1)            |
| `end()`        | `d.end();`            | Iterator past the last element         | O(1)            |

*/