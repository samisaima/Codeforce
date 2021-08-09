#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int r;
    cin>>r;
    int a[r],b[r],i,c=0,d;
    for(i=0;i<r;i++)
    {
        cin>> a[i]>>b[i];
        d= b[i]-a[i];
        if (d>=2)
            c++;
    }
    cout<<c;

}
