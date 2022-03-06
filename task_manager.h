#pragma once
#include <functional>
#include <queue>
#include "task.h"

class Taskmanager
{
public:
	void Delete();

	void Insert(const Task task);

	void Execute();

	int Size();

	Task Get();

protected:

	std::queue<Task> tasks;
};

