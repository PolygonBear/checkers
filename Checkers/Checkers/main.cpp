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
        std::cout << "Select side: 1. White, 2. Black: ";

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
    {
        for (int y = length - 1; y >= 0; y--)
        {
            if ((x % 2 == 0 && y % 2 != 0) || (x % 2 != 0 && y % 2 == 0))
            {
                chessField[x][y] = playerSide;
            }
        }
    }
        
    for (size_t i = 0; i < 3; ++i)
    {
        for (int y = 0; y < length; ++y)
        {
            if ((i % 2 == 0 && y % 2 != 0) || (i % 2 != 0 && y % 2 == 0))
            {
                chessField[i][y] = enemySide;
            }
        }
    }

    while (true)
    {
        std::cout << "Your side: " << (playerSide == Field::eWhiteChess ? "White" : "Black") << std::endl << std::format(R"(
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

        std::cout << "Select field: ";

        std::string targetField;
        
        std::cin >> targetField;
        
        if (targetField.length() == 2 && (targetField[0] >= 'a' && targetField[0] <= 'h') && (targetField[1] >= '1' && targetField[1] <= '8'))
        {
            chessField[targetField[0]][targetField[1]];

            std::cout << chessField[static_cast<int>(targetField[0]) - 97][static_cast<int>(targetField[1]) - 49];
            break;
        }
        else if (targetField.length() == 2 && (targetField[0] >= 'A' && targetField[0] <= 'H') && (targetField[1] >= '1' && targetField[1] <= '8'))
        {
            chessField[targetField[0]][targetField[1]];

            std::cout << chessField[static_cast<int>(targetField[0]) - 65][static_cast<int>(targetField[1]) - 49];
            break;
        }

    }

    return 0;
}