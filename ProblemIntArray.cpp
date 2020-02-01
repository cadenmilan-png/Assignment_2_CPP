#include <iostream>
#include <vector>

using namespace std;

int main() {

unsigned int i; // declare i as an integer

  const int numItems = 10; // 10 items in the vector
  int numberArray[numItems];

  cout << "Enter " << numItems << "integer values" << endl; // prompt user for ten values

  for (i = 0; i < numItems; ++i) { // loop until the user has inputted 10 values
    cout << "Value: ";
    cin >> numberArray[i];
    cout << endl;
  }

  for (i = 0; i < numItems; ++i) { // out put the list of values entered
    cout << numberArray[i] << endl;
  }


  return 0;

}
