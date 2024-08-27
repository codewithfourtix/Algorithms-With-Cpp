// Reversing the array
#include <iostream>
using namespace std;
int reverseFunc(int arr[], int sizeOfArray)
{
  int start = 0;
  int end = sizeOfArray - 1;
  while (start < end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
  reverseFunc(arr, sizeOfArray);
  for (int i = 0; i < sizeOfArray; i++)
  {
    cout << arr[i] << endl;
  }
  return 0;
}