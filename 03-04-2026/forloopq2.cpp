#include <iostream>
using namespace std;

int main()
{
  // Write a program to count the total number of digits in a given number n.
  // Example : If n = 1971 the output should be 4.

  int n = 764512;
  bool a = true;
  int r;

  int count = 0;

  if (n == 0)
  {
    count = 1;
  }

  while (n != 0)
  {
    n = n / 10;
    count++;
    // cout << "Total digits are : " << count << endl;
  }

  cout << "Total digits are : " << count << "\n";
}
