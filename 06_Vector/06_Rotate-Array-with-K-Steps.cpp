#include <bits/stdc++.h>
using namespace std;

int main()
{
  // Ques : Rotate the given array 'a' by k steps, where k is non-negative.
  // Note : k can be greater than n as well where n is the size of arrav 'a'.

  vector<int> v = {5, 8, 6, 10, 2, 50};
  int k = 2;

  int start = 0;
  int end = 0;

  for (int i = 1; i <= k; i++)
  {
    int *a = &v[start];
    int *b = &v[end];
    int temp = *a;
    *a = *b;
    *b = temp;
    start++;
    end--;
  }

  for (int i = 0; i <= v.size() - 1; i++)
  {
    cout << v[i] << " ";
  }
}

