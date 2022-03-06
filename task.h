#pragma once
#include <queue>
#include <vector>
#include <functional>

class Task
{	
public:
	Task(std::function<void()> task);
	
	void operator()();

protected:

	std::function<void()> task;
};


