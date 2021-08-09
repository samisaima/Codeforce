#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int p;
    cin>>p;
    int a[p],i,c=0;
    for(i=0;i<p;i++)
    {
        cin>>a[i];
        if(a[i] == 1)
        {
            c++;
        }
    }
    if(c>=1)
    {
        cout<<"HARD";
    }
    else
    {
        cout<<"EASY";
    }

}
