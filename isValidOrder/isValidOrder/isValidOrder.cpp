// isValidOrder.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	
	int M, N, K, num;

	scanf_s("%d %d %d", &M, &N, &K);
	/*while (K--)
	{

	}*/
	for (int i = 0; i < K; i++)
	{
		stack<int> s;
		queue<int> q;
		for (int j = 0; j < N; j++) 
		{
			scanf_s("%d", &num);
			q.push(num);
		}
		for (int n = 1; n <= N; n++)
		{
			s.push(n);
			if (s.size() > M)
			{
				break;
			}
			while (!s.empty() && s.top() == q.front())
			{
				s.pop();
				q.pop();
			}
		}
		if (s.empty())
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	system("pause");
	return 0;
}
