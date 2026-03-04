#include <iostream>
using namespace std;

int main()
{

  // Write a program to print a square where each row contains numbers from 1 to n.

  int n;
  cout << "Enter n : ";
  cin >> n;

  for ( int i = 1; i <= n; i++){
    for ( int j = 1; j <= n; j++){
      cout << j << " ";
    }
    cout << "\n";
  }


}
