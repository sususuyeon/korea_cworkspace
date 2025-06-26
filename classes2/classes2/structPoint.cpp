#include <iostream>
using namespace std;

struct point {
	int x;
	int y;

	//생성자 목록 초기화(기본생성자로 초기화 할 때  x = 0, y=o)
	point(int x=0, , int y=0) : x(x), y(y){}
};
point inputpoint() {  //반환 자료형 point
	point p;  //기본 생성자로 인스턴스 생성  
	cout << "좌표를 잊ㅂ력해 주세요(x,y): ";
	cin >> p.x >> p.y;
	return p;  //반환시 복사(임시 객체 생성)
}
//&(참조연산자)를 붙이면 참조(point&) 호출할때
//전체 객체가 복사되지 않고 해당 객체가 복사됨
void printpoint(point& p, const char* str) { //str="입력좌표"
	cout << "입력좌표 : " << p.x << "," << p.y << endl;
}
int main()
{
	point p1; //기본생성자로 인스턴스 생성

	p1=inputpoint(); //입력 함수 호출

	printpoint(p1, "입력 좌표"); // 출력 함수 호출

	return 0;
}