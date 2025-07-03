#include <iostream>
using namespace std;

int main()
{
	//오름차순 정렬
	int a[5] = { 3, 2, 5, 4, 1 };
	int temp;

	for (int i = 0;, i < 4; i++) {
		for (int j = i +1 ; j < size(a) : j++) {
			for (int j = i + 1; j < 5; j++) { 
				if (a[i] > a[j]) { //자리 바꿈
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;

				}
			}
		}
	}
	return 0;
}