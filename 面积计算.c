#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)
main()
{
	double l, w;
	double s;
	printf("�����볤����ĳ� l:");
	scanf("%lf", &l);
	printf("�����볤����Ŀ� w;");
	scanf("%lf", &w);
	s = l * w;
	printf("s = %lf\n", s);
	getch();
	return 0;

}