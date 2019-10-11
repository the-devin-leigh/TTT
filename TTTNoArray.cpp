/* Author: Devin Leigh
   Date: 10/3/2019
   Project: TicTacToe game w/ looping game until user breaks loop
*/

#include <iostream>
#include <cstring>

using namespace std;

int status(char grid[3][3]);
void printBoard(char grid[3][3]);

int main(){
<<<<<<< HEAD
  char grid[3][3] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
  char player = 'X';
=======
  char grid[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
  int player = 1;
  int ifRun;
>>>>>>> e7f6f4a6cba96b05c3f51dede71b22c63929ffc2
  char choice[2];
  char letter;
  bool still = true;
  int winX = 0;
  int winO = 0;
  char stillChoice;

  //game loop
  while(still == true){
    do{
      printBoard(grid);

      //introductory statement
      cout << "TicTacToe" << endl;
      cout << "(Player 1 is X, Player 2 is O)" << endl;
      if(player == 'X'){
	cout << "Player 1 enter your move (ex. a2, c3): ";
      }else if(player == 'O'){
	cout << "Player 2 enter your move (ex. a2, c3) ";
      }
      cin >> choice;

      //input to board
      if(tolower(choice[0]) == 'a' && choice[1] == '1' && grid[0][0] == ' '){
	grid[0][0] = player;
      }else if(tolower(choice[0]) == 'a' && choice[1] == '2' && grid[0][1] == ' '){
	grid[0][1] = player;
      }else if(tolower(choice[0]) == 'a' && choice[1] == '3' && grid[0][2] == ' '){
	grid[0][2] = player;
      }else if(tolower(choice[0]) == 'b' && choice[1] == '1' && grid[1][0] == ' '){
	grid[1][0] = player;
      }else if(tolower(choice[0]) == 'b' && choice[1] == '2' && grid[1][1] == ' '){
	grid[1][1] = player;
      }else if(tolower(choice[0]) == 'b' && choice[1] == '3' && grid[1][2] == ' '){
	grid[1][2] = player;
      }else if(tolower(choice[0]) == 'c' && choice[1] == '1' && grid[2][0] == ' '){
	grid[2][0] = player;
      }else if(tolower(choice[0]) == 'c' && choice[1] == '2' && grid[2][1] == ' '){
	grid[2][1] = player;
      }else if(tolower(choice[0]) == 'c' && choice[1] == '3' && grid[2][2] == ' '){
	grid[2][2] = player;
      }else{
	cout << "Invalid" << endl;
      }
<<<<<<< HEAD

      //toggles players
      if(player == 'X'){
	player = 'O';
=======
      ifRun = status(grid);
      player++;
    }while(ifRun == -1);
    
    printBoard(grid);
    
    if(ifRun == 1){
      cout << "Player " << player << " wins!" << endl;
      if(player%2 == 1){
	winX++;
	cout << "Player " << player << " wins: " << winX << endl;
	cout << "Player " << ++player << " wins: " << winO << endl;
>>>>>>> e7f6f4a6cba96b05c3f51dede71b22c63929ffc2
      }else{
	player = 'X';
      }
      
    }
    //while game has not ended, continue doing code above
    while(status(grid) == -1);
    printBoard(grid);

    //win statements
    if(status(grid) == 1){
      cout << "Player 1 wins!" << endl;
      winX++;
      cout << "Player 1 Wins: " << winX << endl;
      cout << "Player 2 Wins: " << winO << endl;
    }else if(status(grid) == 2){
      cout << "Player 2 wins!" << endl;
      winO++;
      cout << "Player 1 Wins: " << winX << endl;
      cout << "Player 2 Wins: " << winO << endl;
    }else{
      cout << "It's a tie!" << endl;
<<<<<<< HEAD
      cout << "Player 1 Wins: " << winX << endl;
      cout << "Player 2 Wins: " << winO << endl;
=======
      if(player%2 == 1){
	cout << "Player " << player << " wins: " << winX << endl;
	cout << "Player " << ++player << " wins: " << winO << endl;
      }else{
	cout << "Player " << player << " wins: " << winX << endl;
	cout << "Player " << --player << " wins: " << winO << endl;
      }
>>>>>>> e7f6f4a6cba96b05c3f51dede71b22c63929ffc2
    }

    // checks for player to play again or not
    cout << "Keep playing? (y/n)" << endl;
    cin >> stillChoice;
    if(tolower(stillChoice) == 'y'){
      still = true;
      for(int i = 0; i < 3; i++){
	for(int j = 0; j < 3; j++){
	  grid[i][j] = ' ';
	}
      }
    }else if(tolower(stillChoice) == 'n'){
      still = false;
    }else{
      cout << "Invalid entry" << endl;
    }
   
  }  
}


// checks for wins
int status(char grid[3][3]){
  if(grid[0][0] == 'X' && grid[0][1] == 'X' && grid[0][2] == 'X'){ //a row
    return 1;
  }
  if (grid[1][0] == 'X' && grid[1][1] == 'X' && grid[1][2] == 'X'){ //b row
    return 1;
  }
  if (grid[2][0] == 'X' && grid[2][1] == 'X' && grid[2][2] == 'X'){ //c row
    return 1;
  }
  if (grid[0][0] == 'X' && grid[1][0] == 'X' && grid[2][0] == 'X'){ //1 column
    return 1;
  }
  if (grid[0][1] == 'X' && grid[1][1] == 'X' && grid[2][1] == 'X'){ //2 column
    return 1;
  }
  if (grid[0][2] == 'X' && grid[1][2] == 'X' && grid[2][2] == 'X'){ //3 column
    return 1;
  }
  if (grid[0][0] == 'X' && grid [1][1] == 'X' && grid[2][2] == 'X'){ //top left to bottom right 
    return 1;
  }
  if (grid[0][2] == 'X' && grid[1][1] == 'X' && grid[2][0] == 'X'){ //top right to bottom left
    return 1;
<<<<<<< HEAD
  }

  if(grid[0][0] == 'O' && grid[0][1] == 'O' && grid[0][2] == 'O'){ //a row
    return 2;
  }
  if (grid[1][0] == 'O' && grid[1][1] == 'O' && grid[1][2] == 'O'){ //b row
    return 2;
  }
  if (grid[2][0] == 'O' && grid[2][1] == 'O' && grid[2][2] == 'O'){ //c row
    return 2;
  }
  if (grid[0][0] == 'O' && grid[1][0] == 'O' && grid[2][0] == 'O'){ //1 column
    return 2;
  }
  if (grid[0][1] == 'O' && grid[1][1] == 'O' && grid[2][1] == 'O'){ //2 column
    return 2;
  }
  if (grid[0][2] == 'O' && grid[1][2] == 'O' && grid[2][2] == 'O'){ //3 column
    return 2;
  }
  if (grid[0][0] == 'O' && grid [1][1] == 'O' && grid[2][2] == 'O'){ //top left to bottom right 
    return 2;
  }
  if (grid[0][2] == 'O' && grid[1][1] == 'O' && grid[2][0] == 'O'){ //top right to bottom left
    return 2;
  }
  
  if(grid[0][0] != ' ' && grid[0][1] != ' ' && grid[0][2] != ' ' && grid[1][0] != ' ' && grid[1][1] != ' ' && grid[1][2] != ' ' && grid[2][0] != ' ' && grid[2][1] != ' ' && grid[2][2] != ' '){ //tie
=======
  }else if(grid[0] != '1' && grid[1] != '2' && grid[2] != '3' && grid[3] != '4' && grid[4] != '5' && grid[5] != '6' && grid[6] != '7' && grid[7] != '8' && grid[8] != '9'){ //tie
>>>>>>> e7f6f4a6cba96b05c3f51dede71b22c63929ffc2
    return 0;
  }

  return -1;
}

<<<<<<< HEAD
// prints board to console
void printBoard(char grid[3][3]){
  cout << ' ' << '1' << '2' << '3' << endl;
  cout << 'a' << grid[0][0] << grid[0][1] << grid[0][2] << endl;
  cout << 'b' << grid[1][0] << grid[1][1] << grid[1][2] << endl;
  cout << 'c' << grid[2][0] << grid[2][1] << grid[2][2] << endl;
=======
void printBoard(char grid[9]){
  cout << ' ' << '1' << ' ' << '2' << ' ' << '3' << endl;
  cout << 'a' << grid[0] << ' ' << grid[1] << ' ' << grid[2] << endl;
  cout << endl;
  cout << 'b' << grid[3] << ' ' << grid[4] << ' ' << grid[5] << endl;
  cout << endl;
  cout << 'c' << grid[6] << ' ' << grid[7] << ' ' << grid[8] << endl;
>>>>>>> e7f6f4a6cba96b05c3f51dede71b22c63929ffc2
}
