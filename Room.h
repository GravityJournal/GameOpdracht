#pragma once
#include <string>
#include <vector>
#include <memory>
#include <map>
class Room
{
public:
	std::string name;
	std::string description;
	std::map<std::string, std::shared_ptr<Room>> exits;
	std::vector<std::string> items;
	
	void showinfo() const;

	Room(std::string& name, std::string& description, bool exit = false);

};
