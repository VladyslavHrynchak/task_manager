#include <iostream>
#include "task_manager.h"

using namespace std;

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);

	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

void Sum()
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

int main()
{
    Taskmanager t;
	t.Insert(Sum);

    t.Execute();
   
    return 0;
}


