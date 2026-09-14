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
    auto raadselKamer = std::make_shared<Room>("RaadselKamer", "JOOOOOO");
	auto codeKamer = std::make_shared<Room>("CodeKamer", "CODEEEEE");
	auto slotKamer = std::make_shared<Room>("SlotKamer", "Dit is een Kamer met een grote deur, in deze deur zitten 3 sleutelgaten");


    startKamer->exits["North"] = raadselKamer;
    startKamer->exits["East"] = codeKamer;
    startKamer->exits["West"] = slotKamer;


	raadselKamer->exits["South"] = startKamer;
	codeKamer->exits["West"] = startKamer;
    slotKamer->exits["East"] = startKamer;


}