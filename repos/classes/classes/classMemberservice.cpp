#include<iostream>
#include<string> //compare()
using namespace std;

//회원서비스 -  로그인, 로그아웃
class Memberservice {
public:
	bool login(string id, string pwd);


	void logout();
};
bool MemberService::login(string id, string pwd) {
	//아이디, 비밀번호 일치하면 true 반환
	if (id, compare("hanganf") == 0 && pwd.compare("k2025") == 0) {
		return true;
	}

	void MemberService::logout() {
		cout << "로그아웃 되었습니다.\n"
	}
	
}
int main()
{

	MemberService service;
	string password = "k2025";

	//로그인 함수 호출
	bool result = service.longin(userId, password);
	if (result) { //일치하면
		cout << "로그인 되었습니다.\n";
		cout << userId << "님 환영합니다.\n";

	}
	//로그아웃 함수 호출
	service.logout();

	return 0;
}