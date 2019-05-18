#include<stdio.h>
#include<ctype.h>

int main(void)
{
	int num[255] = {};
	int i = -1;
	int num_1 = 0;
	int num_2 = 0;
	int sum_1 = 0;
	int sum_2 = 0;
	
	printf("Enter number:\n");
	do{
		i++;
		scanf("%d", &num[i]);
		if(num[i] == 0)
			break;
/*		else if(num[i] % 2 == 0){
			num_2++;
			sum_2 += num[i];
		}
		else if(num[i] % 2 == 1){
			num_1++;
			sum_1 += num[i];
		}
		else 
			break; 
*/
		
		switch(num[i] % 2){
			case 0: {
				num_2++;
				sum_2 += num[i];
				break;
			}
			case 1:{
				num_1++;
				sum_1 += num[i];
				break;
			}
			default :
				break;
		}
	}while(num[i] != 0);
	
	printf("there are %d evens and adverage is:%.3f\n",
		num_2, (double)sum_2 / (double)num_2);
	printf("there are %d odds and adverage is:%.3f\n",
		num_1, (double)sum_1 / (double)num_1);
	return 0;
}
