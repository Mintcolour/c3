#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)
main()
{
	double l, w;
	double s;
	printf("请输入长方体的长 l:");
	scanf("%lf", &l);
	printf("请输入长方体的宽 w;");
	scanf("%lf", &w);
	s = l * w;
	printf("s = %lf\n", s);
	getch();
	return 0;

}