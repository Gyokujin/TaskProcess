#include <future>
#include <iostream>
#include <chrono>
using namespace std;

class Task
{
private:
	int performTask(int a, int b); // ���� �۾��� �����ϴ� �޼���
public:
	future<int> startAsyncTask(int a, int b); // �񵿱� �۾��� �����ϴ� �޼���
};