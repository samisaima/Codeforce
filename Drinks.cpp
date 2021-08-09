#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int p;
    cin>>p;
    int a[p],i,r=0;
    for(i=0;i<p;i++)
    {
        cin>>a[i];
        r=r+a[i];
    }
    cout<<(double)r/p;

}
