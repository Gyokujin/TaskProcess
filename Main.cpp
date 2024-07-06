#include "Task.h"

int main()
{
	Task task;
	int a, b;
	cin >> a >> b;

	future<int> result = task.startAsyncTask(a, b); // 비동기 작업 시작
	cout << "Async 프로세스 시작!" << endl;
	cout << "Async 결과값 : " << result.get() << endl; // 비동기 작업의 결과를 기다린다. (유니티의 yield return start coroutine 처럼)

	return 0;
}