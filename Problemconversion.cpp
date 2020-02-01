#include <iostream>

using namespace std;


const double CM_PER_INCH = 2.54; // declare number of centimeters per 1 inch
const int INCH_PER_FOOT = 12; // declare number of inches per 1 foot

void outputConversion(double numMeters, double numCenti){
  cout << "Converted length: ";
  cout << numMeters << "meters and " << numCenti << "centimeters" << endl;
}

// print to screen the conversion sol
int conversion(int numFeet, int numInches) {
  int numMeters; // declare meters as an integer
  int numCenti; // declare centimeters as an integer

  int totalInches = (numFeet * INCH_PER_FOOT) + numInches; // calculate total number of inches
  double totalCenti = totalInches * CM_PER_INCH; // convert total inches to centimeters
  int totalMeters = totalCenti / 100; // convert centimeters to meters
  double remaindingM = totalCenti - (numMeters * 100); // calculate remainding number of meters

  outputConversion(numMeters, numCenti);
  return numMeters, numCenti;
}

userInput(){
  int numFeet;
  int numInches;

  // get number of feet from user
  cout << "Input the number of feet: " << endl;
  cin >> numFeet;

  // get number of inches from the user
  cout << "Input the number of inches: " << endl;
  cin >> numInches;

  conversion(numFeet, numInches);
}
int main(int argc, char **argv) {

  // use boolean operater to see if the user wants to continue converting values
  bool convert = true;
  string input = "";

  while (convert == true) {
    string input;

    cout << "Would you like to do another conversion? (yes or no)" << endl;
    cin >> input;
      if (input == "no") {
        // if user is done, 'no' will break the loop and end the program
        convert = false;
      }
  }
  return 0;
}
