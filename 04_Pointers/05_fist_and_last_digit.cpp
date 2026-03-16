#include <iostream>
using namespace std;

void fisrtlast(int n){

  int lastDigit = n%10;
  int fisrtDigit = n;

  for (int i = 1; i <= fisrtDigit; i++){
    fisrtDigit = fisrtDigit/10;
  }

  cout << fisrtDigit << " " << lastDigit;
}

int main() {

  int number = 4508;
fisrtlast(number);
}
