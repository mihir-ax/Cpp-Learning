#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> nums = {3, 2, 1};
  int i = nums.size() - 2;
  int k = nums.size() - 1;

  while (k >= 0)
  {
    if (nums[k] > nums[i])
    {
      int *m = &nums[k];
      int *n = &nums[i];
      int temp = *m;
      *m = *n;
      *n = temp;
      i--;
      k--;
      break;
    }
    else
    {
      i--;
      k--;
    }
  }

  for (int x = 0; x < nums.size(); x++)
  {
    cout << nums[x] << " ";
  }
}
