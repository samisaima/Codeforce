#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n],i,c=1;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]!= a[i+1])
        {
            c++;
        }
    }
    cout<<c;

}

