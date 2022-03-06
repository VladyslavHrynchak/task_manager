#include "task_manager.h"
#include <iostream>

using namespace std;

void Taskmanager::Delete() 
{
	tasks.pop();
}

function<void()> Taskmanager::Get()
{
	auto temp = tasks.front();
	tasks.pop();
	return temp;
}

void Taskmanager::Insert(const function<void()> f)
{
	tasks.push(f);
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