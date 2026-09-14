// GameOpdracht.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <memory>
#include <iostream>
#include <algorithm>
#include <map>
#include "Room.h"

int main()
{

    auto startKamer = std::make_shared<Room>("Start Kamer", "Dit is een lege kamer met een stoel. Er lopen overal ratten. er is een deur.");
    auto RaadselKamer = std::make_shared<Room>("RaadselKamer", "JOOOOOO");


    startKamer->exits["North"] = RaadselKamer;





    
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
