#pragma once
#include <functional>
#include <queue>

class Taskmanager
{
public:
	void Delete();

	void Insert(const std::function<void()> f);

	void Execute();

	int Size();

	std::function<void()> Get();

protected:

	std::queue<std::function<void() >> tasks;
};

