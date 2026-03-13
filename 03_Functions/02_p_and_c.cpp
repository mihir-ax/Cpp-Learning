#include <iostream>
using namespace std;

int combinations(int n, int r)
{
  int num = 1;
  int ru = 1;
  int nminusr = n - r;
  int o = 1;
  for (int i = n; i >= 1; i--)
  {
    num *= i;
  }
  for (int i = r; i >= 1; i--)
  {
    ru *= i;
  }
  for (int i = nminusr; i >= 1; i--)
  {
    o *= i;
  }

  return ((num) / (ru * (o)));
}

int permutations(int n, int r){
  int num = 1;
  int nminusr = (n - r);
  int ra = 1;

  for (int i = n; i >= 1; i--){
    num *= i;
  }
  for (int i = nminusr; i >= 1; i--){
    ra *= i;
  }

  return (num/ra);
}

int main()
{

  int n, r;

  cout << "Enter N : ";
  cin >> n;
  cout << "Enter R : ";
  cin >> r;

  cout << "Combinations is " << combinations(n, r) << "\n";
  cout << "Permutations is " << permutations(n, r);
}
