#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="Ansh";
    m[2]="Bhatt";
    m[13]="Meera";
    m.insert({5,"pokemon"});
    cout<<"before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    cout<<"Finding 13 -> "<<m.count(13)<<endl;
    //m.erase(13);
    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    auto it=m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
    return 0;
}