#include <iostream>
using namespace std;
int main() {
    int n,sumOdd=0,sumEven=0;
    cout<<"enter a num: ";
    cin>>n;
    for(int i=1;i<=n;i++){
    if(i%2!=0){
        sumOdd+=i;

    }
    else 
        sumEven+=i;
    }
    cout<<"sum of odd numbers: "<<sumOdd<<endl;
    cout<<"sum of even numbers: "<<sumEven<<endl;
    return 0;
}