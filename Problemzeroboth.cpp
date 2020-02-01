#include <iostream>

using namespace std;


int zeroBoth(int& num1, int& num2) {
  // initialize variables as zero
  num1 = 0;
  num2 = 0;
}

int main()
{
  int input1;
  int input2;

  //prompt user for input
  cout << "Enter the first integer: " << endl;
  cin >> input1; // store input

  cout << "Enter the second integer: " << endl;
  cin >> input2;

  // call funciton
  zeroBoth(input1, input2);

  // output zero
  cout << "First new integer value: " << input1 << endl;
  cout << "Second new integer value: " << input2 << endl;

  return 0;
}
