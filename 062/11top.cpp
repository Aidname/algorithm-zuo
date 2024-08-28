//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>	
//#include<stdlib.h>	
//
//#define MAX 106
//#define INFINITY 65535
//
//int NV, NE;
//int G[MAX][MAX];
//int early[MAX], late[MAX];
//int in[MAX], out[MAX];
//
//void creatgraph();
//int earlytime();
//void latetime(int cost);
//int findmax(int a, int b);
//int findmin(int a, int b);
//
//int main()
//{
//	int flag;
//	int i, j;
//	scanf("%d %d", &NV, &NE);
//	creatgraph();
//	flag = earlytime();
//	if (flag == -1)printf("0\n");
//	else
//	{
//		printf("%d\n", flag);
//		latetime(flag);
//		for (i = 1; i <= NV; i++)
//		{
//			if (early[i] != late[i])continue;
//			for (j = NV; j >= 1; j--)
//			{
//				if (G[i][j] >= 0 && early[j] == late[j] && late[j] - G[i][j] == early[i])
//				{
//					printf("%d->%d\n", i, j);
//				}
//			}
//		}
//	}
//	return 0;
//}
//
//void creatgraph()
//{
//	int i, j;
//	int x, y, p;
//	for (i = 1; i <= NV; i++)
//	{
//		for (j = 1; j <= NE; j++)
//		{
//			G[i][j] = -1;
//		}
//		early[i] = 0;
//		late[i] = INFINITY;
//		in[i] = 0;
//		out[i] = 0;
//	}
//	for (i = 0; i < NE; i++)
//	{
//		scanf("%d %d %d", &x, &y, &p);
//		G[x][y] = p;
//		in[y]++;
//		out[x]++;
//	}
//}
//
//int earlytime()
//{
//	int queue[NV];
//	int first = -1, rear = -1;
//	int count = 0;
//	int i, temp, ret = 0;
//
//	for (i = 1; i <= NV; i++)
//	{
//		if (in[i] == 0)
//			queue[++rear] = i;
//	}
//
//	while (first < rear)
//	{
//		temp = queue[++first];
//		count++;
//		for (i = 1; i <= NV; i++)
//		{
//			if (G[temp][i] > 0)
//			{
//				in[i]--;
//				early[i] = findmax(early[i], early[temp] + G[temp][i]);
//				if (in[i] == 0) queue[++rear] = i;
//			}
//		}
//	}
//	if (count != NV)
//		ret = -1;
//	else
//	{
//		ret = early[1];
//		for (i = 2; i <= NV; i++)
//		{
//			if (early[i] > ret)
//				ret = early[i];
//		}
//	}
//	return ret;
//}
//
//void latetime(int cost)
//{
//	int i;
//	int queue[MAX];
//	int first = -1, rear = -1;
//	int temp;
//
//	for (i = 1; i <= NV; i++)
//	{
//		if (out[i] == 0)
//		{
//			queue[++rear] = i;
//			late[i] = cost;
//		}
//	}
//	while (first < rear)
//	{
//		temp = queue[++first];
//		for (i = NV; i >= 1; i--)
//		{
//			if (G[i][temp] >= 0)
//			{
//				late[i] = findmin(late[i], late[temp] - G[i][temp]);
//				out[i]--;
//				if (out[i] == 0)
//					queue[++rear] = i;
//			}
//		}
//	}
//}
//
//int findmax(int a, int b)
//{
//	return (a > b) ? a : b;
//}
//
//int findmin(int a, int b)
//{
//	return (a > b) ? b : a;
//}
//
//
