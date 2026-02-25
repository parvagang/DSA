#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;;
    for(int i = 1; i <= n ; i++){
        fact *= i;
    }
    return fact;
}
int nCr(int n, int r){
    int a = factorial(n);
    int b = factorial(r);
    int c = factorial(n-r);
    int d = a / (b * c);
    return d;

}



int main() {
    
    

    return 0;
}