#include <stdio.h>
#include "date.h"

void nhapNgay(Date *d)
{
	printf("Nhap ngay thang nam:");
	scanf("%d%d%d",&d->ngay,&d->thang,&d->nam);
}

void inNgay(Date d)
{
	printf("%d/%d/%d",d.ngay,d.thang,d.nam);
}
