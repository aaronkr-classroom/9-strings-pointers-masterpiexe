#include<stdio.h>
#include<string.h>


#define STRING_LENGTH 100



int main()
{
	char str1[STRING_LENGTH],
		 str2[STRING_LENGTH],
		 str3[STRING_LENGTH]; //복사나 결합할 문자열
	printf("문1자열을 입력하시오: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1)-1]='\0';

	printf("문2자열을 입력하시오: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = '\0';

	printf("\n-----------\n");
	//문자열 길이 출력
	printf("str1길이: %d\nstr2길이: %d\n", (int)strlen(str1), (int)strlen(str2));

	//str1을 str3로 복사 및 출력
	strcpy_s(str3,sizeof(str3), str1);
	printf("%s\n", str3);
	//str1에서 str2 결합 후 출력
	strcat_s(str1, sizeof(str1), str2);
	printf("%s\n", str1);



	return 0;
}