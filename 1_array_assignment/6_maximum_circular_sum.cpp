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

        int minSum = 0;
        int sum = 0;
        int totalSum = 0;

        // step 1: find maximum circular subarray
        for (int i = 0; i < n; i++)
        {
            totalSum += a[i];
            sum += a[i];

            if (sum > 0)
            {
                sum = 0;
            }

            minSum = min(minSum, sum);
        }
        int circularSum = totalSum - minSum;

        // step 2: find maximum subarray

        int KadaneSum = 0;
        sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += a[i];

            if (sum < 0)
            {
                sum = 0;
            }

            KadaneSum = max(KadaneSum, sum);
        }

        int ans=max(KadaneSum,circularSum);
        

        cout << ans<< endl;
    }

    return 0;
}