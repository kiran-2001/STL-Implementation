#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> s;

    s.push("Love");
    s.push("babbar");
    s.push("kumar");

    cout<<"first element is-->"<<s.front()<<endl;
    
    cout<<"size of queue is-->"<<s.size()<<endl;

    s.pop();
    cout<<"first element after pop operation-->"<<s.front();

    

}