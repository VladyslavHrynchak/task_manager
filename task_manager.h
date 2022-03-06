#pragma once
#include "task.h"
#include <functional>

class Taskmanager
{
public:
	void Delete();

	void Get();

	void Insert();

	void Insert(const std::function<void()>& f, const std::string& name);

	void Execute();

private:

	Task task;
};

