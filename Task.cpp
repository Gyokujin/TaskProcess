#include "Task.h"

int Task::performTask(int a, int b)
{
	this_thread::sleep_for(chrono::seconds(2));
	return a + b;
}

future<int> Task::startAsyncTask(int a, int b)
{
	return async(launch::async, &Task::performTask, this, a, b);
}