#pragma once
struct Student 
{
public:
	int studentNumber;
	int coor_x;
	int coor_y;
};

//void standard_Seating_Arrangement(Student str[][], int r, int l, int g) //r:行数 l:列数 g:组数
//{
//	for (int i = 0;i <= g * (l + g);i++)
//	{
//		for (int j = 0;j <= r;j++)
//		{	
//			if (i % (l + 1) == 0 && j == 0)
//			{
//				str[i][j].coor_x = 0;
//				str[i][j].coor_y = 0;
//			}
//			else
//			{
//				str[i][j].coor_x = i;
//				str[i][j].coor_y = j;
//			}
//		}
//	}
//}