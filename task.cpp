#include "task.h"
#include <iostream>

using namespace std;

Task::Task(function<void()> task)
{
	this->task = task;
}

void Task::operator()() 
{
	task();
}