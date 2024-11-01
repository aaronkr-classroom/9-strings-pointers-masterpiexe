#include<stdio.h>
#define CRT_SECURE_NO_WARNINGS

int main()
{
	short bday;
	short* ptr = &bday;
	printf("%p\n", ptr);

	int ivar = 42;
	float fvar = 3.14;
	char cvar = 'A';
	double dvar = 9.81;

	int* i = &ivar;
	float* f = &fvar;
	char* c = &cvar;
	double* d = &dvar;
	printf("%d %p\n%.2f %p\n%c %p\n%.2f %p\n",*i,i, *f,f, *c,c, *d,d);
	

	return 0;
}
