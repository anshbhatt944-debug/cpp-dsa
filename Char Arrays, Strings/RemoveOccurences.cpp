#include<iostream>
using namespace std;
string removeOccurrences(string s, string part){
    while(s.length()!=0&&s.find(part)<s.length()){
        s.erase(s.find(part), part.length());
    }
    return s;
}
int main(){
    string str;
    string part;
    cout<<"Enter a string-> ";
    getline(cin, str);
    cout<<"Enter a part-> ";
    getline(cin, part);
    cout<<"Output-> "<<removeOccurrences(str , part);
    return 0;
}