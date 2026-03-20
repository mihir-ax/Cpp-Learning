#include <bits/stdc++.h>
using namespace std;

int first(int start, int end)
{
}

int main()
{
  // Ques : Rotate the given array 'a' by k steps, where k is non-negative.
  // Note : k can be greater than n as well where n is the size of arrav 'a'.

  vector<int> v = {7, 14, 21, 28};
  int k = 0;

  if (k >= v.size())
  {
    k = k % v.size();
  }
  else if (k > 0)
  {
    // first part !!
    int fstart = 0;
    int fend = v.size() - k - 1;
    while (fstart < fend)
    {
      int *a = &v[fstart];
      int *b = &v[fend];
      int temp = *a;
      *a = *b;
      *b = temp;
      fstart++;
      fend--;
    }

    for (int i = 0; i <= v.size() - 1; i++)
    {
      cout << v[i] << " ";
    }
    cout << endl;
    // second part
    int sstart = v.size() - k;
    int send = v.size() - 1;
    while (sstart < send)
    {
      int *a = &v[sstart];
      int *b = &v[send];
      int temp = *a;
      *a = *b;
      *b = temp;
      sstart++;
      send--;
    }

    int i = 0;
    int j = v.size() - 1;
    while (i < j)
    {
      int *a = &v[i];
      int *b = &v[j];
      int temp = *a;
      *a = *b;
      *b = temp;
      i++;
      j--;
    }
  }

  for (int i = 0; i <= v.size() - 1; i++)
  {
    cout << v[i] << " ";
  }
}
