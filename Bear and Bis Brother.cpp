#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int b,bb ,n, i=0;
    cin>>b;
    cin>>bb;
    while(n!=1){
        b=b*3;
        bb=bb*2;
        if(b>bb)
        {
            n=1;
        }
        i++;
    }
    if(b==bb){
        i=1;
    }
    cout<<i;
}
