#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int n=0,i;
    string a;
    cin>>a;
    for(i=0;i<a.size();i++)
    {
        if(a[i] == '4' || a[i] == '7')
        {
            n++;
        }
    }
    if(n == 4 || n == 7 )
    {
        cout<<"YES";

    }
    else
    {
        cout<<"NO";
    }
}
