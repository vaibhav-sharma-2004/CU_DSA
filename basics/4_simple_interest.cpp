#include<iostream>
using namespace std;

//take principle, rate and time from user and calculate the simple interest and print it

int main(){

    int principle;
    int rate;
    int time;

    cin>>principle;
    cin>>rate;
    cin>>time;

    float SI;

    SI= (principle*rate*time)/(100.0) ;

    cout<<"simple interest is:"<<SI<<endl;
    return 0;
}