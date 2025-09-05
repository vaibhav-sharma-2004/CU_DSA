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


    //step 1:traverse on each roof

    for(int i=1;i<n-1;i++)
    {
        int roof=a[i];

        //step 2: left maximum value
        int leftMax=-1;

        for(int left=0;left<=i-1;left++)
        {
            leftMax=max(leftMax,a[left]);
        }

        //step 3: right maximum value
        int rightMax=-1;

        for(int right=i+1;right<n;right++)
        {
            rightMax=max(rightMax,a[right]);
        }

        //step 4: water stored on current roof

        int mini=min(rightMax,leftMax);

        int current_water=0;

        // if(mini<=roof){
        //     current_water=0;
        // }

        if(mini>roof){

            current_water=mini-a[i];
        }

        //cout<<current_water<<endl;

        //step 5: add current water stored to the final answer
        totalWater+=current_water;
    }

    cout<<totalWater<<endl;
}