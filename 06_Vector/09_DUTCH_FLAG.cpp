#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> nums = {0, 2, 1, 0, 2, 1, 0, 2, 1, 0, 2, 1, 0, 2, 1};

  int i = 0;
  int j = 0;
  int k = nums.size() - 1;

  while (j <= k)
  {
    if (nums[j] == 0)
    {
      int *zero = &nums[j];
      if (nums[k] == 2)
        k--;
      int *ii = &nums[i];
      int temp = *zero;
      *zero = *ii;
      *ii = temp;
      j++;
      i++;
    }
    else if (nums[j] == 2)
    {
      int *two = &nums[j];
      int *kk = &nums[k];
      int temp = *two;
      *two = *kk;
      *kk = temp;
      // j++;
      k--;
    }
    else if (nums[j] == 1)
    {
      j++;
    }
  }

  for (int m = 0; m < nums.size(); m++)
  {
    cout << nums[m] << " ";
  }
}
