//#include <stdio.h>
//
//int main()
//{
//	//�ƽ�Ű �ڵ� - 1Byte(256��)
//	char ch = '0';
//
//	printf("%c %d\n",ch,ch);
//	printf("%c %d\n",ch+1,ch+1);
//	printf("%c %d\n",ch+2,ch+2);
//
//	//�����ڵ� -2Byte(65000��)
//	char han[] = "��"; // �迭 han�� "��" ����
//	char han2[] = "\uAC00";
//
//	printf("%s\n", han);
//	printf("%s\n", han2);
//
//	//�޸��ּ�
//	printf("%c %x\n", ch, &ch);
//	printf("%s %x\n", han,han);
//	printf("%s %x\n", han,&han[0]);
//	
//	return 0;
//}