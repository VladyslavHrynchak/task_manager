#include "task_manager.h"
#include <iostream>

using namespace std;

void Taskmanager::Delete() 
{
	tasks.pop();
}

function<void()> Taskmanager::Get()
{
	return tasks.front();
}

void Taskmanager::Insert(const function<void()> f)
{
	tasks.push(f);
}

void Taskmanager::Execute()
{
	tasks.front()();
	tasks.pop();
}

int Taskmanager::Size() 
{
	return tasks.size();
}