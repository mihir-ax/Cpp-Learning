#include <iostream>
using namespace std;

// void swap(int *x, int *y)
// {
//   int temp = *x;
//   *x = *y;
//   *y = temp;
// }

// int main()
// {
//   int num1 = 5;
//   int num2 = 8;

//   swap(&num1, &num2);

//   cout << num1 << " " << num2;
// }

// one more way seedha adress hi badal do dono ka !!
void swaap(int &x, int &y)
{
  int temp = x;
  x = y;
  y = temp;
}

int main()
{
  int a = 5, b = 7;

  swaap(a, b);
  cout << a << " " << b;
}
