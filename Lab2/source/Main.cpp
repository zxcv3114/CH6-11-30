#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	typedef struct _dates
	{
		int year;
		int month;
		int day;

	}date;
	typedef struct _orders
	{
		char num[11];
		date dates;
		int amount;

	}order;
	order ord1 = { "abc1234",{2011,11,11},987654 };
	order ord2 = { "abc4321",{2012,4,30},456789 };
	order ord3 = { "abc7893",{2018,8,05},135789 };
	printf("        *************\n      ");
	printf("        *  訂單資料 *\n ");
	printf("        *************\n      ");
	printf(" ======================================\n ");
	printf("訂單編號         訂貨日期      訂貨金額\n");
	printf(" ======================================\n ");
	printf("%-10s  %8d/%2d/%2d    NT%d\n ", ord1.num, ord1.dates, ord1.amount);
	printf("%-10s  %8d/%2d/%2d    NT%d\n ", ord2.num, ord2.dates.year, ord2.dates.month, ord2.dates.day, ord2.amount);
	printf("%-10s  %8d/%2d/%2d    NT%d\n ", ord3.num, ord3.dates.year, ord3.dates.month, ord3.dates.day, ord3.amount);
	system("pause");
}