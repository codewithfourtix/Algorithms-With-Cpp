// calculate the square of a number without using the * operator by using a loop to add the number to itself repeatedly
#include <iostream>
using namespace std;

int square(int num)
{
  if (num == 0)
    return 0;

  int result = 0;
  int absNum = num > 0 ? num : -num; // Handle negative numbers

  // Repeatedly add 'num' to result 'num' times
  for (int i = 0; i < absNum; i++)
  {
    result += absNum;
  }

  // If the original number was negative, return the result as positive
  return num < 0 ? -result : result;
}

int main()
{
  int num;
  cout << "Enter a number: ";
  cin >> num;

  cout << "Square of " << num << " is: " << square(num) << endl;

  return 0;
}
