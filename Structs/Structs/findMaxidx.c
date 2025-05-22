#include <stdio.h>
/*
   - �迭���� �ִ밪�� ��ġ ã��
   - ������ �迭���� �ִ밪�� ��ġ ã��
*/
int findMaxIdx(int[], int);
int findMaxIdx2(int*, int);
int main()
{
	int arr[] = { 21, 35, 71, 2, 97, 66 };
	int maxIdx1, maxIdx2;

	maxIdx1 = findMaxIdx(arr, 6); //�迭�� ������ ������
	maxIdx2 = findMaxIdx2(arr, 6);  //&arr[0]

	printf("�ִ밪�� ��ġ: %d %d\n", maxIdx1, maxIdx2);

	return 0;
}

int findMaxIdx(int a[], int len)
{
	int maxIdx, i;
	maxIdx = 0;  //ù��° ��ġ�� ����
	for (i = 0; i < len; i++) {
		if (a[i] > a[maxIdx])  //a[maxIdx]�� ��
			maxIdx = i;
	}
	return maxIdx;
}

int findMaxIdx2(int* a, int len)
{ 
	int maxIdx, i;
	maxIdx = 0;
	for (i = 0; i < len; i++) {
		if (*(a + i) > *(a + maxIdx))
			maxIdx = i;
	}
	return maxIdx;
}
