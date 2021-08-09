#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int x;
    cin>>x;
    int y[x],maxn=0,minn=101,maxi,mini,i;
    for(i=0;i<x;i++)
    {
        cin>>y[i];

        if(y[i]>maxn)
        {
            maxn=y[i];
            maxi=i;
        }
        if(y[i]<=minn)
        {
            minn=y[i];
            mini=i;
        }
    }
    if(maxi>mini)
    {
        mini++;
    }
    cout<<maxi+(x-1)-mini;

}
