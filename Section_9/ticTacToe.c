#include <stdio.h>

char square[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'}, mark;
int choice, player;
int checkForWin();
int drawBoard();
int markBoard();

int main() {
  drawBoard();
  player = 1;
  markBoard(player);
  drawBoard();
  return 0;
}

int checkForWin() {

}

int drawBoard() {
  printf("     |     |\n");
  printf("  %c  |  %c  |  %c\n",square[1],square[2],square[3]); // Row 1
  printf("_____|_____|_____\n");
  printf("     |     |\n");
  printf("  %c  |  %c  |  %c\n",square[4],square[5],square[6]); // Row 2
  printf("_____|_____|_____\n");
  printf("     |     |\n");
  printf("  %c  |  %c  |  %c\n",square[7],square[8],square[9]); // Row 3
  printf("     |     |\n");
}

int markBoard(int player) {
char mark;
int choice, out = 0, out2 = 0;

while (out == 0){  
  out = 0;
  printf("Player %d, please input a number: ",player);
  scanf("%d", &choice);
  printf("Choice value: %d\n", choice);
  if (choice < 1 || choice > 9) {
    printf("Invalid choice. ");
  } 
  else {
    out2 = 0;
    while (out2 == 0){  
      out = 1;
      switch (player) {
        case 1:
          mark = 'X';
          /* printf("Test X: %d\n", choice); */
          break;
          case 2:
          /* printf("Test Y: %d\n", choice); */
          mark = 'O';
          break;
        default:
          printf("Error: Player is not defined as 1 or 2\n");
      }
      if (square[choice] == X) { // TODO: HELP 
        square[choice] = mark;
      }
  }
}
}

