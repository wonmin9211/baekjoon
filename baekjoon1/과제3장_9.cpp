#include <iostream>
#include <cmath>
using namespace std;

class Line {
	int sx, sy;
	int ex, ey;
public:
	void setTwoPoints() {
		cout << "������ ��ǥ ���� �� ���� �Է��ϼ���.\n";
		cin >> sx >> sy;
		cout << "���� ��ǥ ���� �� ���� �Է��ϼ���.\n";
		cin >> ex >> ey;
	}
	double getLineLength() {
		return sqrt(pow(ex - sx, 2) + pow(ey - sy, 2));
	}
};

int main() {
	Line myline;
	myline.setTwoPoints();
	cout << "myline�� ���̴� " << myline.getLineLength() << " �Դϴ�.\n";
}