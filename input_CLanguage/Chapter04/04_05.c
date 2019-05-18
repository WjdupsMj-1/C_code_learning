#include<stdio.h>
#include<string.h>

int main(void)
{
	char fname[64] = {};
	char _fname[64] = {};
	char lname[64] = {};
	char _lname[64] = {};
	int fnum = 0;
	int lnum = 0;
	
	printf("please enter your first name:\n");
	scanf("%s", fname);
	printf("please enter your last name:\n");
	scanf("%s", lname);
	
	fnum = strlen(fname);
//	_fname[fnum] = fnum;
	lnum = strlen(lname);
//	_lname[lnum] = lnum;
	
	printf("%10s %10s\n",fname, lname);
	printf("%10d %10d\n",fnum, lnum);
/*	
	_fname[fnum] = NULL;
	_lname[lnum] = NULL;
	_fname[0] = fnum;
	_lname[0] = lnum;
*/
	printf("%-10s %-10s\n",fname,lname);
	printf("%-10d %-10d\n",fnum,lnum);
	
	return 0;
}
