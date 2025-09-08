#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n;
    cin>>n;

    vector<long long> a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    long long product=1;

    for(int i=0;i<n;i++)
    {
        product=product*a[i];
    }

    for(int i=0;i<n;i++)
    {
        a[i]=(product/a[i]);
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}