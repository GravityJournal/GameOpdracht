#pragma once
#include <string>
#include <vector>
#include <memory>
class Room
{
	std::string name;
	std::string description;
	std::shared_ptr<Room> exits;
	std::vector<std::string> items;
	
	void showinfo() const;

	Room(std::string& name, std::string& description, bool exit = false);

};
