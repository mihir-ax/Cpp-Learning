#include <iostream>
using namespace std;

int main()
{
  // Question: Write a program to print the sum of the following series up to
  // n terms : Series : 1 -2 +3 −4 + 5 −6... up to n terms.

  int n;
  cout << "Enter a number : ";
  cin >> n;
  int sum = 0;

  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0)
    {
      sum += ((-1) * i);
    }
    else if (i % 2 != 0)
    {
      sum += i;
    }
  }

  cout << "Sum is : " << sum;
}
