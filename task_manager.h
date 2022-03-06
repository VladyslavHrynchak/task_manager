#pragma once
#include "task.h"

class Taskmanager
{
public:
	void Delete();

	void Get();

	void Insert(const std::function<void()> f);

	void Execute();

	int Size();

protected:

	Task task;
};

