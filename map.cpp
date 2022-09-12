#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m;

    m[1] ="Love";
    m[13] ="babbar";
    m[2] = "kumar";

    m.insert({5,"bheem"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    m.erase(13);
    cout<<"aftre erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }



}