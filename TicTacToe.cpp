#include <iostream>
#include <cstring>

using namespace std;

void boardViz(char board[3][3]);
bool checkWin(char board[3][3]);
void choice(char* move[2]);

int main(){
  char grid[3][3];
  //char* gridP[3][3] = new char grid[3][3];
  //char moveChoice[2];
  char* p[2] = new char moveChoice[2];
  //char* moveP[2] = new char moveChoice[2];
  bool play = true;
  bool playLetter = true; //true = X

  while(play == true){
    boardViz(grid);
    cout << "Please type a move choice(i.e. a2, c3)." << endl;
    cin.get(moveChoice, 2);
    cin.get();
    cout << choice(p) << endl;
    
    boardViz(grid);

    play = false;
  } 
}

void boardViz(char board[3][3]){
  cout << " 1 2 3" << endl;
  cout << "a" << board[0][0] << " " << board[0][1] << " " << board[0][2] << endl;
  cout << "b" << board[1][0] << " " << board[1][1] << " " << board[1][2] << endl;
  cout << "c" << board[2][0] << " " << board[2][1] << " " << board[2][2] << endl;
}

bool checkWin(char board[3][3]){
  if(board[0][0] == board[0][1] && board[0][1] == board[0][2]){ //a row check
    return true;
  }else if(board[1][0] == board[1][1] && board[1][1] == board[1][2]){ //b row check
    return true;
  }else if(board[2][0] == board[2][1] && board[2][1] == board[2][2]){ //c row check
    return true;
  }else if(board[0][0] == board[1][0] && board[1][0] == board[2][0]){ //1 column check
    return true;
  }else if(board[0][1] == board[1][1] && board[1][1] == board[2][1]){ //2 column check
    return true;
  }else if(board[0][2] == board[1][2] && board[1][2] == board[2][2]){ //3 column check
    return true;
  }else if(board[0][0] == board[1][1] && board[1][1] == board[2][2]){ //top left bottom right
    return true;
  }else if(board[0][2] == board[1][1] && board[1][1] == board[2][0]){ //top right bottom left
    return true;
  }else{
    return false;
  }  
}

int choice(char* p){
  if(p[0] == 'a' && p[1] == '1'){
    return 1;
  }else if(p[0] == 'a' && p[1] == '2'){
    return 2;
  }else if(p[0] == 'a' && p[1] == '3'){
    return 3;
  }else if(p[0] == 'b' && p[1] == '1'){
    return 4;
  }else if(p[0] == 'b' && p[1] == '2'){
    return 5;
  }else if(p[0] == 'b' && p[1] == '3'){
    return 6;
  }else if(p[0] == 'c' && p[1] == '1'){
    return 7;
  }else if(p[0] == 'c' && p[1] == '2'){
    return 8;
  }else if(p[0] == 'c' && p[1] == '3'){
    return 9;
  }else{
    return 0;
  }
  /* int row = move[0] - 'a';
  int column = move[1] - '1';
  if(XO == true){
    board[row][column] = 'X';
    XO = false;
  }else{
    board[row][column] = 'O';
    XO = true;
    } */ 
}
