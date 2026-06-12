#include <iostream>
using namespace std;

char board[3][3];  // Game board

// Initialize board with numbers 1 to 9
void initializeBoard() {
    char num = '1';
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            board[i][j] = num++;
}

// Display the game board
void displayBoard() {
    cout << "\n";
    for (int i = 0; i < 3; ++i) {
        cout << " ";
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j];
            if (j < 2) cout << " | ";
        }
        if (i < 2) cout << "\n-----------\n";
    }
    cout << "\n";
}

// Check if someone has won
bool checkWin(char symbol) {
    // Check rows, columns and diagonals
    for (int i = 0; i < 3; ++i)
        if ((board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol) || 
            (board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol))
            return true;

    if ((board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol) || 
        (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol))
        return true;

    return false;
}

// Check for draw
bool checkDraw() {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return false;
    return true;
}

int main() {
    int move;
    int row, col;
    char currentPlayer = 'X';

    initializeBoard();

    while (true) {
        displayBoard();
        cout << "Player " << (currentPlayer == 'X' ? "1 [X]" : "2 [O]") << ", enter your move (1-9): ";
        cin >> move;

        if (move < 1 || move > 9) {
            cout << "Invalid move. Try again.\n";
            continue;
        }

        row = (move - 1) / 3;
        col = (move - 1) % 3;

        if (board[row][col] == 'X' || board[row][col] == 'O') {
            cout << "Cell already taken! Try another.\n";
            continue;
        }

        board[row][col] = currentPlayer;

        if (checkWin(currentPlayer)) {
            displayBoard();
            cout << "?? Player " << (currentPlayer == 'X' ? "1 [X]" : "2 [O]") << " wins!\n";
            break;
        }

        if (checkDraw()) {
            displayBoard();
            cout << "It's a draw!\n";
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X'; // Switch player
    }

    return 0;
}

