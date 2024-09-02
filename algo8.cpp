#include <iostream>
using namespace std;

int main()
{
  int n, reverse = 0;
  cout << "Enter a number: ";
  cin >> n;
  while (n != 0)
  {
    int digit = n % 10;
    reverse = reverse * 10 + digit;
    n /= 10;
  }
  cout << "Reversed number is: " << reverse << endl;
  return 0;
}
