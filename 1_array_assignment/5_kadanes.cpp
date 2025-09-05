#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> a={-2,1,-3,4,-1,2,1,-5,4};

    int n=a.size();

    int maxSum=0;
    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum+=a[i];

        if(sum<0){
            sum=0;
        }

        maxSum=max(maxSum,sum);
    }

    cout<<maxSum<<endl;

    return 0;
}