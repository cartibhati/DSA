#include<iostream>
using namespace std;
bool isEven(int n){
    if(n&1){
        return 0;
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    if(isEven(n)){
        cout<<"number is even";
    }
    else{
        cout<<"number is odd";
    }

}