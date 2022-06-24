#include <iostream>
#include <string>
#include <format>

const int length = 8;

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

void printChessField(Field side, Field chessField[length][length])
{
    std::cout << "Your side: " << (side == Field::eWhiteChess ? "White" : "Black") << std::endl << std::format(R"(
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

}

void selectChessField(std::string field, int &x, int &y)
{
    switch (field[1])
    {
    case '1':
        x = 7;
        break;
    case '2':
        x = 6;
        break;
    case '3':
        x = 5;
        break;
    case '4':
        x = 4;
        break;
    case '5':
        x = 3;
        break;
    case '6':
        x = 2;
        break;
    case '7':
        x = 1;
        break;
    case '8':
        x = 0;
        break;
    default:
        break;
    }

    if (field.length() == 2 && (field[0] >= 'a' && field[0] <= 'h'))
    {
        y = static_cast<int>(field[0] - 97);  
    }
    else if (field.length() == 2 && (field[0] >= 'A' && field[0] <= 'H') && (field[1] >= '1' && field[1] <= '8'))
    {
        y = static_cast<int>(field[0] - 65);
    }
}

int main()
{
    Field playerSide = Field::eEmpty;
    Field enemySide = Field::eEmpty;

    while (true)
    {
        std::cout << "Select side: 1. White, 2. Black: ";

        std::string side = "";
        std::cin >> side;

        if (side[0] == '1')
        {
            playerSide = Field::eWhiteChess;
            enemySide = Field::eBlackChess;
            break;
        }
        else if (side[0] == '2')
        {
            playerSide = Field::eBlackChess;
            enemySide = Field::eWhiteChess;
            break;
        }
        else
            std::cout << "Your enter invalid choise!" << std::endl;
    }

    
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
        printChessField(playerSide, chessField);

        std::cout << "Select field: ";

        std::string firstSelectField;
        Field currentField = Field::eEmpty;
        int x1, y1 = 0;
        
        std::cin >> firstSelectField;

        selectChessField(firstSelectField, x1, y1);
        currentField = chessField[x1][y1];
        
        std::cout << "Select second field: ";

        std::string secondSelectField;
        Field targetField = Field::eEmpty;
        int x2, y2 = 0;

        std::cin >> secondSelectField;

        selectChessField(secondSelectField, x2, y2);
        targetField = chessField[x2][y2];

        if (currentField == playerSide && targetField == Field::eEmpty)
        {
            chessField[x1][y1] = Field::eEmpty;
            chessField[x2][y2] = playerSide;
        }

        printChessField(playerSide, chessField);
    }

    return 0;
}