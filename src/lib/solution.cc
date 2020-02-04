#include "solution.h"
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> Solution::Median(vector<int>& v1) 
{   
  int n=v1.size();
  if(n==0)
    {
      cout<< "vector empty";
      return v1;
    }
  else if((n%2)==0)
    {
      sort(v1.begin(),v1.end());
      vector<int> v2(v1.begin(),v1.begin()+((n/2)-1));
      vector<int> v3(v1.begin()+((n/2)-1),v1.begin()+((n/2)+1));
      vector<int> v4(v1.begin()+((n/2)+1),v1.end());
      v1.clear();
      //reverse_copy(v2.begin(),v2.end(),v1.begin());
      reverse(v2.begin(),v2.end());
      for(auto it=v2.begin();it!=v2.end();it++)
        v1.push_back(*it);
      for(auto it=v3.begin();it!=v3.end();it++)
        v1.push_back(*it);  
      //copy_n(v3.begin(),2,v1.begin()+v2.size());
      //reverse_copy(v4.begin(),v4.end(),v1.begin()+v1.size());
      reverse(v4.begin(),v4.end());
      for(auto it=v4.begin();it!=v4.end();it++)
        v1.push_back(*it);

      return v1;
    }  
    else if((n%2)!=0)
    {
      sort(v1.begin(),v1.end());
      vector<int> v2(v1.begin(),v1.begin()+(n/2));
      reverse(v2.begin(),v2.end());
      auto it=v1.at(n/2);
      v2.push_back(it);
      vector<int> v3(v1.begin()+((n/2)+1),v1.end());
      //v1.clear();
      reverse(v3.begin(),v3.end());
      merge(v2.begin(),v2.end(),v3.begin(),v3.end(),v1.begin());  
      return v1;
    }
  
}
