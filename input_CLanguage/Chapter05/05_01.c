#include<stdio.h>
#define HOUR 60

int main(void)
{
	int mins, hour, min;
	char ch;
	while(1){
	printf("please enter a min > 0 to translate:\n");
	scanf("%d", &mins);
	if (mins < 0)
	break;
	
	hour = mins / HOUR;
	min = mins % HOUR;
	printf("%d is %d hours and %d mins!\n"
	"enter q to quit.\n", mins, hour, min);
	scanf("%c", &ch);
	if((ch == 'q') || (ch == 'Q'))
	break;
	}
	
	return 0;
}
