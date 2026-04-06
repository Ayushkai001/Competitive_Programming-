// To find out the digit sum of t cases 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t;
    while(t--){
        int n ; 
        cin >> n;
        int digit_sum = 0;
        while(n>0){
           int k = n%10;
           digit_sum = digit_sum +k;
           n = n/10;
        }
        cout << digit_sum << endl;
    }
    return 0 ; 

}