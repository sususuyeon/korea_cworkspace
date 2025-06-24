#include <iostream>
using namespace std;


/*
this의 사용 이유 - 외부 입력  변수와 멤버변수의 이름을 같게해서
								유지 보수시에 효율성을 갖도록 함
								(java - this, python - self)
*/
class car {
private:
	string model; // 모델명
	int year;  //연식

public:
	car(string model, int year);

	void drive();
	void showInfo();
};

//생성자
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
	//car car1("소나타", 2020); // 스택 메모리 영역
	// 
	//동적 객체 생성 - 힙 메모리 영역, 포인터 사용, 화살표 연사자로 접근
	/*car* car1 = new car("소나타", 2020);
	car1->showInfo();
	car1->drive();

	delete car1; //메모리 해제(반납)*/

	//동적 객체 배열
	//매개변수가 있는 생성자
	car* cars = new car[3]{
		car("소나타", 2020),
		car("아이오닉6", 2024),
		car("BMW", 2022)
	};

	for (int i = 0; i < 3; i++) {
		cars[i].showInfo(); // 점 연산자로 접근
		}

	delete[]cars; //메모리 해제

	return 0;
}