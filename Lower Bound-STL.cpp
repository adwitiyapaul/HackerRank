#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m,q,value;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        v.push_back(m);
    } 
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>value; 
        vector<int>::iterator low;
        low=lower_bound(v.begin(), v.end(), value);
        
        if(v[low-v.begin()]==value)
            cout<<"Yes "<<(low-v.begin()+1)<<endl;
        else
            cout<<"No "<<(low-v.begin()+1)<<endl;
    }    
    return 0;
}
