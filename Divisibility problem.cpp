#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    int b[a],c[a],i,maxn[a],minn[a],tr;
    for(i=0;i<a;i++)
    {
        cin>>b[i]>>c[i];
        maxn[i] = max(b[i],c[i]);
        minn[i] = min(b[i],c[i]);

    }
    for(i=0;i<a;i++)
    {
        if(maxn[i]% minn[i] != 0)
        {
            tr=(maxn[i]/minn[i])+1;
            cout<<(minn[i]*tr)-minn[i]<<endl;

        }
        else
        {
            cout<<"0"<<endl;
        }
    }

    getch();
}
