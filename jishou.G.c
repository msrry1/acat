//���� G �����ĺ���
//������
//һ�� ysj д������һ����Ŀ����ʵ�����ﻶ����wtj ��������ô���ˣ��͹�ȥ���˿���д�˸�ʲô��Ŀ��
//��Ŀ����
//������� A �д���������һ��Ԫ�� A[i,j]��������:A[i,j]�ǵ� i ����ֵ��С��Ԫ��,�����ǵ� j ����ֵ��С
//��Ԫ�أ����֮Ϊ�þ����һ�������㡣���̼���� m*n �ľ��� A �����������㡣
//���ĳһ�е���СֵΪ 2������һ���� 3 �� 2��������Ϊ������ 2 ������С��Ԫ�ء�
//wtj ���������Ŀ̫���ˣ����Ǹ������Ŀ����һ���Ѷȡ�
//�����ڸ��� n ����ͬ��С�ľ���ÿ������Ĵ�С�� x*y�����ĳ��λ�ã���ÿ�������������㣬��
//�ǳ�Ϊ�����㡣
//�����ҳ�������ĸ���
//���룺
//��һ������һ���� n����ʾ�� n ������ 1<n<10
//�ڶ������������� x��y ��ʾ������ x �У�ÿ�� y ������ ��1<x,y<10��
//Ȼ������ n*x �У�ÿ�� y ������ ��ʾ n ������
//ÿ�����Ĵ�СΪ [0,100]
//�����
//���������ĸ���
//�������룺
//3 2 4
//1 2 3 4
//5 6 7 8
//1 2 3 4
//5 1 7 8
//1 3 2 4
//4 6 7 3
//���������
//1
//��ʾ
//������
//�ڵ�һ�������� �������λ��Ϊ ��1,1��
//�ڵڶ��������� �������λ��Ϊ��1,1����2,2��
//�ڵ����������� �������λ��Ϊ ��1,1����2,4��
//ֻ�У�1,1�����λ�������������ж��������㣬����������ĸ���Ϊ 1
//


#include<stdio.h>
int main()
{
	int x,y,n;								
	int r,c,r1,c1;
	scanf("%d",&n);
	scanf("%d%d",&x,&y);
	int s[x+1][y+1];
	int p[x+1][y+1];
	int min;
	int i,j;
	int count = 0;
	for(r = 1;r <= x;r++)
	{
		for(c = 1;c <= y;c++)
		{
			p[r][c] = 0;
		}
	}
	for(i = 1;i <= n;i++)
	{
		for(r = 1;r <= x;r++)
		{
			for(c = 1;c <= y;c++)
			{
				scanf("%d",&s[r][c]);
			}
		}
		for(r = 1;r <= x;r++)
		{
			for(c = 1;c <= y;c++)
			{
				min = s[r][c];
				for(r1 = 1;r1 <= x;r1++)
				{
					min = min < s[r1][c]? min:s[r1][c];
				}
				for(c1 = 1;c1 <= y;c1++)
				{
					min = min < s[r][c1]? min:s[r][c1];
				}
				if(s[r][c] <= min)
				{
					p[r][c]++;
				}
			}	
		}
	}
	for(i = 1;i <= x;i++)
	{
		for(j = 1;j <= y;j++)
		{
			if(p[i][j] == n)
			{
				count++;
			}
		}
	}
	printf("%d",count);
}