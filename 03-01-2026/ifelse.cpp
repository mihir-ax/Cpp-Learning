#include <iostream>
using namespace std;

int main()
{
  int num;

  // cout << "ENter a number: ";

  // cin >> num;

  // if (num % 2 == 0)
  // {
  //   cout << num << " Is EVEN Number !";
  // }
  // else
  // {
  //   cout << num << " Is ODD Number !";
  // }

  // if (num >= 0)
  // {
  //   cout << num;
  // }
  // if (num < 0)
  // {
  //   int absolute = num * (-1);
  //   cout << "Absolute value is " << absolute;
  // }

char value;

cout << "Enter anything but one charector !";

cin >> value;

int check = value;

if ((value >= 65 && value <= 90) || (value >= 97 && value <= 122)){
  cout << "value is alphabet ! " << value;
} else {
  cout << " value is not a alphabet ! " << value;
}

// if ()


}
