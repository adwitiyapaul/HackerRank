#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q,t;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++)
    {
        cin>>t>>q;
        switch(t)
        {
            case 1: s.insert(q);
                    break;
            case 2: s.erase(q);
                    break;
            case 3: set<int>::iterator itr=s.find(q);
                    if(itr==s.end())
                        cout<<"No"<<endl;
                    else 
                        cout<<"Yes"<<endl;
        }
    }
    return 0;
}
