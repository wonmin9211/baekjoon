#include <iostream>
#include <cmath>
using namespace std;

class Line {
public:
	int sx=0, sy=1;
	int ex=0, ey=1;
};

int main() {
	Line myline;
	cout << "������ ��ǥ ���� �� ���� �Է��ϼ���.\n";
	cin >> myline.sx >> myline.sy;
	cout << "���� ��ǥ ���� �� ���� �Է��ϼ���.\n";
	cin >> myline.ex >> myline.ey;
	double d = sqrt(pow(myline.ex - myline.sx, 2) + pow(myline.ey - myline.sy, 2));
	cout << "myline�� ���̴� " << d << "�Դϴ�.\n";
}