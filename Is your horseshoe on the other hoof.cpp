#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int a[4],i,j,c=0,t;
        for(i=0;i<4;i++)
    {
        cin>>a[i];
    }
        for(i=0;i<4;i++)
        {
            t=0;
            for(j=i+1;j<4;j++)
            {
                if(a[i] == a[j] && t == 0)
                {
                    c++;
                    t++;
                }
            }
        }
        cout<<c;
}
