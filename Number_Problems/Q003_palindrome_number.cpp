// Q001 - Reverse Number
// Topic: Number Problems | Difficulty: Easy
//
// Problem: Given an integer N, print "Yes" if it reads the same from left to right and right to left, otherwise print "No". Negative numbers are never palindromes.
// Sample Input : 12321 Sample Output: Yes Constraints  : -10^9 <= N <= 10^9

#include <iostream>
using namespace std;

int main() {
int n = 12321;
int original = n;

    int reverse = 0;

    if (n <= 0) {
        return  0;
    }

    while (n != 0) {
        
        int digit = n % 10;

        reverse = (reverse * 10) + digit;
        n /= 10;

    }
    if (reverse == original) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    
    }

return 0;
}
