// Pasha has a wooden stick of some positive integer length n. He wants to perform exactly three cuts to get four parts of the stick. Each part must have some positive integer length and the sum of these lengths will obviously be n.

// Pasha likes rectangles but hates squares, so he wonders, how many ways are there to split a stick into four parts so that it's possible to form a rectangle using these parts, but is impossible to form a square.

// Your task is to help Pasha and count the number of such ways. Two ways to cut the stick are considered distinct if there exists some integer x, such that the number of parts of length x in the first way differ from the number of parts of length x in the second way.

// Input
// The first line of the input contains a positive integer n (1 ≤ n ≤ 2·109) — the length of Pasha's stick.

// Output
// The output should contain a single integer — the number of ways to split Pasha's stick into four parts of positive integer length so that it's possible to make a rectangle by connecting the ends of these parts, but is impossible to form a square.

//On my first attemped i have solved 90 percent of the problem 

// #include <bits/stdc++.h>
// using namespace std;

// int main (){
//     int n; 
//     cin >> n;
//     if(n<=5 || n%2 != 0){
//     	cout << 0 << endl;
//     }
//     else{
//          int ans =0;
//          int i=1 ;
//          int x = i;
//          int y = n/2 -i;
//          while(x<=y){
//              i++;
//              ans++;    
//          }
//          cout << ans << endl;
//     }
//     return 0; 
// }


// On my second attemp i got this problem 

// #include <bits/stdc++.h>
// using namespace std;

// int main (){
//     long long n; 
//     cin >> n;

//     if(n <= 5 || n % 2 != 0){
//         cout << 0 << endl;
//     }
//     else{
//            long long ans = 0;
//            long long i = 1;

//         while(i < (n/2 - i)){
//             ans++;
//             i++;
//         }

//         cout << ans << endl;
//     }

//     return 0; 
// }


// After giving the llm - optimal solution I got in which I have to just find out the even number from 1 to n/2 -1 ; which i wasn't able to think 😅 which gives time complexity of O(1)

#include <bits/stdc++.h>
using namespace std;

int main (){
    long long n; 
    cin >> n;

    if(n % 2 != 0){
        cout << 0 << endl;
    }
    else{
        long long k = n / 2;
        long long ans = (k - 1) / 2;
        cout << ans << endl;
    }

    return 0; 
}
