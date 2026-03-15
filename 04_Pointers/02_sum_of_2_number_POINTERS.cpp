#include <iostream>
using namespace std;

int main()
{

  // int a, b;
  // int *x = &a;
  // int *y = &b;

  // cout << "ENter a number : " << endl;
  // cin >> *x;
  // cout << "ENter another number : " << endl;
  // cin >> *y;

  // cout << a + b << endl;
  // cout << *x + *y;

  int x, y;
  cout << "Enter the Fist Number : ";
  cin >> x;
  cout << "Enter the Second Number : ";
  cin >> y;

  int *xx = &x;
  int *yy = &y;

  cout << "Sum of those two numbers is : " << *xx + *yy;
}
