#include <iostream>
#include <string>
#include <format>

enum Field
{
    eWhiteChess,
    eBlackChess,
    eEmpty
};

char FieldAsSymbol(const Field field)
{
    switch (field)
    {
    case Field::eWhiteChess:
        return 'W';
    case Field::eBlackChess:
        return 'B';
    case Field::eEmpty:
        return ' ';
    }
}

int main()
{
    std::cout << "Select side: 1. white, 2. black: ";
    int side = 0;

    Field playerSide = eEmpty;

    while (std::cin >> side)
    {
        if (side == 1)
        {
            playerSide = eWhiteChess;
            break;
        }
        else if (side == 2)
        {
            playerSide = eBlackChess;
            break;
        }
        else
        {
            std::cout << "Your enter invalid choise!";
            return 1;
        }
    }

    Field chessField[8][8];

    std::cout << std::format(R"(
     A     B     C     D     E     F     G     H
  #################################################
  #     #     #     #     #     #     #     #     #
8 #     #     #     #     #     #     #     #     #
  #     #     #     #     #     #     #     #     #
  #################################################
  #     #     #     #     #     #     #     #     #
7 #     #     #     #     #     #     #     #     #
  #     #     #     #     #     #     #     #     #
  #################################################
  #     #     #     #     #     #     #     #     #
6 #     #     #     #     #     #     #     #     #
  #     #     #     #     #     #     #     #     #
  #################################################
  #     #     #     #     #     #     #     #     #
5 #     #     #     #     #     #     #     #     #
  #     #     #     #     #     #     #     #     #
  #################################################
  #     #     #     #     #     #     #     #     #
4 #     #     #     #     #     #     #     #     #
  #     #     #     #     #     #     #     #     #
  #################################################
  #     #     #     #     #     #     #     #     #
3 #     #     #     #     #     #     #     #     #
  #     #     #     #     #     #     #     #     #
  #################################################
  #     #     #     #     #     #     #     #     #
2 #     #     #     #     #     #     #     #     #
  #     #     #     #     #     #     #     #     #
  #################################################
  #     #     #     #     #     #     #     #     #
1 #     #     #     #     #     #     #     #     #
  #     #     #     #     #     #     #     #     #
  #################################################)") << std::endl << std::endl;

    while (true)
    {
        std::string targetField;
        std::cin >> targetField;
    }

    return 0;
}