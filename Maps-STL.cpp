#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    map<string,int> m;
    for(int i=0;i<n;i++)
    {
        int t,y=0;
        string x;
        cin>>t; 
        if(t==1)
        {
            cin>>x;
            cin>>y;
            m[x]+=y;            
        }
        else if(t==2)
        {
            cin>>x;
            m.erase(x);
        }    
        else
        {
            cin>>x;
            map<string,int>::iterator itr=m.find(x);
            if(itr!=m.end())
                cout<<m[x]<<endl;
            else
                cout<<"0"<<endl;
        }      
    } 
    return 0;
}
