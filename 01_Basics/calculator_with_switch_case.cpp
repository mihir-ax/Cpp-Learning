#include <iostream>
using namespace std;

int main()
{

  cout << "Enter two values : ";
  int value1, value2;
  cin >> value1;
  cin >> value2;
  cout << "Enter sign : ";
  char sign;
  cin >> sign;

  switch (sign)
  {
  case '+':
    cout << value1 + value2;
    break;
  case '-':
    cout << value1 - value2;
    break;
  case '*':
    cout << value1 * value2;
    break;
  case '/':
    cout << value1 / value2;
    break;
  }

  return 0;
}
