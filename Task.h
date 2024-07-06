#include <future>
#include <iostream>
#include <chrono>
using namespace std;

class Task
{
private:
	int performTask(int a, int b); // 실제 작업을 수행하는 메서드
public:
	future<int> startAsyncTask(int a, int b); // 비동기 작업을 시작하는 메서드
};