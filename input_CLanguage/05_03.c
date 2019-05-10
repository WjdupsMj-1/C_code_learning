#include<stdio.h>
#define WEEK 7

int main(void)
{	
	int days = 2;
	int week, day;
	char ch;
	
	while(days > 0){
	printf("please enter days you want to translate:\n");
	scanf("%d", &days);
	week = days / WEEK;
	day = days % WEEK;
	printf("%d dyas are %d weeks, %d days.\n", days, week, day);
	printf("enter q to quit.");
	scanf("%c", &ch);
	if ((ch == 'q')||(ch == 'Q'))
	break;
	}
	
	return 0;
}
