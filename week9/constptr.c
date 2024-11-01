#include<stdio.h>

int main()
{
	int x = 10,
		y = 20;

	int* const p1 = &x;//주소는 고정 값은 변경 가능
	*p1 = 15;
	printf("p1 points to value: %d\n", *p1);


	const int* p2 = &x;//주소 변경가능, 값 변경 불가능
	p2 = &y;
	printf("p2 points to value: %d\n", *p2);


	const int* const p3 = &x;// both unexchangable
	printf("p3 points to value: %d\n", *p3);
}