#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int k,n,w,i,j,f,d=0;
    cin>>k;
    cin>>n;
    cin>>w;
    for(i=1;i<=w;i++)
    {
        d=d+i;
    }
    j=k*d;
    if(j>n)
    {
        f=j-n;
    }
    else{
        f=0;
    }
    cout<<f;
}
