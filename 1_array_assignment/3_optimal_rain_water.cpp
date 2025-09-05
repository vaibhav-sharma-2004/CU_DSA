#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int totalWater=0;

    //step 1: precompute leftMax
    int leftMax=-1;

    // int leftMax[n];

    // leftMax[0]=a[0];

    // for(int i=1;i<n;i++)
    // {
    //     leftMax[i]=max(a[i-1],leftMax[i-1]);
    // }

    //step 2: precompute rightMax

    int rightMax[n];

    rightMax[n-1]=a[n-1];

    for(int i=n-2;i>=0;i--)
    {
        rightMax[i]=max(rightMax[i+1],a[i+1]);
    }


    // step 3: iterate over each roof and find the stored water

    for(int i=1;i<n-1;i++)
    {
        leftMax=max(leftMax,a[i-1]);

        int right=rightMax[i];

        int mini=min(leftMax,right);

        if(mini>a[i]){

            int current_water=mini-a[i];

            totalWater+=current_water;
        }
    }

    cout<<totalWater<<endl;

    return 0;

}