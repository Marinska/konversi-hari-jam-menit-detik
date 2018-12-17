#include <stdio.h>
int main()
{
	int s,h,m,d;
	printf("Masukan nilai hari : ");
	scanf("%d",&d);
	s=86400*d;
	printf("%d hari sama dengan %d detik\n",d,s);
	printf("Masukan nilai jam : ");
	scanf("%d",&h);
	s=3600*h;
	printf("%d jam sama dengan %d detik\n",h,s);
	printf("Masukan nilai menit : ");
	scanf("%d",&m);	
	s=60*m;
	printf("%d jam sama dengan %d detik",m,s);
}
