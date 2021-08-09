#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int n,a,b,i,j=0,f=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        j=(a+f)-b;
        if(j<0)
        {
            f=0;
        }
        else
        {
            f=j;
        }
    }

    cout<<f;

}
