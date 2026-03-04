#include <iostream>
using namespace std;

int main()
{
  int num;
  // cout << "enter a number : ";
  //   cin >> num;

  //   for (int i = 0; i <= num; i++){
  //     cout << i << "\n";
  //   }

  // print all alhabet !!

  for (char alphabet = 'A'; alphabet <= 90; alphabet++)
  {
    int ascii = alphabet;
    cout << alphabet << " - " << ascii << endl;
  }
}
