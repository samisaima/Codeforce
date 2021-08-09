#include<iostream>
using namespace std;
int main ()
{

    int n;
    cin>>n;
    int x[n], y[n];
    int i,j,c=0;


    for(i=0;i<n;i++)
    {

        cin>>x[i]>>y[i];

    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(x[i] == y[j])
            {
                c++;
            }
        }
    }
    cout<<c;

}
