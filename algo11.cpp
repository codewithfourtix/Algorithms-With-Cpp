#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter an integer: ";
  cin >> num;

  // Divide by 2 and multiply by 2
  if ((num / 2) * 2 == num)
  {
    cout << num << " is even." << endl;
  }
  else
  {
    cout << num << " is odd." << endl;
  }

  return 0;
}
