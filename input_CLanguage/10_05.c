#include <stdio.h>
#include<ctype.h>

int main(void)
{
int index = 0;
int i = 5;
double class[5];
double max,difference;
double * ptr;
double _max(double p[], int i);
int _max_index(double p[], int i);
double _difference(double p[], int i);

printf ("please enter 5 number into the class:\n");
for (i = 0; i < 5; i++)
scanf ("%lf",&class[i]);
printf ("you entered 5 elements here.\n");
for (i = 0; i < 5; i++)
printf ("%8.2f",class[i]);
printf ("\n");

ptr = class;
max = _max(ptr,i);
index = _max_index(ptr,i);
difference = _difference(ptr,i);

//printf ("the max in the class is: %5.3f\n", max);
//printf ("the index of the max element is: %d\n", index + 1);
printf ("the difference of the max and min is : %8.3f\n", difference);
return 0;
}

double _max (double p[], int i)
{
int j;
double prev = 0;
double _max;
prev = p[0];
for (j = 0; j < i; j++)
{
	if (p[j] > prev)
	prev = p[j];
}
_max = prev;
return _max;
}

int _max_index (double p[], int i)
{
int j;
double prev = 0;
int index = 0;
prev = p[0];
for (j = 0; j < i; j++)
	{
	if (p[j] > prev)
{	prev = p[j];
	index = j;
}
	}
return index;
}

double _difference(double p[], int i)
{
int j;
double _max = 0;
double _min = 0;
double difference = 0;
_max = _min = p[0];
for(j = 0; j < 5; j++)
	{
	if (p[j] > _max)
	_max = p[j];
	if (p[j] < _min)
	_min = p[j];
	}
difference = _max - _min;
return difference;
}
