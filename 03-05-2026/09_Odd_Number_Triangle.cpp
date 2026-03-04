#include <iostream>
using namespace std;

int main()
{

  // Write a program to print a triangle containing only odd numbers.


  int n;
  cout << "Enter n : ";
  cin >> n;

  for ( int i = 1; i <= n; i++){
    for (int j = 1; j <= i*2; j++){
      if (j % 2 != 0){
        cout << j << " ";
      }
    }
    cout << "\n";
  }
}
