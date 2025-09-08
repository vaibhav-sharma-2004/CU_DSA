#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int curr_max=a[0];
        int curr_min=a[0];

        int totalSum=a[0];
        int linearSum=a[0];
        int circularSum=a[0];

        int minSum=a[0];

        for(int i=1;i<n;i++)
        {
            totalSum+=a[i];

            //current maximum sum find kro

            curr_max=max(curr_max+a[i],a[i]);

            curr_min=min(curr_min+a[i],a[i]);

            linearSum=max(linearSum,curr_max);

            minSum=min(curr_min,minSum);

        }

        circularSum=totalSum-minSum;

        if(linearSum<0){

            cout<<linearSum<<endl;
        }

        else{
            int ans=max(linearSum,circularSum);
            cout<<ans<<endl;
        }

    }

    return 0;
}