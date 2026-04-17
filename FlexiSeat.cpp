#include <iostream>
#include <iomanip>
#include "struct_Student.h"

int main()
{
	Student student[41][21]; //仿动态数组，且x_max为40，y_max为20
	int r = 0, l = 0, g = 0; //r:行数，l:列数，g:间隔数
	std::cout << "输入行列组" << std::endl;
	std::cin >> r >> l >> g;
	for (int i = 0;i <= g*(l+1);i++)
	{
		for (int j = r;j >=0;j--)
		{
			if (i%(l+1)==0||j==0)
			{
				student[i][j].setStudentCoordinates(0,0);
			}
			else
			{
				student[i][j].setStudentCoordinates(i,j);
			}
		}
	}

	for (int j = r;j >= 0;j--)
	{
		for (int i = 0;i <= g*(l+1);i++)
		{
			student[i][j].printStudentCoordinatesSystem(i,j);
			if (i == g * (l + 1))
			{
				std::cout << std::endl;
				for (int a = 0;a <= g * (l + 1);a++)
				{
					student[a][j].printStudentName();
					if (a == g * (l + 1))
					{
						std::cout<< std::endl;
					}
				}
			}
		}
	}
	return 0;
}