#include "task_manager.h"
#include <iostream>

using namespace std;

void Taskmanager::Delete() 
{
	task.execute_tasks.pop();
}

void Taskmanager::Get()
{
	task.execute_tasks.push([=] () { task.Sum(); });
	task.execute_tasks.push([=] () { task.Subtraction(); });
	task.execute_tasks.push([=] () { task.Division(); });
}

void Taskmanager::Insert(const function<void()> f)
{
	task.execute_tasks.push( [=] () { f(); });
}

void Taskmanager::Execute()
{
	
	while (!task.execute_tasks.empty())
	{
		task.execute_tasks.front()();
		task.execute_tasks.pop();
	}
}

int Taskmanager::Size() 
{
	return task.execute_tasks.size();
}