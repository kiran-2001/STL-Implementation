#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"print 1st element index "<<d.at(1)<<endl;

    cout<<"front-->"<<d.front()<<endl;
    cout<<"back-->"<<d.back()<<endl;

    cout<<"empty or not-->"<<d.empty()<<endl;

    cout<<"before erase size-->"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase size-->"<<d.size()<<endl;

    for(int i:d){
        cout<<i<<" ";
    }
    
    cout<<endl;



}