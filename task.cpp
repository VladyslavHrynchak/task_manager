#include "task.h"
#include <iostream>

using namespace std;

void Task::Sum()
{
	bool is_correct = false;
	int a = getRandomNumber(1, 10), b = getRandomNumber(1, 10), c = 0, val = 0;
	while (!is_correct)
	{
		cout << "A = " << a << endl;
		cout << "B = " << b << endl;
		cout << "Enter " << a << " + " << b << " = ";
		cin >> val;
		c = a + b;
		if (c == val)
		{
			is_correct = true;
			cout << "You answered correctly " << endl;
		}
		else
		{
			cout << "You answered wrong " << endl << "Try again" << endl;
		}
		
	}
}

void Task::Subtraction()
{
	bool is_correct = false;
	int a = getRandomNumber(1, 10), b = getRandomNumber(1, 10), c = 0, val = 0;
	while (!is_correct)
	{
		cout << "A = " << a << endl;
		cout << "B = " << b << endl;
		cout << "Enter " << a << " - " << b << " = ";
		cin >> val;
		c = a - b;
		if (c == val)
		{
			is_correct = true;
			cout << "You answered correctly " << endl;
		}
		else
		{
			cout << "You answered wrong " << endl << "Try again" << endl;
		}

	}
}

void Task::Division() 
{
	bool is_correct = false;
	int a = getRandomNumber(1, 10), b = getRandomNumber(1, 10), c = 0, val = 0;
	while (!is_correct)
	{
		cout << "A = " << a << endl;
		cout << "B = " << b << endl;
		cout << "Enter " << a << " / " << b << " = ";
		cin >> val;
		c = a / b;
		if (c == val)
		{
			is_correct = true;
			cout << "You answered correctly " << endl;
		}
		else
		{
			cout << "You answered wrong " << endl << "Try again" << endl;
		}
	}
}

void Task::set_list_of_tasks() 
{
	list_of_tasks.push_back("1: Sum");
	list_of_tasks.push_back("2: Subtraction");
	list_of_tasks.push_back("3: Division");
}

void Task::get_list_of_tasks()
{
	for (auto i : list_of_tasks)
	{
		cout << i << endl;
	}
}

int Task::getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
   
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}