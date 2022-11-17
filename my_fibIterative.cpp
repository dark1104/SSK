#include<bits/stdc++.h>

using namespace std;

void fib(int n)
{
    int x=0, y=1, z=0;

    for(int i=0; i<n; i++)
    {
        cout<<x<<"  ";
        z = x+y;
        x = y;
        y = z;
    }
}

int main()
{
    int n;
    cin>>n;

    fib(n);
    return 0;
}