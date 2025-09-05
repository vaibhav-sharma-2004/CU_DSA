#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    //#OPTIMAL APPROACH

    int element=-1;
    int count=0;

    for(int i=0;i<n;i++)
    {
        if(count==0){
            element=arr[i];
            count=1;
        }

        else if(arr[i]==element){
            count++;
        }

        else{
            count--;
        }
    }

    int freq=0;

    for(int i=0;i<n;i++)
    {
        if(element==arr[i]){
            freq++;
        }
    }

    if(freq>n/2){
        cout<<element<<endl;
    }

    return 0;
}