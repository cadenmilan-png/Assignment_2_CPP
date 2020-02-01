#include <iostream>

using namespace std;

int main()
{

  // declare variables
  int i;
  int j;
  int a[4][5];
  int value;

  // nested for loop to prompt the user for 20 values which are sorted into an array
  for (i = 0; i < 4; ++i){
    for (j = 0; j < 5; ++j){
        cout << "Enter an integer: " << endl;
        cin >> value;
        a[i][j] = value;
      }
    }

    // outputs values into an array by iterating through each one and using spaces according to parameters
    for (i = 0; i < 4; ++i){
      for (j = 0; j < 5; ++j){
        cout << a[i][j] << " ";
      }
      cout << endl;
    }


  return 0;
}
