#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("Love");
    s.push("babbar");
    s.push("kumar");

    cout<<"Element at top-->"<<s.top()<<endl;

    cout<<"after pop operation"<<endl;

    s.pop();

    cout<<"Element at top is-->"<<s.top()<<endl;

    cout<<"size of stack is -->"<<s.size()<<endl;

    

}