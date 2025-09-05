#include<iostream>
#include<map>
using namespace std;


int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    map<int,int> mpp;

    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }

    int ans=0;

    for(auto it:mpp)
    {
        int freq=it.second;

        if(freq>n/2){
            ans=it.first;
        }
    }

    cout<<ans<<endl;

    return 0;
}