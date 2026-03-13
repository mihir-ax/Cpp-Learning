#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter the num : ";
  cin >> num;

  for (int i = 1; i <= 2 * num; i++) {
    for (int j = 1; j <= 2 * num - 1; j++) {
      if (((j > i) && (j < 2 * num - i)) || ((j > 2 * num - i + 1) && (j < i - 1))) {
        cout << "  ";
      } else {
        cout << "* ";
      }
    }
    cout << "\n";
  }
  return 0;
}




// ORIGINAL (OLD ONE) ->

// #include <iostream>
// using namespace std;

// int main()
// {

//   int num;
//   cout << "Enter the num : ";
//   cin >> num;

//   for (int i = 1; i <= 2 * num; i++)
//   {

//     if (i <= num)
//     {
//       for (int j = 1; j <= 2 * num - 1; j++)
//       {
//         if ((j > i) && (j < 2 * num - i))
//         {
//           cout << "  ";
//         }
//         else
//         {
//           cout << "* ";
//         }
//       }
//     }
//     else
//     {
//       for (int j = 1; j <= num * 2 - 1; j++)
//       {
//         if ((j > 2 * num - i + 1) && (j < i - 1))
//         {
//           cout << "  ";
//         }
//         else
//         {
//           cout << "* ";
//         }
//       }
//     }

//     cout << "\n";
//   }

//   return 0;
// }
