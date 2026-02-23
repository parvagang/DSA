#include <iostream>
using namespace std;
int main() {
    int n,i,count=0;
    char isPrime=true;
    cout<<"enter a number: ";
    cin>>n;
    for (i=2;i<n;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
        }  
    if(isPrime==true){
        cout<<n<<" is a prime number";
    }
    else{
        cout<<n<<" is not a prime number";
    }

    return 0;
}