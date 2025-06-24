#include <iostream>
using namespace std;


class Circle {
	int x;
	int y;
public:
	//1/ 매개변수가 있는 생성자
	Point(int x  , int y) {
		this->X = x;
		this->y = y;
};
	//2. 생성자 - 초기화 목록 방식(초기화 포함)
	//point 
	//참조하는 클래스
class circle {
private:
	Point center;  //중심점(point 클래스 참조)
	int radius;   //반지름
	const double PI =  3.1415; // 원주율 (상수 선언)
};
public:
	//생성자 - 초기화 목록
	circle(int x, int y, int radius) : x(x), y(y), radius(radius) {}
	int getx({ return x; }
	int gety() { return y; }

	/*circle(int x, int y, int radius) {
		this->x = x;
		this->y = y;
		this->radius = radius;

	}*/
	//원의 넓이 계산 함수 (PI * 반지름*반지름)
	douuble getArea() {

		return PI * radius * radius;
	}

	void displayInfo() {

		cout << "중심점(" <<center.getx() << ", " << center.gety() 
		<< "), 반지름: "  << radius <<endl; 
	}
int main()
{
	cicle  c1(2, 3, 5);
	c1.displayInfo();
	cout << "원의 넓이: " << c1.getArea() << endl;

	circle c2(10, 10, 10);
	c2.displayInfo();
	cout << "원의 넓이: " << c2.getArea() << endl;

	retrun 0;
}