#include <iostream>
using namespace std;

int gcd(int a, int b)
{
  int h = 1;
  for (int i = 2; i <= min(a, b); i++)
  {
    if (a % i == 0 && b % i == 0)
    {
      h = i;
    }
  }
  return h;
}

int main()
{
  int n1, n2;
  cout << "Enter first number to find GCD : ";
  cin >> n1;
  cout << "Enter second number to find GCD : ";
  cin >> n2;
  cout << (gcd(n1, n2));
}
