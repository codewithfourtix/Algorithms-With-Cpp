// Swaping the string
#include <iostream>
#include <string>
using namespace std;

string reverseString(string s)
{
  int n = s.length();
  for (int i = 0; i < n / 2; i++)
  {
    swap(s[i], s[n - i - 1]);
  }
  return s;
}

int main()
{
  string str = "hello";
  cout << "Reversed string: " << reverseString(str) << endl;
  return 0;
}
