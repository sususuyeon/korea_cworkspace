#include <iostream>
using namespace std;


/*
this의 사용 이유 - 외부 입력  변수와 멤버변수의 이름을 같게해서
								유지 보수시에 효율성을 갖도록 함
								(java - this, python - self)
*/
class car {
	string model;
	int year;

public:
	car(string model, int year);

	void drive();
	void showInfo();
};

car::car(string model, int year) {
	//this에 화살표 연산자 사용
	this->model = model;
	this->year = year;
}
void car::drive() {
	cout << "차가 달립니다.\n";
}
void car::showInfo() {
	cout << "모델명: " << this->model << endl;
	cout << "연식: " << this->year << endl;
}
int main()
{
	/*car car1("Ionic6", 2023);
	car1.showInfo();
	car1.drive();

	car car2("아반떼", 2016);
	car2.showInfo();
	car2.drive();*/
	
	car car[3] = {
		car("Ionic6", 2023),
		car("아반떼", 2016),
		car("K7", 2025),

	};
	for (int i = 0; i < 3; i++) {
		cars[i].showInfo();
		cars[i].drive();
		cout << "-----------------------------\n";
}

	return 0;
}