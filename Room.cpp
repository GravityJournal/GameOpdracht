#include "Room.h"
#include <iostream>


class Room
{
public:
	std::string name;
	std::string description;
	std::map<std::string, std::shared_ptr<Room>> exits;
	std::vector<std::string> items;

	void showinfo()
	{
		std::cout << "Room: " << name << std::endl;
		std::cout << "Description: " << description << std::endl;
		std::cout << "Exits: ";
		for (const auto& exit : exits)
		{
			std::cout << exit.first << " ";
		}
		std::cout << std::endl;
		std::cout << "Items: ";
		for (const auto& item : items)
		{
			std::cout << item << " ";
		}
		std::cout << std::endl;
	}

	Room(std::string& name, std::string& description, bool exit = false)
	{

	}

};