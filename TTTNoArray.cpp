/* Author: Devin Leigh
   Date: 10/3/2019
   Project: TicTacToe game w/ looping game until user breaks loop
*/

#include <iostream>
#include <cstring>

using namespace std;

int status(char grid[9]);
void printBoard(char grid[9]);

int main(){
  char grid[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
  int player = 1;
  int ifRun;
  char choice[2];
  char letter;
  bool still = true;
  int winX = 0;
  int winO = 0;
  char stillChoice;
  
  while(still == true){
    do{
      printBoard(grid);
      if(player%2 == 1){
	letter = 'X';
      }else{
	letter = 'O';
      }
      
      cout << "TicTacToe" << endl;
      cout << "(Player 1 is X, Player 2 is O)" << endl;
      cout << "Player" << player << ", enter your move (ex. a2, c3): ";
      cin >> choice;
      
      if(tolower(choice[0]) == 'a' && choice[1] == '1'){
	grid[0] = letter;
      }else if(tolower(choice[0]) == 'a' && choice[1] == '2'){
	grid[1] = letter;
      }else if(tolower(choice[0]) == 'a' && choice[1] == '3'){
	grid[2] = letter;
      }else if(tolower(choice[0]) == 'b' && choice[1] == '1'){
	grid[3] = letter;
      }else if(tolower(choice[0]) == 'b' && choice[1] == '2'){
	grid[4] = letter;
      }else if(tolower(choice[0]) == 'b' && choice[1] == '3'){
	grid[5] = letter;
      }else if(tolower(choice[0]) == 'c' && choice[1] == '1'){
	grid[6] = letter;
      }else if(tolower(choice[0]) == 'c' && choice[1] == '2'){
	grid[7] = letter;
      }else if(tolower(choice[0]) == 'c' && choice[1] == '3'){
	grid[8] = letter;
      }else{
	cout << "Invalid";
	player--;
	cin.ignore();
	cin.get();
      }
      ifRun = status(grid);
      player++;
    }while(ifRun == -1);
    
    printBoard(grid);
    
    if(ifRun == 1){
      cout << "Player " << player << " wins!";
      if(player%2 == 1){
	winX++;
	cout << "Player " << player << " wins: " << winX << endl;
	cout << "Player " << ++player << " wins: " << winO << endl;
      }else{
	winO++;
	cout << "Player " << player << " wins: " << winX << endl;
	cout << "Player " << --player << " wins: " << winO << endl;
      }
    }else{
      cout << "It's a tie!";
      if(player%2 == 1){
	cout << "Player " << player << " wins: " << winX << endl;
	cout << "Player " << ++player << " wins: " << winO << endl;
      }else{
	cout << "Player " << player << " wins: " << winX << endl;
	cout << "Player " << --player << " wins: " << winO << endl;
      }
    }
    cin.ignore();
    cin.get();

    cout << "Keep playing? (y/n)" << endl;
    cin >> stillChoice;
    if(tolower(stillChoice) == 'y'){
      still = true;
    }else if(tolower(stillChoice) == 'n'){
      still = false;
    }else{
      cout << "Invalid entry" << endl;
    }  
  }  
}

int status(char grid[9]){
  if(grid[0] == grid[1] && grid[1] == grid[2]){ //a row
    return 1;
  }else if (grid[3] == grid[4] && grid[4] == grid[5]){ //b row
    return 1;
  }else if (grid[6] == grid[7] && grid[7] == grid[8]){ //c row
    return 1;
  }else if (grid[0] == grid[3] && grid[3] == grid[6]){ //1 column
    return 1;
  }else if (grid[1] == grid[4] && grid[4] == grid[7]){ //2 column
    return 1;
  }else if (grid[2] == grid[5] && grid[5] == grid[8]){ //3 column
    return 1;
  }else if (grid[0] == grid[4] && grid[4] == grid[8]){ //top left to bottom right 
    return 1;
  }else if (grid[2] == grid[4] && grid[4] == grid[6]){ //top right to bottom left
    return 1;
  }else if(grid[0] != ' ' && grid[1] != ' ' && grid[2] != ' ' && grid[3] != ' ' && grid[4] != ' ' && grid[5] != ' ' && grid[6] != ' ' && grid[7] != ' ' && grid[8] != ' '){ //tie
    return 0;
  }else{
    return -1;
  } 
}

void printBoard(char grid[9]){
  cout << ' ' << '1' << '2' << '3' << endl;
  cout << 'a' << grid[0] << grid[1] << grid[2] << endl;
  cout << 'b' << grid[3] << grid[4] << grid[5] << endl;
  cout << 'c' << grid[6] << grid[7] << grid[8] << endl;
}

