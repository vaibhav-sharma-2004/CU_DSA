#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<int> prices(n);

        for(int i=0;i<n;i++)
        {
            cin>>prices[i];
        }

        int money;
        cin>>money;

        sort(prices.begin(),prices.end());

        int left=0;
        int right=n-1;
        int rose1=0;
        int rose2=0;

        while(left<right){
            
            if(prices[left]+prices[right]==money){

                rose1=prices[left];
                rose2=prices[right];
                left++;
                right--;
            }

            else if(prices[left]+prices[right]>money){
                right--;
            }

            else{
                left++;
            }
        }

        cout<<"Deepak should buy roses whose prices are "<< rose1<<" and "<<rose2<<"."<<endl;

    }
    return 0;
}