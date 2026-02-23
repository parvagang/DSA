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





    int n,i=1,sum=0;
    cout<<"enter a number: ";
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%3==0){
            sum=sum+i;
        }

    }
    cout<<"sum of numbers which are divisible by 3 from 1 to "<<n<<" is: "<<sum;




    int n,i=1,factorial=1;
    cout<<"enter a number: ";
    cin>>n;
    for(i=1;i<=n;i++){
        factorial=factorial*i;
    }
    cout<<"factorial of "<<n<<" is: "<<factorial;

    return 0;
}