#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int ,5> a = {1,2,3,4,5};

    int size = a.size();


    for(int i= 0; i<5; i++){
            cout<<a[i]<<endl;
    }

    cout<<"Element at second index--> "<<a.at(2)<<endl;
    cout<<"Empty or Not--> "<<a.empty()<<endl;
    cout<<"Element at front--> "<<a.front()<<endl;
    cout<<"Element at last--> "<<a.back()<<endl;



}