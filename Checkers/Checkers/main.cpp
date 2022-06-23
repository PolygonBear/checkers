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

void printChessField()
{

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

        std::string firstSelectField;
        Field currentField = Field::eEmpty;
        
        std::cin >> firstSelectField;

        int x1, y1 = 0;
        
        switch (firstSelectField[1])
        {
        case '1':
            x1 = 7;
            break;
        case '2':
            x1 = 6;
            break;
        case '3':
            x1 = 5;
            break;
        case '4':
            x1 = 4;
            break;
        case '5':
            x1 = 3;
            break;
        case '6':
            x1 = 2;
            break;
        case '7':
            x1 = 1;
            break;
        case '8':
            x1 = 0;
            break;
        default:
            break;
        }

        if (firstSelectField.length() == 2 && (firstSelectField[0] >= 'a' && firstSelectField[0] <= 'h'))
        {
            y1 = static_cast<int>(firstSelectField[0] - 97);
            currentField = chessField[x1][y1];
           
           
        }
        else if (firstSelectField.length() == 2 && (firstSelectField[0] >= 'A' && firstSelectField[0] <= 'H') && (firstSelectField[1] >= '1' && firstSelectField[1] <= '8'))
        {
            y1 = static_cast<int>(firstSelectField[0] - 65);
            currentField = chessField[x1][y1];

            
        }

        std::cout << "Select second field: ";

       
        std::string secondSelectField;
        Field targetField = Field::eEmpty;

        std::cin >> secondSelectField;
        int x2, y2 = 0;

        
      
        switch (secondSelectField[1])
        {
        case '1':
            x2 = 7;
            break;
        case '2':
            x2 = 6;
            break;
        case '3':
            x2 = 5;
            break;
        case '4':
            x2 = 4;
            break;
        case '5':
            x2 = 3;
            break;
        case '6':
            x2 = 2;
            break;
        case '7':
            x2 = 1;
            break;
        case '8':
            x2 = 0;
            break;
        default:
            break;
        }

        if (secondSelectField.length() == 2 && (secondSelectField[0] >= 'a' && secondSelectField[0] <= 'h'))
        {
            y2 = static_cast<int>(secondSelectField[0]) - 97;
            targetField = chessField[x2][y2];

           
        }
        else if (secondSelectField.length() == 2 && (secondSelectField[0] >= 'A' && secondSelectField[0] <= 'H') && (secondSelectField[1] >= '1' && secondSelectField[1] <= '8'))
        {
            y2 = static_cast<int>(secondSelectField[0]) - 65;
            targetField = chessField[x2][y2];

           
        }

        if (currentField == playerSide && targetField == Field::eEmpty)
        {
            chessField[x1][y1] = Field::eEmpty;
            chessField[x2][y2] = playerSide;
        }

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

    }

    return 0;
}