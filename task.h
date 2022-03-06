#pragma once
#include <queue>
#include <vector>
#include <functional>
#include <string>

class Task
{	
public:
	
	void Sum();

	void Subtraction();

	void Division();

	void set_list_of_tasks();

	void get_list_of_tasks();

	std::vector< std::string> list_of_tasks;

	std::queue<std::function<void() >> execute_tasks;

protected:

	int getRandomNumber(int min, int max);
};


