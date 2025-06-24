#define _CRT_SECURE_NO_WARNING  //strtok() 보안경고 - 컴파일 에러 방지
#include <studio.h>
#include <string.h>
/*
strtok(문자열, 구분기호)  - 구분기호(,  :, " ")
 문자열을 구분기호로 구분해서 배열로 반환해 줌
 - 배열을 사용
 -랜덤하게 요소를 추출
 -외부파일 문자열 -> 배열로 사용
*/

int main()
{
	char words[] = "ant vear chicken pig";
	char* wordList[4];  //분리된 단어 저장용 배열
	int idxOfWords = 0; //배열 의 인덱스
	char* ptr;

	ptr = strtok(words, " "); // words 를 공백문자로 구분해서 ptr 에 저장(주소)
	while (ptr != NULL) {
		wordList[idxOfwords++] = ptr; //wordsListp[0] = ant
		ptr = strtok(NULL, " ");
	}
	printf("%s\n", wordList[0]); //ant
	printf("%s\n", wordList[1]); //bear


	char words[] = "ant bear chicken pig";
	//char* words[] = { "ant", "bear", "chicken", "pig" };
	
	//printf("%s\n", words);  
	//printf("%s\n", words2[0]);  //ant
	//printf("%s\n", words2[1]);  //bear


	return 0;

}