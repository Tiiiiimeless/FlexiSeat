#pragma once
#include <string>
#include <iostream>
#include <iomanip>
//struct Student 
//{
//public:
//	int studentNumber;
//	int coor_x;
//	int coor_y;
//};

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
class Student {
public:
	Student() : studentName("name"), coor_x(0), coor_y(0) {};
	void setStudentCoordinates(unsigned int x, unsigned int y);
	void printStudentCoordinatesSystem(unsigned int x, unsigned int y) const;
	void printStudentName() const;
private:
	unsigned int coor_x;
	unsigned int coor_y;
	std::string studentName;
};

void Student::setStudentCoordinates(unsigned int x, unsigned int y)
{
	coor_x = x;
	coor_y = y;
};

void Student::printStudentCoordinatesSystem(unsigned int x, unsigned int y) const
{
	std::cout << "(";
	std::cout << std::setw(2) << coor_x;
	std::cout << ",";
	std::cout << std::setw(2) << coor_y;
	std::cout << ")";
}

void Student::printStudentName() const
{
	std::cout << " " << studentName << "  ";
}