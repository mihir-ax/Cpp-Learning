#include <bits/stdc++.h>
using namespace std;

int main()
{
  int number_of_inputs;
  cout << "How many numbers you want to give ? : ";
  cin >> number_of_inputs;
  int value = 0;
  vector<int> v;
  for (int i = 0; i < number_of_inputs; i++)
  {
    cout << "enter the value " << i << " : ";
    cin >> value;
    v.push_back(value);
  }
  int x;
  cout << "Enter the 2s sum : ";
  cin >> x;

  for (int i = 0; i < v.size() - 1; i++)
  {
    for (int j = i+1; j < v.size(); j++)
    {
      if ((v.at(i) + v.at(j)) == x)
      {
        cout << "(" << i << ", " << j << ")";
      }
    }
  }
}
