#include<iostream>
using namespace std;

int countSetBits(int n){
    int count = 0;
    while(n != 0){
        if(n & 1)
            count++;
        n = n >> 1;
    }
    return count;
}

int main(){
    int a, b;
    cin >> a >> b;

    int total = countSetBits(a) + countSetBits(b);

    cout << "Total set bits: " << total;
}
