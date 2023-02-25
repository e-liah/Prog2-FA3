#include <iostream>
#include <string.h>

using namespace std;

void displayPalindrome();

int main() {
  cout << "********************" << endl; //20
  cout << "PALINDROME" << endl;
  cout << "********************" << endl; //20

  displayPalindrome();
  cout << endl;
  
  return 0;
}

void displayPalindrome() {
  char name1 [100];
  char store [100];
  int i, j, size = 0, mark = 0;

  cout << "Enter a word: "; 
  cin.get(name1, 100);
  cin.ignore();

  size = strlen(name1) - 1;

  for (i = size, j = 0; i >= 0; i--, j++){
    store[j] = name1[i];
  }

  if (strcmp(name1, store)) {
      mark = 1; //if name1 is greater than store; meaning there is a difference
    }

    if (mark == 1) {
      cout << name1 << " is not a palindrome" << endl;
    }
    else {
      cout << name1 << " is a palindrome" << endl;
    }
}
