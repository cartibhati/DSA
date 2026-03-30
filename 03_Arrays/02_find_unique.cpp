#include<iostream>
using namespace std;
int findUnique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[5]={1,3,3,2,1};
    int n=5;
    cout<<"the unique number in the array is: "<<findUnique(arr,n);
}