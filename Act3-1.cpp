#include <iostream>
#include <string.h>

using namespace std;

void displayCompare();

int main() {
  cout << "********************" << endl; //20
  cout << "STRING COMPARE" << endl;
  cout << "********************" << endl; //20

  cout << endl;
  displayCompare();

  return 0;
}

void displayCompare() {
  char name1 [50];
  char name2 [50];

  cout << "Enter a first word (str1): "; 
  cin.get(name1, 50);
  cin.ignore();

  cout << "Enter a second word (str2): ";
  cin.get(name2, 50);
  cin.ignore();

  if (strcmp(name1, name2) == 0) {
    cout << "equal" << endl;
  }

  else if (strcmp(name1, name2) > 0) {
    cout << "positive" << endl;
  }

  else if (strcmp(name1, name2) < 0) {
    cout << "negative" << endl;
  }

  cout << endl;
}