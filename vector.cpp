#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> a(5,1);

    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    




    cout<<"Capacity--> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity--> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity--> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity-->"<<v.capacity()<<endl;

    cout<<"Size--> "<<v.size()<<endl;

    cout<<"Element at 2nd index--> "<<v.at(2)<<endl;

    cout<<"Element at first -->"<<v.front()<<endl;
    cout<<"Element at last-->"<<v.back()<<endl;

    cout<<"before pop"<<endl;

    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"after pop"<<endl;
    v.pop_back();

    for(int i:v){
        cout<<i<<" ";

    }
    cout<<endl;

    cout<<"Size before clear-->"<<v.size()<<endl;
    v.clear();
    cout<<"size after clear-->"<<v.size()<<endl;

    cout<<"capacity -->"<<v.capacity()<<endl;








}
 
