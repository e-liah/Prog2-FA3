#include <iostream>
#include <string.h>

using namespace std;

void displayUppercase();

int main() {
  cout << endl;
  displayUppercase();
  cout << endl;
  
  return 0;
}

void displayUppercase() {
  char name1 [100];
  char name2 [50];

  cout << "Enter some string: "; 
  cin.get(name1, 100);
  cin.ignore();

  for (int n = 0; n < strlen(name1); n++) {
    if (n == 0) {
      name1[n] = toupper(name1[n]);
    }
    else if (name1[n-1] == ' ') {
      name1[n] = toupper(name1[n]);
    }
  }

  cout << name1 << endl;
}