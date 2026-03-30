// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int i=0;
//     int ans=0;
//     int n;
//     cin>>n;
//     while(n!=0){
//         int bit=n&1;
//         ans= bit*pow(10,i)+ans;
//         n=n>>1;
//         i++;
//     }
//     cout<< ans;
//     return 0;
// }
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n == 0) {
        cout << 0;
        return 0;
    }

    int ans = 0;
    int place = 1;

    while(n != 0) {
        int bit = n & 1;
        ans += bit * place;
        n = n >> 1;
        place *= 10;
    }

    cout << ans;
}
