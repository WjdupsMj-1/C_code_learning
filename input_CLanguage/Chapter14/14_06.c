#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define MAX 40
#define SIZE 7
#define ROWS 40

typedef struct member{
	int num;
	char fname[MAX];
	char lname[MAX];
	int times;
	int hits;
	int runs;
	int RBI;
	float avr;
}MEMBER;

int main(void)
{
	FILE *fp;
	char filename[MAX];
	char ch;
	char str[ROWS][SIZE][MAX] = {};
	int i, j, k, CL;
	MEMBER MEM [19];
//初始化结构体
	for(i = 0; i < 19; i++){
		MEM[i].num = i;
		MEM[i].times = 0;
		MEM[i].hits = 0;
		MEM[i].runs = 0;
		MEM[i].RBI = 0;
		MEM[i].avr = 0;
	}
//打开文件
	if((fp = fopen("baseball.bat", "r")) == NULL){
		fprintf(stderr, "Wrong File.\n");
		exit(1);
	}
	CL = 0, i = 0, j = 0, k = 0;
//读取文档
	while((ch = getc(fp)) != EOF){
//读取一行7个字符串
		if(ch == '\n'){
			str[i][j][k] = '\0';
			i++;
			CL++;
			k = 0, j = 0;
		}
		else if(ch == ' '){
			str[i][j][k] = '\0';
			j++;
			k = 0;
		}
		else
		str[i][j][k++] = ch;
	}
	if(fclose(fp)){
	fprintf(stderr,"Error Close.\n");
	exit(2);
	}
	printf("%s\n", str[0][1]);
	for(i = 0; i < CL; i++){
//读取字符串数组写入结构体
//查找结构体索引
		k = 0;
		while(MEM[k++].num != atoi(str[i][0]) && k < 19)
			continue;
//写入名字
		for(j = 0; str[i][1][j] != '\0'; j++)
			MEM[k - 1].fname[j] = str[i][1][j];
		MEM[k - 1].fname[j] = str[i][1][j];
		for(j = 0; str[i][2][j] != '\0'; j++)
			MEM[k - 1].lname[j] = str[i][2][j];
		MEM[k - 1].lname[j] = '\0';
//累计数据
		MEM[k - 1].times += atoi(str[i][3]);
		MEM[k - 1].hits += atoi(str[i][4]);
		MEM[k - 1].runs += atoi(str[i][5]);
		MEM[k - 1].RBI += atoi(str[i][6]);
	}
	printf("%s\n", MEM[0].lname);
	printf("%s\n", str[2][0]);
	for(i = 0; i < 19; i++){
//计算平均值
		MEM[i].avr = (float)MEM[i].hits / (float)MEM[i].times;
		printf("No.%3d,%10s,%10s,Attends %3d games, hits %3d, runs %3d, RBI %3d, aver: %3.3f\n",
				MEM[i].num, MEM[i].fname, MEM[i].lname, MEM[i].times, MEM[i].hits,
				MEM[i].runs, MEM[i].RBI, MEM[i].avr);
	}
	printf("Bye!\n\n");


	return 0;
}
