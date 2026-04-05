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
	student str[41][21]; //仿动态数组，且x_max为40，y_max为20
	int r = 0, l = 0, g = 0; //r:行数，l:列数，g:间隔数
	cout << "输入行列组" << endl;
	cin >> r >> l >> g;
	for (int i = 0;i <= g*(l+1);i++) {
		for (int j = r-1;j >=0;j--) {
			if (i%(l+1)==0||j==0) {
				str[i][j].coor_x = 0;
				str[i][j].coor_y = 0;
			}
			else {
				str[i][j].coor_x = i;
				str[i][j].coor_y = j;
			}
		}
	}

	for (int j = r-1;j >= 0;j--) {
		for (int i = 0;i <= g*(l+1);i++) {
			cout << "(";
			cout << setw(2) << str[i][j].coor_x;
			cout << ",";
			cout << setw(2) << str[i][j].coor_y;
			cout << ")";

			if (i == g * (l + 1)) cout << endl;
		}
	}
	return 0;
}

