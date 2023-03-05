#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    cin>>k;

    int total_time=240,solve=0;
    int i;
    for(i=1;i<=n;i++)
    {
        if((i*5)+k<=total_time){solve++; total_time=total_time-(i*5);}
    }

    cout<<solve;


    return 0;
}




