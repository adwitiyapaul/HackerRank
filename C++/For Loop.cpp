#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    string s[]={"one","two","three","four","five","six","seven","eight","nine"};
    int a,b,i;
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        if(1<=i and i<=9)
        {
            cout<<s[i-1]<<endl;
            //break;
        }
        else
        {
            if((i%2)==0)
                cout<<"even"<<endl;
            else
                cout<<"odd"<<endl;
        }
    }
    return 0;
}
