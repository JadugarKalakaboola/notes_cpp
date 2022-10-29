#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    while(n>=0){
        cout<<n<<endl;
        cin>>n;
    }

    cout<<"Got a negative integer: "<<n<<endl<<"Exiting program...";

    return 0;
}