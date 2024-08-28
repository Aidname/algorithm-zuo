//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//
//#define MAX 1004
//#define INFINITY 65535
//
//void creatgraph();
//int Prim();
//int findmin();
//
//int G[MAX][MAX], NV, NE;
//int dist[MAX];
//
//int main()
//{
//	int f;
//	scanf("%d %d", &NV, &NE);
//	creatgraph();
//	f = Prim();
//	printf("%d", f);
//
//	return 0;
//}
//
//int findmin()
//{
//	int i, min,v=0;
//	min = INFINITY;
//	for (i = 2; i <= NV; i++)
//	{
//		if (dist[i] < min && dist[i])
//		{
//			min = dist[i];
//			v = i;
//		}
//	}
//	return v;
//}
//void creatgraph()
//{
//	int i, j;
//	int x, y,p;
//	for (i = 1; i <= NV; i++)
//	{
//		for (j = 1; j <= NV; j++)
//		{
//			G[i][j] = INFINITY;
//		}
//	}
//	for (i = 1; i <= NE; i++)
//	{
//		scanf("%d %d %d", &x, &y, &p);
//		G[x][y] = G[y][x] = p;
//	}
//}
//
//
//int Prim()
//{
//	
//	int i, j=2, k,v;
//    int cost = 0;
//	
//	dist[1] = 0;
//	for (i = 1; i <= NV; i++)
//		dist[i] = G[1][i];
//
//	while (j<=NV)
//	{
//		j++;
//		v = findmin();
//		if (v == 0) return -1;
//		cost += dist[v];
//		dist[v] = 0;
//		
//		for (i = 1; i <= NV; i++)
//		{
//			if ( dist[i]>G[v][i])
//			{
//				dist[i] = G[v][i];
//			}
//		}
//	}
//	return cost;
//}