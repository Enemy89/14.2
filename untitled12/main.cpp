#include <iostream>

int main() {
    char ticTacToe[3][3] = {{' ', ' ', ' '},
                            {' ', ' ', ' '},
                            {' ', ' ', ' '}};
    bool checkPlace[3][3] = {{false, false, false},
                             {false, false, false},
                             {false, false, false}};
    int check = true;
    int firstSymbol = 1;
    int count = 0;
    int checkCount = 0;
    int countOS0 = 0; int countOS1 = 0; int countOS2 = 0;
    int countXS1 = 0; int countXS2 = 0; int countXS0 = 0;
    int countOC0 = 0; int countOC1 = 0; int countOC2 = 0;
    int countXC1 = 0; int countXC2 = 0; int countXC0 = 0;
    char symbol;
    int k1, k2;
    while (check) {
        std::cout << "Enter the symbol and the coordinate: " << std::endl;
        std::cin >> symbol >> k1 >> k2;
        if ((symbol == 'X' || symbol == 'O') && (k1 > -1 && k1 < 3) || (k2 > -1 && k2 < 3)) {
            if (symbol == 'X' && firstSymbol == 1) {
                firstSymbol = 0;
                if (!checkPlace[k1][k2]) {
                    ticTacToe[k1][k2] = 'X';
                    checkPlace[k1][k2] = true;
                    checkCount++;
                } else { std::cout << "Error! The place is occupied" << std::endl; firstSymbol = 1;}
            } else {
                if (symbol == 'O' && firstSymbol == 0) {
                    firstSymbol = 1;
                    if (!checkPlace[k1][k2]) {
                        ticTacToe[k1][k2] = 'O';
                        checkPlace[k1][k2] = true;
                        checkCount++;
                    } else {std::cout << "Error! The place is occupied" << std::endl; firstSymbol = 0;}
                } else {
                    if (firstSymbol == 1) std::cout << "X turn now!" << std::endl;
                    if (firstSymbol == 0) std::cout << "O turn now!" << std::endl;
                }
            }

            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    std::cout << ticTacToe[i][j] << " ";
                }
                std::cout << std::endl;
            }
            std::cout << std::endl;
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    std::cout << checkPlace[i][j] << " ";
                }
                std::cout << std::endl;
            }
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    if (checkPlace[i][j]) {
                        count++;
                    }
                }
            }

            for (int i = 0; i < 3; ++i) {
                if (ticTacToe[0][i] == 'O') {
                    countOS0++;
                    if (countOS0 == 3) {
                        std::cout << "O win! STRING 0";
                        return 0;
                    }
                } else countOS0 = 0;
            }
            for (int i = 0; i < 3; ++i) {
                if (ticTacToe[1][i] == 'O') {
                    countOS1 = 0;
                    countOS1++;
                    if (countOS1 == 3) {
                        std::cout << "O win! STRING 1";
                        return 0;
                    }
                } else countOS1 = 0;
            }
            for (int i = 0; i < 3; ++i) {
                if (ticTacToe[2][i] == 'O') {
                    countOS2 = 0;
                    countOS2++;
                    if (countOS2 == 3) {
                        std::cout << "O win! STRING 2";
                        return 0;
                    }
                } else countOS2 = 0;
            }

            for (int i = 0; i < 3; ++i) {
                if (ticTacToe[0][i] == 'X') {
                    countXS0++;
                    if (countXS0 == 3) {
                        std::cout << "X win! STRING 0";
                        return 0;
                    }
                } else countXS0 = 0;
            }
            for (int i = 0; i < 3; ++i) {
                if (ticTacToe[1][i] == 'X') {
                    countXS1++;
                    if (countXS1 == 3) {
                        std::cout << "X win! STRING 1";
                        return 0;
                    }
                } else countXS1 = 0;
            }
            for (int i = 0; i < 3; ++i) {
                if (ticTacToe[2][i] == 'X') {
                    countXS2++;
                    if (countXS2 == 3) {
                        std::cout << "X win! STRING 2";
                        return 0;
                    }
                } else countXS2 = 0;
            }
            for (int i = 0; i < 3; ++i) {
                if (ticTacToe[i][0] == 'O') {
                    countOC0++;
                    if (countOC0 == 3) {
                        std::cout << "O win! COLUMN 0";
                        return 0;
                    }
                } else countOC0 = 0;
            }
            for (int i = 0; i < 3; ++i) {
                if (ticTacToe[i][1] == 'O') {
                    countOC1++;
                    if (countOC1 == 3) {
                        std::cout << "O win! COLUMN 1";
                        return 0;
                    }
                } else countOC1 = 0;
            }
            for (int i = 0; i < 3; ++i) {
                if (ticTacToe[i][2] == 'O') {
                    countOC2++;
                    if (countOC2 == 3) {
                        std::cout << "O win! COLUMN 2";
                        return 0;
                    }
                } else countOC2 = 0;
            }

            for (int i = 0; i < 3; ++i) {
                if (ticTacToe[i][0] == 'X') {
                    countXC0++;
                    if (countXC0 == 3) {
                        std::cout << "X win! COLUMN 0";
                        return 0;
                    }
                } else countXC0 = 0;
            }
            for (int i = 0; i < 3; ++i) {
                if (ticTacToe[i][1] == 'X') {
                    countXC1++;
                    if (countXC1 == 3) {
                        std::cout << "X win! COLUMN 1";
                        return 0;
                    }
                } else countXC1 = 0;
            }
            for (int i = 0; i < 3; ++i) {
                if (ticTacToe[i][2] == 'X') {
                    countXC2++;
                    if (countXC2 == 3) {
                        std::cout << "X win! COLUMN 2";
                        return 0;
                    }
                } else countXC2 = 0;
            }
            if (checkCount == 9) { std::cout << "Draw"; check = false;}
    }
        else
            std::cout<<"Err"<<std::endl;
    }
}
