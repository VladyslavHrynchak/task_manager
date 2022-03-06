#include "task_manager.h"
#include <iostream>

using namespace std;

void Taskmanager::Delete() 
{
	task.execute_tasks.pop();
	task.list_of_tasks[0].erase();
}

void Taskmanager::Get() 
{
	task.get_list_of_tasks();
}

void Taskmanager::Insert() 
{
	task.set_list_of_tasks();
	task.execute_tasks.push([&] { task.Sum(); });
	task.execute_tasks.push([&] { task.Subtraction(); });
	task.execute_tasks.push([&] { task.Division(); });
}

void Taskmanager::Insert(const function<void()>& f, const string& name)
{
	task.execute_tasks.push([=] { f; });
	task.list_of_tasks.push_back(name);
}

void Taskmanager::Execute()
{
	int i = 0;
	while (!task.execute_tasks.empty())
	{
		cout << task.list_of_tasks[i] << endl;
		task.execute_tasks.front()();
		task.execute_tasks.pop();
		task.list_of_tasks.erase((task.list_of_tasks.begin()));
	}
}

