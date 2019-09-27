#include <iostream>
#include <cstring>

using namespace std;

void boardViz(char board[3][3]){
  cout << " 1 2 3" << endl;
  cout << "a" << board[0][0] << " " << board [0][1] << " " << board[0][2] << endl;
  cout << "b" << board[1][0] << " " << board [1][1] << " " << board[1][2] << endl;
  cout << "c" << board[2][0] << " " << board [2][1] << " " << board[2][2] << endl;
  
}

bool checkWin(char board[3][3]){

}

int choice(char move[2]){

}  

int main(){
  char grid[3][3];
  char moveChoice[2];
  boardViz(grid);

  cout << "Please type a move choice(i.e. a2, c3). X goes first." << endl;
  cin.get(moveChoice, 2);
  cin.get();
}

