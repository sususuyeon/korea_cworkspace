#include <stdio.h>
/*
1. �迭���� �ִ밪 ã��
2. ������ �迭���� �ִ밪 ã��
*/
int findMax(int[], int);
int findMax(int a[], int len);
int main()
{
	int arr[] = { 21, 35, 71, 2, 97, 66 };
	int max1, max2;

	max1 = findMax(arr, 6); // �迭�� ������ ������
	max2 = findMax2(arr, 6); //&arr[0]

	printf("�ִ밪: %d %d\n", max1, max2);

	return 0;
}
int findMax2(int* a, int len)
{
	int maxVal, i;
	maxVal = *(a + 0);  //*a (������ ���ؼ� �� Ȯ��)
	for (i = 0; i < len; i++) {
		if (*(a + 1) > maxVal)
			maxVal = *(a + i);
	}
	return maxVal;
}
int findMax(int a[], int len)
{
	int maxVal, i; 

	maxVal = a[0]; //�ִ밪 ����
	for (i = 0; i < len; i++) {
		if (a[i] > maxVal)
			maxVal = a[i];
	}

	return maxVal; //�ִ밪 ��ȯ
}
