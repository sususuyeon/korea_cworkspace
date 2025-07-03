#include <iostream>
using namespace std;



int main()
{
	//Math 클래스의  myAbs() 호출
	//정수형 값 대입
	cout << "절대값:   " << Math::myAbs(-8) << endl;  //8
	//실수형 값 대입 -double 타입 지원
	cout << "절대값:   " << Math::myAbs(-8, 8) << endl;  //8.8

	// min  ()호출
	cout << "최소값:  " << Math::min(10, 20) << endl;  //10
	cout << "최소값:  " << Math::min(10.1, 20.1) << endl;  //10.1