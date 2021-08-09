#include<iostream>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    int c=0;

    while(a!=0)
    {
        if(a%100 == 0)
        {
            a=a-100;
            c++;
        }
         else if(a%20 == 0)
        {
            a=a-20;
            c++;
        }
           else if(a%10 == 0)
        {
            a=a-10;
            c++;
        }
           else if(a%5 == 0)
        {
            a=a-5;
            c++;
        }
           else if(a%1 == 0)
        {
            a=a-1;
            c++;
        }
    }
    cout<<c;

}
