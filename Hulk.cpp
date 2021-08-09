#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int a,i;
    cin>>a;
    if(a>1)
    {
        cout<<"I hate ";
        for(i=2;i<=a;i++)
        {
            if(i%2 == 0)
            {
                cout<<"that I love ";
            }
            else if(i%2 != 0)
            {
                cout<<"that I hate ";
            }
        }
        cout<<"it";
    }
    else
    {
        cout<<"I hate it";
    }
}
