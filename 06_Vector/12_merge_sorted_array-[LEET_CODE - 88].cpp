#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> nums1 = {1, 2, 3, 0, 0, 0};
  int m = 3;
  vector<int> nums2 = {2, 5, 6};
  int n = 3;

  int i = m - 1;
  int j = n - 1;
  int k = m + n - 1;

  while (k >= 0)
  {
    if (i >= 0 && j >= 0)
    {
      if (nums1[i] >= nums2[j] && i >= 0)
      {
        nums1[k] = nums1[i];
        k--;
        i--;
      }
      else if (nums2[j] >= nums1[i] && j >= 0)
      {
        nums1[k] = nums2[j];
        k--;
        j--;
      }
    }
    else if (j < 0)
    {
      nums1[k] = nums1[i];
      k--;
      i--;
    }
    else if (i < 0)
    {
      nums1[k] = nums2[j];
      k--;
      j--;
    }
  }

  for (int l = 0; l < m + n; l++)
  {
    cout << nums1[l] << " ";
  }
}
