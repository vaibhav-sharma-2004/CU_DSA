#include<iostream>
#include<limits.h>
using namespace std;
/*
take N inputs and find the maximum,minimum and mean value of N inputs
*/

int main(){

    int n;
    cin>>n;

    int maxi=INT_MIN;
    int mini=INT_MAX;
    int sum=0;

    int i=1;

    while(i<=n){

        int num;
        cin>>num;

        sum=sum+num;

        if(num>maxi){
            maxi=num;
        }

        if(num<mini){
            mini=num;
        }

        i=i+1;
    }
    
    cout<<"maximum number:"<<maxi<<endl;

    cout<<"minimum number:"<<mini<<endl;

    cout<<"mean value:"<<sum/n<<endl;

    

    return 0;
}