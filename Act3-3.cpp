#include <iostream>
#include <string.h>

using namespace std;

void displayConcat();

int main() {
  cout << "*************************" << endl; //25
  cout << "STRING CONCATENATION" << endl;
  cout << "*************************" << endl; //25

  displayConcat();
  cout << endl;
  
  return 0;
}

void displayConcat() {
  char name1 [50];
  char name2 [50];

  cout << "Enter a first word (str1): "; 
  cin.get(name1, 50);
  cin.ignore();

  cout << "Enter a second word (str2): ";
  cin.get(name2, 50);
  cin.ignore();

  strcat(name1, name2);

  cout << "New string value for str1: " << name1 << endl;
}