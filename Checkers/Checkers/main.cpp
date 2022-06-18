#include <iostream>
#include <string>
#include <format>

enum Field
{
    eEmpty,
    eWhiteChess,
    eBlackChess
};

char FieldAsSymbol(const Field field)
{
    switch (field)
    {
    case Field::eEmpty:
        return ' ';
    case Field::eWhiteChess:
        return 'W';
    case Field::eBlackChess:
        return 'B';
    }
}

int main()
{
    Field playerSide = Field::eEmpty;
    Field enemySide = Field::eEmpty;

    while (true)
    {
        std::cout << "Select side: 1. white, 2. black: ";

        char side = 0;
        std::cin >> side;

        if (side == '1')
        {
            playerSide = Field::eWhiteChess;
            enemySide = Field::eBlackChess;
            break;
        }
        else if (side == '2')
        {
            playerSide = Field::eBlackChess;
            enemySide = Field::eWhiteChess;
            break;
        }
        else
            std::cout << "Your enter invalid choise!" << std::endl;
    }

    const int length = 8;
    Field chessField[length][length] = {};

    for (size_t x = length - 1; x > length - 4; x--)
        for (int y = length - 1; y >= 0; y--)
            if ((x % 2 == 0 && y % 2 != 0) || (x % 2 != 0 && y % 2 == 0))
                chessField[x][y] = playerSide;

    std::cout << std::format(R"(
     A     B     C     D     E     F     G     H
  #################################################
  #     #     #     #     #     #     #     #     #
8 #  {}  #  {}  #  {}  #  {}  #  {}  #  {}  #  {}  #  {}  #
  #     #     #     #     #     #     #     #     #
  #################################################
  #     #     #     #     #     #     #     #     #
7 #  {}  #  {}  #  {}  #  {}  #  {}  #  {}  #  {}  #  {}  #
  #     #     #     #     #     #     #     #     #
  #################################################
  #     #     #     #     #     #     #     #     #
6 #  {}  #  {}  #  {}  #  {}  #  {}  #  {}  #  {}  #  {}  #
  #     #     #     #     #     #     #     #     #
  #################################################
  #     #     #     #     #     #     #     #     #
5 #  {}  #  {}  #  {}  #  {}  #  {}  #  {}  #  {}  #  {}  #
  #     #     #     #     #     #     #     #     #
  #################################################
  #     #     #     #     #     #     #     #     #
4 #  {}  #  {}  #  {}  #  {}  #  {}  #  {}  #  {}  #  {}  #
  #     #     #     #     #     #     #     #     #
  #################################################
  #     #     #     #     #     #     #     #     #
3 #  {}  #  {}  #  {}  #  {}  #  {}  #  {}  #  {}  #  {}  #
  #     #     #     #     #     #     #     #     #
  #################################################
  #     #     #     #     #     #     #     #     #
2 #  {}  #  {}  #  {}  #  {}  #  {}  #  {}  #  {}  #  {}  #
  #     #     #     #     #     #     #     #     #
  #################################################
  #     #     #     #     #     #     #     #     #
1 #  {}  #  {}  #  {}  #  {}  #  {}  #  {}  #  {}  #  {}  #
  #     #     #     #     #     #     #     #     #
  #################################################)", FieldAsSymbol(chessField[0][0]), FieldAsSymbol(chessField[0][1]), FieldAsSymbol(chessField[0][2]), FieldAsSymbol(chessField[0][3]), FieldAsSymbol(chessField[0][4]), FieldAsSymbol(chessField[0][5]), FieldAsSymbol(chessField[0][6]), FieldAsSymbol(chessField[0][7]), FieldAsSymbol(chessField[1][0]), FieldAsSymbol(chessField[1][1]), FieldAsSymbol(chessField[1][2]), FieldAsSymbol(chessField[1][3]), FieldAsSymbol(chessField[1][4]), FieldAsSymbol(chessField[1][5]), FieldAsSymbol(chessField[1][6]), FieldAsSymbol(chessField[1][7]), FieldAsSymbol(chessField[2][0]), FieldAsSymbol(chessField[2][1]), FieldAsSymbol(chessField[2][2]), FieldAsSymbol(chessField[2][3]), FieldAsSymbol(chessField[2][4]), FieldAsSymbol(chessField[2][5]), FieldAsSymbol(chessField[2][6]), FieldAsSymbol(chessField[2][7]), FieldAsSymbol(chessField[3][0]), FieldAsSymbol(chessField[3][1]), FieldAsSymbol(chessField[3][2]), FieldAsSymbol(chessField[3][3]), FieldAsSymbol(chessField[3][4]), FieldAsSymbol(chessField[3][5]), FieldAsSymbol(chessField[3][6]), FieldAsSymbol(chessField[3][7]), FieldAsSymbol(chessField[4][0]), FieldAsSymbol(chessField[4][1]), FieldAsSymbol(chessField[4][2]), FieldAsSymbol(chessField[4][3]), FieldAsSymbol(chessField[4][4]), FieldAsSymbol(chessField[4][5]), FieldAsSymbol(chessField[4][6]), FieldAsSymbol(chessField[4][7]), FieldAsSymbol(chessField[5][0]), FieldAsSymbol(chessField[5][1]), FieldAsSymbol(chessField[5][2]), FieldAsSymbol(chessField[5][3]), FieldAsSymbol(chessField[5][4]), FieldAsSymbol(chessField[5][5]), FieldAsSymbol(chessField[5][6]), FieldAsSymbol(chessField[5][7]), FieldAsSymbol(chessField[6][0]), FieldAsSymbol(chessField[6][1]), FieldAsSymbol(chessField[6][2]), FieldAsSymbol(chessField[6][3]), FieldAsSymbol(chessField[6][4]), FieldAsSymbol(chessField[6][5]), FieldAsSymbol(chessField[6][6]), FieldAsSymbol(chessField[6][7]), FieldAsSymbol(chessField[7][0]), FieldAsSymbol(chessField[7][1]), FieldAsSymbol(chessField[7][2]), FieldAsSymbol(chessField[7][3]), FieldAsSymbol(chessField[7][4]), FieldAsSymbol(chessField[7][5]), FieldAsSymbol(chessField[7][6]), FieldAsSymbol(chessField[7][7])) << std::endl << std::endl;

    while (true)
    {
        std::string targetField;
        std::cin >> targetField;
    }

    return 0;
}