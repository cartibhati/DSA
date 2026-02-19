#include<iostream>
using namespace std;

long long fact(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * fact(n-1);
}

long long nCr(int n, int r){
    long long num = fact(n);
    long long den = fact(r) * fact(n-r);
    return num / den;
}

int main(){
    int n, r;
    cin >> n >> r;

    if(r > n){
        cout << "Invalid input";
        return 0;
    }

    cout << "Answer for the given n and r is: " << nCr(n,r);
}
