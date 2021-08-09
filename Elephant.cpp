#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int x,r,t;
    cin>>x;
    if(x<5){
        r=1;
    }
    else if(x==5)
    {
        r=1;
    }
    else {
        t=x/5;
        if(x%5!=0){
            r=t+1;
        }
        else if(x%5==0){
            r=t;
        }
    }
    cout<<r;


}
