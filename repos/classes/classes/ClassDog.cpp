#include <iostream>
using namespace std;
int main()



	class Dog {
	//멤버 변수
	public : //외부에서 접근 가능
		string type; //종류
		int age; // 나이

		Dog() {} // 기본 생성자 (생략가능)

		~Dog() { //소멸자(destructor)
			cout << "객체가 소멸합니다.\n " << endl;
		}

		// 멤버 함수
		void bark() {
			cout << "왈! 왈!\n;"
		}

};
int main()
{
	//클래스 사용= 인스턴스(객체) 셍성
	//클래스 이름 인스턴스(객체)
	//Dog dog1 = Dog(); Dog() - 생성자 스타일
	Dog d0g1;

	// 생성자 
}
	return 0;

}