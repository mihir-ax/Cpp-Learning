#include <iostream>
using namespace std;

int main()
{
  // Given an array containing the marks of students, print the roll numbers of students who scored less than 35.

  int arr[] = {50, 36, 22, 94, 52, 82, 10, 16, 47};
  for (int i = 0; i <= (sizeof(arr) / sizeof(arr[0])); i++)
  {
    if (arr[i] < 35)
    {
      cout << i << "  ";
    }
  }
}
