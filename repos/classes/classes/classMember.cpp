#include <iostream>
using namespace std;

class Member {
	
		string id;
		int password;

	public:
		Member(string id, int password);

		void displayInfo();
	};

};
void Member::dispalyInfo() {
	cout << "아이디 " << this->id << ","
		<< "패스워드: " << this->password << endl;
}
int main()
{
	Member member[3] = {
		Member("flower", "f1234").
		Member("tree", "t1234").
		Member("bird", "b1234")
	}
	cout << "****************회원현황 ****************" << endl;
	for (int i = 0; i < size(members); i++)
	{
		member[i].displayInfo():
	}

	return 0;
}