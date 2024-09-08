#include <iostream>
#include <vector>
#include <limits.h> // For INT MIN

using namespace std;

int findMax(const vector<int> &nums)
{
  if (nums.empty())
    return INT_MIN;

  int maxVal = nums[0];

  for (int i = 1; i < nums.size(); i++)
  {
    if (nums[i] > maxVal)
    {
      maxVal = nums[i];
    }
  }

  return maxVal;
}

int main()
{
  vector<int> nums = {3, 5, 7, 2, 8, 10, 1};
  cout << "Maximum Value: " << findMax(nums) << endl;
  return 0;
}
