#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int a,b,c,d,e,n=1;
    cin>>a;
    while(n!=0)
    {
        a++;
        b=a/1000;
        c=(a/100)%10;
        d=(a/10)%10;
        e=a%10;
        if(b!=c && b!=d && b!=e && c!=d && c!=e && d!=e)
        {
            n--;
        }
    }
    cout<<a;

}
