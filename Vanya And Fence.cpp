#include<iostream>

using namespace std;

int main()
{
    int n,h,i,cnt=0;
    cin>>n>>h;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
    {
        if(a[i]>h)
        {
            cnt+=2;
        }
        else
            cnt++;
    }
    cout<<cnt;
    return 0;
}

