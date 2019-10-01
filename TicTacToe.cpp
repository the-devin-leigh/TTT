#include <iostream>
#include <cstring>

using namespace std;

void boardViz(char board[3][3]);
bool checkWin(char board[3][3]);
void choice(char move[2], char board[3][3], bool XO);

int main(){
  char grid[3][3];
  char moveChoice[2];
  bool play = true;
  bool playLetter = true; //true = X

  while(play == true){
    boardViz(grid);

    cout << "Please type a move choice(i.e. a2, c3)." << endl;
    cin.get(moveChoice, 2);
    cin.get();
    choice(moveChoice, grid, playLetter);
    boardViz(grid);
  } 
}

void boardViz(char board[3][3]){
  cout << " 1 2 3" << endl;
  cout << "a" << board[0][0] << " " << board [0][1] << " " << board[0][2] << endl;
  cout << "b" << board[1][0] << " " << board [1][1] << " " << board[1][2] << endl;
  cout << "c" << board[2][0] << " " << board [2][1] << " " << board[2][2] << endl;
}

bool checkWin(char board[3][3]){

}

void choice(char move[2], char board[3][3], bool XO){
  /* if(move == "a1"){
    
  }else if(move == "a2"){
    
  }else if(move == "a3"){
    
  }else if(move == "b1"){
    
  }else if(move == "b2"){
    
  }else if(move == "b3"){
    
  }else if(move == "c1"){
    
  }else if(move == "c2"){
    
  }else if(move == "c3"){
    
  }*/

  int row = move[0] - 'a';
  int column = move[1] - '1';
  if(XO == true){
    board[row][column] = 'X';
    XO = false;
  }else{
    board[row][column] = 'O';
    XO = true;
  }  
}
