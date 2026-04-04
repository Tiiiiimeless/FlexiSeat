#include <iostream>
#include <iomanip>
using namespace std;
struct student {
public:
	int studentNumber;
	int coor_x;
	int coor_y;
};
int main() {
	student str[13][7];  //使用12*6座位排布进行输出测试
	for (int i = 0;i <= 12;i++) {
		for (int j = 0;j <= 6;j++) {
			if (i == 0 || i == 4 || i == 8 || i == 12 || j == 6) {
				str[i][j].coor_x = 0;
				str[i][j].coor_y = 0;
			}
			else {
				str[i][j].coor_x = i;
				str[i][j].coor_y = 6 - j;
			}
		}
	}

	for (int j = 0;j <= 6;j++) {
		for (int i = 0;i <= 12;i++) {
			cout << "(";
			cout << setw(2) << str[i][j].coor_x;
			cout << ",";
			cout << setw(2) << str[i][j].coor_y;
			cout << ")";

			if (i == 12) cout << endl;
		}
	}
	return 0;
}
