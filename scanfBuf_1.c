#include<stdio.h>
int main()
{
	char string[20];
	char c;
	
	printf("���ڿ� �Է� : ");
	fgets(string,sizeof(string),stdin);
	string[strlen(string)-1] = '\0';
	printf("���� �Է� : "); 
	scanf("%c", &c);
	
	printf("%s\n", string);
	printf("!!%c!!\n", c);
	
	return 0;
}
