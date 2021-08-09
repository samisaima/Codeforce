#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    string n, sn;
    cin>>n;
    cin>>sn;
    int i;
    for(i=0;i<n.size();i++)
    {
        if(n[i] == sn[i])
        {
            cout<<"0";
        }
        else
        {
            cout<<"1";
        }
    }
}
