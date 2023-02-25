#include <iostream>
#include <string.h>

using namespace std;

void displayCopy();

int main() {
  cout << "********************" << endl; //20
  cout << "STRING COPY" << endl;
  cout << "********************" << endl; //20

  displayCopy();
  cout << endl;
  

  return 0;
}

void displayCopy() {
  char name1 [50];
  char name2 [50];

  cout << "Enter a first word (str1): "; 
  cin.get(name1, 50);
  cin.ignore();

  cout << "Enter a second word (str2): ";
  cin.get(name2, 50);
  cin.ignore();

  strcpy(name1, name2); //the first parameter is where the copied string will be stored; the second parameter is the string that will be copied

  cout << "New string value for str1: " << name1 << endl;
}
