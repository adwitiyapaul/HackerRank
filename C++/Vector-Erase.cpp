#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m,x,a,b;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        v.push_back(m);
    }
    cin>>x;
    cin>>a>>b;
    v.erase(v.begin()+(x-1));
    v.erase(v.begin()+(a-1),v.begin()+(b-1));
    int size=v.size();
    cout<<size<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
