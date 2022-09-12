#include<bits/stdc++.h>
using namespace std;

void print(map<int ,int> &m){
  for(auto &it:m){
    cout << it.first << " " << it.second << endl;
  }
}

int main(){
 map<int,int> m;
 m[1] = 2;
 m[2] = 3;
 m[3] = 4;
 m[2] = m[2]+6;
 print(m);
}