#include <iostream>
using namespace std;

int main()
{

  int num = 70;

  int *pointer = &num;

  cout << "Address " << pointer << "\n value " << *pointer << "\n";

  pointer = pointer + 2;

  cout << "Address " << pointer << "\n value " << *pointer;
}
