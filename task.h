#pragma once
#include <queue>
#include <vector>
#include <functional>

class Task
{	
public:
	
	void Sum();

	void Subtraction();

	void Division();

	std::queue<std::function<void() >> execute_tasks;

protected:

	int getRandomNumber(int min, int max);
};


