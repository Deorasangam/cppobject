#include <iostream>
#include <windows.h>

#include <ctime>
using namespace std;

int main()
{
  srand(time(0));

  while (1)
  {
    int n = rand() % 10 + 1;

    for (int i = 0; i < n; i++)
    {
      int n1 = rand() % 50 + 1;
      if (n1 % 2 == 0)
      {
        for (int j = 1; j < i; j++)
        {
          cout << "`";
        }

        cout << endl;
        Sleep(700);
      }
      else
      {
        for (int k = 1; k < i; k++)
        {
          cout << " ";
        }
        for (int j = n; j >= 0; j--)
        {
          cout << "`";
        }
        cout << endl;
        Sleep(700);
      }
    }
    if (n >= 7)
    {
      cout << "heavy rain 90%" << endl;
    }
    else if (n >= 3 && n <= 6)
    {
      cout << "Medium heavy rain  60%" << endl;
    }
    else
    {
      cout << "low rain 30%" << endl;
      cout << "O" << endl;
    }
  }
}
