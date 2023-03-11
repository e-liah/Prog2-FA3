#include <iostream>

using namespace std;

struct player {
  char name[50];
  int age, score1, score2;
} p[5]; //initializing array

void playerAdd();
void playerView();
void compute();
void maxAvg();
void minAvg();

int main() {

  return 0;
}

void playerAdd(player) {
  for (int i = 0; i < 5; i++) { //for-loop for storing information player
    cout << "Enter player's nickname: ";
    cin >> p[i].name;
    cin.ignore();

    cout << "Enter player's age: ";
    cin >> p[i].age;

    cout << "Enter player's first best played score: ";
    cin >> p[i].score1;

    cout << "Enter player's second best played score: ";
    cin >> p[i].score2;

    cout << endl;
    cout << "Player information successfully logged!\n";
  }
}

void playerView(player p) {
  for (int i = 0; i < 5; i++) {
    cout << "Player " << i + 1 << endl;
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Best played scores: " << p.score1 << " " << p.score2 << endl;
  }
}

void compute (player p) {
  int playerNumber;

  cout << "Which player would you like to access? ";
  cin >> playerNumber;

  for (int i = 0; i < 5; i++) {
    playerNumber = i;
  }
}

