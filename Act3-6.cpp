#include <iostream>
#include <string.h>

using namespace std;

void displaySplit();

int main() {
  cout << endl;
  displaySplit();
  cout << endl;
  
  return 0;
}

void displaySplit() {
  char name1 [100];
  char *store;
  char mark = ' ';
  int start, end;

  cout << "Enter a string: "; 
  cin.get(name1, 100);
  cin.ignore();

  store = strtok(name1, " , ");

  while (start < end) {
    int temp = store[start];
    store[start] = store[end];
    store[end] = temp;
    start++;
    end--;
  }

  for (int i = 0; i < strlen(store); i++){
    while (store != NULL) {
    cout << store[i] << endl;
    store = strtok(NULL, " , ");
  }

  /*while (store != NULL) {
    cout << store << endl;
    store = strtok(NULL, " , ");
  }*/
}