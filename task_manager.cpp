#include "task_manager.h"
#include <iostream>

using namespace std;

void Taskmanager::Delete() 
{
	tasks.pop();
}

Task Taskmanager::Get()
{
	auto temp = tasks.front();
	tasks.pop();
	return temp;
}

void Taskmanager::Insert(Task task)
{
	tasks.push(task);
}

void Taskmanager::Execute()
{
	if (!tasks.empty())
	{
		tasks.front()();
		tasks.pop();
	}
}

int Taskmanager::Size() 
{
	return tasks.size();
}