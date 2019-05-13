#include<stdio.h>
#include<ctype.h>

int main(void)
{
	int ch;
	int num_alpha = 0, num_word = 1;
	double avr = 0;
	char prev;

	while((ch = getchar()) != EOF){
		if(ch == 10 || ch == 32 || ch == 9)
			prev = ch;
		else if(ispunct(ch))
			;
		else{
			 if(prev == 10 || prev == 32 || prev == 9)
				num_word++;
			num_alpha++;
			prev = 0;
		}
		putchar(ch);
	}
	avr = (double)num_alpha / ((double)num_word);

	printf("the avr is %4.2f.there are %d alpha and %d space here.\n", avr, num_alpha, num_word);
	
	return 0;
}
