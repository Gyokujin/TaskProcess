#include "Task.h"

int main()
{
	Task task;
	int a, b;
	cin >> a >> b;

	future<int> result = task.startAsyncTask(a, b); // �񵿱� �۾� ����
	cout << "Async ���μ��� ����!" << endl;
	cout << "Async ����� : " << result.get() << endl; // �񵿱� �۾��� ����� ��ٸ���. (����Ƽ�� yield return start coroutine ó��)

	return 0;
}