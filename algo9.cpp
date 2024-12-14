// Problem: Calculate the sum of only the prime digits (2, 3, 5, 7) in a given positive integer.
// Concepts: Loops, Condit
#include <iostream>
using namespace std;

bool isPrimeDigit(int digit)
{
  return (digit == 2 || digit == 3 || digit == 5 || digit == 7);
}

int main()
{
  int number, sum = 0;
  cout << "Enter a positive integer: ";
  cin >> number;

  while (number > 0)
  {
    int digit = number % 10;
    if (isPrimeDigit(digit))
    {
      sum += digit;
    }
    number /= 10;
  }

  cout << "Sum of prime digits: " << sum << endl;
  return 0;
}
