#include <iostream>
#include <ctime>

const char PLAYER = 'X';
const char COMPUTER = 'O';
const char EMPTY = ' ';

void resetBoard(char (*)[3]);
void printBoard(char (*)[3]);
void placeMark(char (*)[3], const char, const int, const int);
char calculateWinner(char (*)[3]);

void playerTurn(char (*)[3]);
void computerTurn(char (*)[3]);
bool isValidMove(char (*)[3], const int, const int);

int main() {
    char board[3][3] = {
        {EMPTY, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY}
    };

    char (*p)[3] = board;
    char winner = EMPTY;

    while (true) {
        printBoard(p);
        playerTurn(p);
        computerTurn(p);

        winner = calculateWinner(p);
        if (winner != EMPTY) break;
    }

    printBoard(p);
    std::cout << (winner == PLAYER ? "You won!" : "Computer won!") << std::endl;

    return 0;
}

void resetBoard(char (*board)[3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            *(*(board + i) + j) = EMPTY;
        }
    }
}

void printBoard(char (*board)[3]) {
    for (int i = 0; i < 3; i++) {
        if (i != 0) std::cout << "---------" << std::endl;

        for (int j = 0; j < 3; j++) {
            std::cout << *(*(board + i) + j) << (j != 2 ? " | " : "");
        }

        std::cout << std::endl;
    }
}

void playerTurn(char (*board)[3]) {
    int x, y;

    do {
        std::cout << "Enter row (1-3): ";
        std::cin >> x;

        std::cout << "Enter column (1-3): ";
        std::cin >> y;
    } while (!isValidMove(board, --x, --y));

    placeMark(board, PLAYER, x, y);
}

void computerTurn(char (*board)[3]) {
    srand(time(NULL));
    int x, y;

    do {
        x = rand() % 3;
        y = rand() % 3;
    } while (!isValidMove(board, x, y));

    placeMark(board, COMPUTER, x, y);
}

bool isValidMove(char (*board)[3], const int x, const int y) {
    return *(*(board + x) + y) == EMPTY;
}

void placeMark(char (*board)[3], const char mark, const int row, const int col) {
    *(*(board + row) + col) = mark;
}

char calculateWinner(char (*board)[3]) {
    for (int i = 0; i < 3; i++) {
        if (*(*(board + i) + 0) == *(*(board + i) + 1) && *(*(board + i) + 1) == *(*(board + i) + 2)) {
            return *(*(board + i) + 0);
        }
    }

    for (int i = 0; i < 3; i++) {
        if (*(*(board + 0) + i) == *(*(board + 1) + i) && *(*(board + 1) + i) == *(*(board + 2) + i)) {
            return *(*(board + 0) + i);
        }
    }

    if (*(*(board + 0) + 0) == *(*(board + 1) + 1) && *(*(board + 1) + 1) == *(*(board + 2) + 2)) {
        return *(*(board + 0) + 0);
    }

    if (*(*(board + 0) + 2) == *(*(board + 1) + 1) && *(*(board + 1) + 1) == *(*(board + 2) + 0)) {
        return *(*(board + 0) + 2);
    }

    return EMPTY;
}