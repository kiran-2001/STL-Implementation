#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v ={1,2,3,4,5};
  vector<int> ::iterator it;

  for(it =v.begin(); it!=v.end(); it++){ 
     cout << (*it) << endl;
          
  }

  vector<pair<int,int>> v_p={{1,2},{2,3},{3,4}}; 

  vector<pair<int,int>> :: iterator i;

  for(i=v_p.begin(); i!=v_p.end(); i++){
     cout << (*i).first << " " << (*i).second << endl;
  }



  return 0;
}