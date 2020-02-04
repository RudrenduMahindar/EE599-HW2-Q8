#include <iostream>
#include "src/lib/solution.h"
#include <vector>
using namespace std;

int main()
{
    Solution solution ;
    int arr[]={1,5,7,3,8,78,95,108};
    int n=sizeof(arr)/sizeof(int);
    vector<int> v(arr,arr+n);
    cout<< "Input : " ; 
    for(auto it=v.begin();it!=v.end();it++)
        cout<< *it << " ";
    vector<int> v1(v.size());
    v1=solution.Median(v);
    cout<< "\nOutput : " ; 
    for(auto it=v1.begin();it!=v1.end();it++)
        cout<< *it << " ";
    cout<< "\n";    
    return EXIT_SUCCESS;
}