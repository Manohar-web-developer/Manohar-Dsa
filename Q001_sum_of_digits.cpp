// Q001 - Sum of Digits
// Topic: Number Problems | Difficulty: Easy
//
// Problem: Given a non-negative integer N, print the sum of all its digits.
// Sample Input : 4729
// Sample Output: 22
// Constraints  : 0 <= N <= 10^9

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int sum = 0;

  while (n != 0) {
    int digit = n % 10;
    sum += digit;
    n /= 10;
  }
  cout << sum << endl;
  return 0;
}
