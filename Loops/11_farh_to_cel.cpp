#include<iostream>
using namespace std;

int main(){

    int initial;
    cin>>initial;

    int last;
    cin>>last;

    int step;
    cin>>step;

    // int eg=1.232;
    // cout<<eg<<endl;

    while(initial<=last){

        float cel= (5/9.0)*(initial-32);

        cout<<cel<<endl;

        initial=initial+step;
    }

    return 0;
}