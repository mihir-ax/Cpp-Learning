#include <iostream>
using namespace std;

int main()
{
  // Find a given element x in the array. Take the array and x as input. If x is present, print "Element Found", otherwise print "Element Not Found".

  int size, x;
  cout << "Enter the size of array : " << "\n";
  cin >> size;
  int arr[size];

  cout << "Enter the numbers with space : " << "\n";
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  cout << "Enter the number X which you want to find : " << "\n";
  cin >> x;

  bool flag = false;

  for (int i = 0; i < size; i++)
  {
    if (arr[i] == x)
    {
      cout << "Element found at " << i << " Position !";
      flag = true;
      break;
    }
  }

  if (flag == false)
  {
    cout << "Element Not Found !";
  }
}
