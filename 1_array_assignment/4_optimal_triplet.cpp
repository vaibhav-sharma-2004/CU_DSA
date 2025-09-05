#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int target;
    cin>>target;

    sort(a.begin(),a.end());

    for(int first=0;first<=n-3;first++)
    {
        int l=first+1;
        int r=n-1;

        while(l<r){

            int ele1=a[first];
            int ele2=a[l];
            int ele3=a[r];

            int sum=ele1+ele2+ele3;

            if(sum==target){

                cout<<ele1<<", "<<ele2<<" and "<<ele3<<endl;
                l++;
                r--;
            }

            else if(sum>target){

                r--;
            }

            else{
                l++;
            }
        }
    }

    return 0;

}