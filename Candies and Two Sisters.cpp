#include<iostream>
using namespace std;
int main ()
{
    int b,i;
    cin>>b;
    int a[b];
    for(i=0;i<b;i++)
    {
        cin>>a[i];

        if(a[i]== 1 || a[i]==2)
        {
            cout<< "0"<<endl;
        }
        else
        {
            cout<< (a[i]-1)/2<<endl;
        }
    }
}
