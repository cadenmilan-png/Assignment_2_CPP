#include <iostream>

using namespace std;

// declare function
double addTax(double taxRate, double cost) {
  double valueCost;
  // conver tax rate to a percentage
  taxRate = taxRate/100.0;
  valueCost = cost - (cost * taxRate);

  return valueCost;
}

int main()
{
  // declare tax rate and cost
  double inptTaxRate;
  double inptCost;

  // get tax rate and input cost from user
  cout << "What is the tax rate (%)? " << endl;
  cin >> inptTaxRate;
  cout << "What is the cost of the item? " << endl;
  cin >> inptCost;

  // call function to get total cost
  double totalCost = addTax(inptTaxRate, inptCost);
  cout << "Final Cost: $" << totalCost << endl;

  return 0;
}
