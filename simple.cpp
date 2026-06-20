#include <iostream>
#include <string>
#include "MoveSets.h"   // You must create this file!

#define BOARD_SIZE 8

// Piece values (positive = white, negative = black)
const int pawn   = 100;
const int bishop = 305;
const int knight = 300;
const int rook   = 500;
const int queen  = 900;
const int king   = 2000;

int board[BOARD_SIZE][BOARD_SIZE];

// Correct startup board
const int startup[8][8] = {
    { rook, knight, bishop, queen, king, bishop, knight, rook },
    { pawn, pawn,   pawn,   pawn,  pawn, pawn,   pawn,   pawn },
    { 0,0,0,0,0,0,0,0 },
    { 0,0,0,0,0,0,0,0 },
    { 0,0,0,0,0,0,0,0 },
    { 0,0,0,0,0,0,0,0 },
    { -pawn, -pawn, -pawn, -pawn, -pawn, -pawn, -pawn, -pawn },
    { -rook, -knight, -bishop, -queen, -king, -bishop, -knight, -rook }
};

bool running = true;

void clearBoard()
{
    for(int y = 0; y < BOARD_SIZE; y++)
    {
        for(int x = 0; x < BOARD_SIZE; x++)
        {
            board[x][y] = startup[y][x];
        }
    }
}

std::string getInput()
{
    std::string ret;
    std::cin >> ret;
    return ret;
}

void printHelp()
{
    std::cout << "help    |  Prints the help page.\n";
    std::cout << "print   |  Prints the board.\n";
    std::cout << "restart |  Restarts the chess game.\n";
    std::cout << "quit    |  Quits the program.\n\n";
}

void printPiece(int piece)
{
    std::string p;
    switch(piece)
    {
        case rook:   p = "R"; break;
        case bishop: p = "B"; break;
        case knight: p = "N"; break;
        case king:   p = "K"; break;
        case queen:  p = "Q"; break;
        case pawn:   p = "P"; break;
        case -rook:   p = "r"; break;
        case -bishop: p = "b"; break;
        case -knight: p = "n"; break;
        case -king:   p = "k"; break;
        case -queen:  p = "q"; break;
        case -pawn:   p = "p"; break;
        case 0: p = "."; break;
        default: p = "."; break;
    }
    std::cout << p;
}

void printBoard()
{
    std::cout << " ";
    for(int x = 0; x < BOARD_SIZE; x++)
        std::cout << " " << x+1;
    std::cout << "\n";

    for(int y = 0; y < BOARD_SIZE; y++)
    {
        std::cout << char(65+y);
        for(int x = 0; x < BOARD_SIZE; x++)
        {
            std::cout << " ";
            printPiece(board[x][y]);
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

std::string toLowerCase(std::string str)
{
    std::string ret;
    for(char c : str)
    {
        if(c >= 'A' && c <= 'Z')
            ret.push_back(c + 32);
        else
            ret.push_back(c);
    }
    return ret;
}

void setPieceAt(int a, int b, int piece)
{
    board[b][a] = piece;
}

int getPieceAt(int a, int b)
{
    return board[b][a];
}

int biggest(int a, int b)
{
    if(a < 0) a = -a;
    if(b < 0) b = -b;
    return (a > b) ? a : b;
}

void interpretMove(int a, int b, int c, int d)
{
    int piece = getPieceAt(a, b);

    if(piece == 0)
    {
        std::cout << "No Piece Located There.\n";
        return;
    }

    MoveSet moveSet = getMoveSetFromPiece(piece);

    if(moveSet.constant)
    {
        Vec2 ratio(c - a, d - b);
        int maxv = biggest(ratio.x, ratio.y);
        if(maxv == 0)
        {
            std::cout << "Invalid Move.\n";
            return;
        }

        float x = float(ratio.x) / maxv;
        float y = float(ratio.y) / maxv;

        for(auto &attack : moveSet.attacks)
        {
            if(attack.x == x && attack.y == y)
            {
                std::cout << "Valid Move.\n";
                return;
            }
        }
        std::cout << "Invalid Move.\n";
    }
    else
    {
        std::cout << "TODO: handle non-constant moves\n";
    }
}

void processInput(std::string input)
{
    std::cout << "\n";

    input = toLowerCase(input);

    if(input == "quit")
        running = false;
    else if(input == "help")
        printHelp();
    else if(input == "restart")
    {
        clearBoard();
        printBoard();
    }
    else if(input == "print")
        printBoard();
    else
    {
        if(input.length() != 4)
        {
            std::cout << "Invalid Move / Command.\n\n";
            return;
        }

        int a = input[0];
        int b = input[1];
        int c = input[2];
        int d = input[3];

        if(a >= 'a' && a <= 'h' && c >= 'a' && c <= 'h' && b >= '1' && b <= '8' && d >= '1' && d <= '8')
        {
            interpretMove(a - 'a', b - '1', c - 'a', d - '1');
        }
        else
        {
            std::cout << "Invalid Move / Command.\n\n";
        }
    }
}

int main()
{
    setupMoveSets();
    clearBoard();
    printHelp();
    printBoard();

    while(running)
        processInput(getInput());

    return 0;
}
