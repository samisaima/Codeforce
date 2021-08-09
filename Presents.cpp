#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int m;
    cin>>m;
    int a[m],i,c;
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(c=1;c<=m;c++)
    {
        for(i=0;i<m;i++)
        {
            if(a[i]==c)
            {
                cout<<i+1<<" ";
            }
        }
    }
}
