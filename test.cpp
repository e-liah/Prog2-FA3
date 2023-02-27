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
  int start, end, i;
  int size = strlen(name1);

  cout << "Enter a string: "; 
  cin.get(name1, 100);
  cin.ignore();

  //store = strtok(name1, " , ");

  /*while (start < end) {
    int temp = store[start];
    store[start] = store[end];
    store[end] = temp;
    start++;
    end--;
  }*/

for(i = 0; i < strlen(name1); i++){
        store[i] = name1[size-i-1];
    }    

for(i = 0; i < strlen(name1); i++){
    cout << store[i] << " ";
}

  /*while (store != NULL) {
    cout << store << endl;
    store = strtok(NULL, " , ");
  }*/
}
