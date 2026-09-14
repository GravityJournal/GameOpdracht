#pragma once
#include <string>
#include <vector>
class Room
{
	std::string name;
	std::string description;
	bool exit;
	std::vector<std::string> items;
	
	void showinfo() const;

	Room(std::string& name, std::string& description, bool exit = false);

};
