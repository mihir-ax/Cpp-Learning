#include <iostream>
using namespace std;

void upperDiamond(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n * 2; j++)
    {
      if (i == 1)
      {
        if (j < n || j > n)
        {
          cout << "  ";
        }
        else
        {
          cout << "* ";
        }
      }
      else
      {
        if (j <= n - i)
        {
          cout << "  ";
        }
        else if (j == n - i + 1)
        {
          cout << "* ";
        }
        else if ((j >= n - i + 1) && (j <= n + i - 2))
        {
          cout << "  ";
        }
        else if (j == n + i - 1)
        {
          cout << "* ";
        }
      }
    }
    if (i != n)
    {
    }
    cout << "\n";
  }
}

// void lowerDiamond(int n)
// {
//   for (int i = n - 1; i >= 1; i--)
//   {
//     for (int j = 1; j <= n * 2; j++)
//     {
//       if ((j <= n - i) && (!(j > n - i)))
//       {
//         cout << "  ";
//       }
//       else if (j == n - i + 1)
//       {
//         cout << "* ";
//       }
//       else if ((j > n - i + 1) && (j < n + i - 1))
//       {
//         cout << "  ";
//       }
//       else if (j == n + i - 1)
//       {
//         cout << "* ";
//       }
//     }
//     cout << "\n";
//   }
// }


// UPPER lowerDiamond function IS CORRECT BUT LONG !!
// MORE EFFICIENT !!

void lowerDiamond(int n)
{
  for (int i = n - 1; i >= 1; i--)
  {
    for (int j = 1; j <= n * 2; j++)
    {
      if ((j <= n - i) && (!(j > n - i)) || (j > n - i + 1) && (j < n + i - 1))
      {
        cout << "  ";
      }
      else if ((j == n - i + 1) || (j == n + i - 1))
      {
        cout << "* ";
      }
    }
    cout << "\n";
  }
}

int main()
{
  int n;
  cout << "Enter the N : ";
  cin >> n;
  upperDiamond(n);
  lowerDiamond(n);
}
