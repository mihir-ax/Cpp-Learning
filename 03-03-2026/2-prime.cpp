#include <iostream>
using namespace std;

int main()
{
  int max = 5000;
  int i;
  int prime = 0;
  for (i = 2; i < max; i++)
  {
    bool is_prime = true;
    for (int j = 1; j < i; j++)
    {

      if ((j != 1) && (i % j == 0))
      {
        is_prime = false;
        break;
      }
    }
    if (is_prime)
    {
      cout << i << " is primr number \n";
      prime++;
    }
  }

  cout << "Total Prime Numbers Under " << max << " is " << prime;
}
