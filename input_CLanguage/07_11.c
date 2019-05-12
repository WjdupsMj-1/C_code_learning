#include<stdio.h>

void POUNDS(double *);
void COSTS(double *, double *, double *);

int main(void)
{	
	int i;
	char ch;
	char CH[3] = {'A', 'B', 'C'};
	double Pou[4] = {};
	double Cost[4] = {};
	double Pri[3] = {1.25, 0.65, 0.89};
	double offset, Tra, FeeT;

	do{
	offset = Tra = FeeT = 0;
	for(i = 0; i < 3; i++){
		Pou[i] = 0;
		Cost[i] = 0;
	}
	POUNDS(Pou);
	COSTS(Pou, Pri, Cost);
	if (Cost[3] >= 100)
		offset = Cost[3] * 0.05;
	if(Pou[3] < 5)
		Tra = 3.5;
	else if(Pou[3] < 20)
		Tra = 10;
	else
		Tra = 8 + Pou[3] * 0.1;
	FeeT = Cost[3] + Tra - offset;

	for(i = 0; i < 3; i++)
	printf("%c's UPrice is $%4.2f, you take %4.2f Ps, which costs:$%.2f.\n",
	CH[i], Pri[i], Pou[i], Cost[i]);
	printf("Total costs:$%.2f, offset is $%.2f, traffic costs$%.2f.\n",
	Cost[3],offset,Tra);
	printf("The bill costs:$%.2f\n", FeeT);
	printf("Enter next tril or 0 to quit\n");

	}while((ch = getchar()) != '0');
	return 0;
}

void COSTS(double *POUNDS, double *Pri, double *COSTS)
{
	int i;

	for(i = 0; i < 3; i++){
		COSTS[i] = POUNDS[i] * Pri[i];
		COSTS[3] += COSTS[i];
	}

	return;
}

void POUNDS(double *Pou)
{
	int i;
	char ch;

	do{
		printf("A(a) to Enter the A pounds.\n"
			   "B(b) to Enter the B pounds.\n"
			   "C(c) to Enter the C pounds.\n"
			   "q to quit.\n");
		ch = getchar();
		if(ch >= 'a' && ch <= 'c'){
			printf("Enter %c pounds:\n", ch);
			switch(ch){
				case'a':scanf("%lf", &Pou[0]);
						break;
				case'b':scanf("%lf", &Pou[1]);
						break;
				case'c':scanf("%lf", &Pou[2]);
						break;
			}
		}	
	}while(getchar() != 'q');
	for (i = 0; i < 3; i++)
		Pou[3] += Pou[i];

	return;
}


