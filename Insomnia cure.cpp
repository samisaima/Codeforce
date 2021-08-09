#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int k,l,m,n,t;
    cin>>k>>l>>m>>n>>t;
    int i,c=0;
    for(i=1;i<=t;i++)
    {
        if(i%k != 0 &&  i%l != 0 &&  i%m != 0 &&  i%n != 0  )
        {
            c++;
        }
    }
    cout<<t-c;
}
