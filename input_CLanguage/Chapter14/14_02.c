#include<stdio.h>
#include<string.h>
int main(void)
{
	struct MON {
	char NAME[10];
	char SHORT[4];
	int days;
	};
	int i, j;
	struct MON month[12] = {
		{"January","JAN",31},{"February","FEB",28},{"March","MAR", 31},
		{"April", "APR", 30},{"May", "MAY", 31}, {"June", "JUN", 30},
		{"July", "JUL", 31}, {"August", "AUG", 31}, {"September", "SEP", 30},
		{"October", "OCT", 31}, {"November", "NOV", 30}, {"December", "DEC", 31}
	};
	int dayin = 0;
	char monthin[10];
	int day_count = 0;
	printf("Enter a month: ");
	scanf("%s",monthin);
	printf("Enter a day: ");
	scanf("%d", &dayin);
	i = 0;
	while (i < 12 &&
			strcmp(month[i].NAME, monthin) != 0 &&
			strcmp(month[i].SHORT, monthin) != 0)
		i++;
	if(i >= 12){
		printf("Wrong enter!\n");
		return 0;
	}
	else
		for(j = 0; j < i; j++)
			day_count += month[j].days;
	day_count += dayin;
	printf("There are %d days till %s %dth.\n", day_count, month[i].SHORT, dayin);

	return 0;

}
