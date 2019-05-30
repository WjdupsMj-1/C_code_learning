#include<stdio.h>
#include<string.h>
int de (int in);

int main(void)
{
	char * pbin = "01001001";
	int num = 0;
	char ch;

	for(int i = 0; i < 8; i++)
	{
		ch = pbin[i];
		num += (int)(ch - '0') * de(7 - i);
	}
	printf("01001001 is %d\n", num);
	return 0;
}

int de (int in)
{
	int de = 1;
	if(in == 0)
		de = 1;
	else
		for(int i = 0; i < in; i++)
			de *= 2;
	return de;

}
