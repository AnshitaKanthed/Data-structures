// You are given a positive integer n. Your task is to find and return its square root. 
// If ‘n’ is not a perfect square, then return the floor value of 'sqrt(n)'.
// If the given number, n, is not a perfect square, find the maximum number, x, 
// such that x squared is less than or equal to n (x*x <= n).

#include <bits/stdc++.h>
using namespace std;

int floorSqrt(int n) {
    int ans = sqrt(n);
    return ans;
}

int main()
{
    int n = 28;
    int ans = floorSqrt(n);
    cout << "The floor of square root of " << n
         << " is: " << ans;
    return 0;
}


// Binary search

// #include <bits/stdc++.h>
// using namespace std;

// int floorSqrt(int n) {
//     int low = 1, high = n;
//     //Binary search on the answers:
//     while (low <= high) {
//         long long mid = (low + high) / 2;
//         long long val = mid * mid;
//         if (val <= (long long)(n)) {
//             //eliminate the left half:
//             low = mid + 1;
//         }
//         else {
//             //eliminate the right half:
//             high = mid - 1;
//         }
//     }
//     return high;
// }

// int main()
// {
//     int n = 28;
//     int ans = floorSqrt(n);
//     cout << "The floor of square root of " << n
//          << " is: " << ans << "\n";
//     return 0;
// }
