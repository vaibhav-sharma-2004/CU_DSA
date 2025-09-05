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
        for(int second=first+1;second<=n-2;second++)
        {
            for(int third=second+1;third<=n-1;third++)
            {
                int ele1=a[first];
                int ele2=a[second];
                int ele3=a[third];

                if(ele1+ele2+ele3==target){
                    cout<<ele1<<", "<<ele2<<" and "<<ele3<<endl;
                }
            }
        }
    }

    return 0;

}