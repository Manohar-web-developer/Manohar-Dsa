// Q001 - Reverse Number
// Topic: Number Problems | Difficulty: Easy
//
// Problem: Given a positive integer N, print the number formed by reversing its
// digits. Leading zeros of the reversed number are not printed (1200 becomes
// 21).. Sample Input : 1200 Sample Output: 21 Constraints  : 1 <= N <= 10^9

#include <iostream>
using namespace std;

int main() {
  int n = 1200;
  int x = 0;

  while (n != 0) {
    
    int digit = n % 10;
    x = x * 10 + digit;
    n /= 10;
  }


cout << x << endl;



  return 0;
}
