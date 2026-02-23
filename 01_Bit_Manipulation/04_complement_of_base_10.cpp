#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=n;
        int mask=0;

        if(n==0)
        return 1;

        //mask banane ki process
        while(m!=0){
            mask=(mask<<1)|1;
            m=m>>1;         //mask 0 tha , ab 101 me last 1 jaha tak hai utne 111 chaiye , to iske liye mask ko left shift krke 1 ke sath or le lia , ab ye pata kaise chala ki last 1 kaha hai , isliye next line me right shift kia
        }
        int ans=(~n)&mask;

        cout<<ans;
}