#include<iostream>
using namespace std;

int main(){


    cout<<"Enter a number: ";
    int n;
    cin>>n;

    int sum=0;
    for(int counter = 1; counter <= n; counter++){
        sum+=counter;
    }
    cout<<"Sum of all numbers from 1 to "<<n<<" is "<<sum<<endl;
    return 0;
}