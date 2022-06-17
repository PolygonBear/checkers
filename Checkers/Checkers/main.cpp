#include <iostream>
#include <string>

enum Field
{
    eWhiteChess,
    eBlackChess,
    eEmpty
};

int main()
{
    std::cout << "Select side: 1. white, 2. black: ";
    int side = 0;
    std::cin >> side;

    Field playerSide = eEmpty;

    if (side == 1)
    {
        playerSide = eWhiteChess;
    }
    else if (side == 2)
    {
        playerSide = eBlackChess;
    }

    Field chessField[8][8];

    while (true)
    {
        std::string targetField;
        std::cin >> targetField;
    }

    return 0;
}