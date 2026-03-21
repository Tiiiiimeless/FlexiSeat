//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int row = 0, line = 0, column = 0;   //分别是列(row)，行(line)，排(column)
//
//struct student
//{
//	int coordinates_x;
//	int coordinates_y;
//	char studentName[100];
//	string studentNumber;
//};
//
//int main() {
//	//for (int i = 0; i < 4; i++) {
//	//	student student[i];
//	//	string temporaryStudentNumber;
//	//	cin >> temporaryStudentNumber;
//	//	strcpy(student[i].studentNumber[i], temporaryStudentNumber);
//	//	cout << student[i].studentNumber;
//	//	cout << endl;
//	//}
//	for (int i = 0; i <=(row+1)*column; i++) {
//		for (int j = 0; j <= line; j++) {
//			if (i % (j + 1) != 0 && j != 0) {
//				student Student[i][j];
//				string temporaryStudentNumber;
//				cin >> temporaryStudentNumber;
//				strcpy(Student[i][j].studentNumber, temporaryStudentNumber.c_str());
//				cout << Student[i][j].studentNumber;
//				cout << endl;
//			}
//		}
//	}
//	return 0;
//}

#include <iostream>
#include <cstring>

using namespace std;

struct student
{
	int coordinates_x;
	int coordinates_y;
	char studentName[100];
	int studentNumber;
};

int main() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			student student[i][j];
			student[i][j].studentNumber = i + j;
			cout << student[i][j].studentNumber;
			cout << endl;
		}
	}
	return 0;
}