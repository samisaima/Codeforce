#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string x,r;
    getline(cin,x);
    sort(x.begin(),x.end());
    int i,c=0;
    for(i=0;i<x.size()-1;i++)
    {
        if(x[i] == '}' || x[i] == '{' || x[i] == ',' || x[i] == ' ' || x[i] == '{}')
            {
                continue;
            }
        else
        {
            if(x[i] != x[i+1])
            {
             c++;
            }
        }
    }
    cout<<c;

}
