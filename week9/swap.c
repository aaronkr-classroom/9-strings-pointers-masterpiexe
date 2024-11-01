#include"stdio.h"
void Swap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
void Swap2(int* pa, int* pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}
int main()
{
	int start = 96;
	int end = 5;

	printf("Swap1:\n");
	printf("before : start = %d, end = %d\n", start, end);
	if (start > end)Swap1(start, end);
	printf("after: start = %d,end = %d\n", start, end);

	printf("\nSwap2:\n");
	printf("before : start = %d, end = %d\n", start, end);
	if (start > end)Swap2(&start, &end);
	printf("after: start = %d,end = %d\n", start, end);

}