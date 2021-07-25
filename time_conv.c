//time_conv.c
//min→h,s→h
#include<stdio.h>
main()
{
	int n=0;
	float i=0.0,j=0.0;
	printf("min->h:1, s->h:2\n");
	scanf("%d",&n);
	switch(n){
		case 1://case 1はmin→h
			printf("min>>");
			scanf("%f",&i);
			j=i/60;
			printf("%fmin=%fh",i,j);
			n=0;i=0.0;j=0.0;
			break;

		case 2://case 2はs→h
			printf("s>>");
			scanf("%f",&i);
			j=i/60/60;
			printf("%fs=%fh",i,j);
			n=0;i=0.0;j=0.0;
			break;

		default:
			puts("F");
			n=0;
		break;
	}
	return 0;
}