#include<stdio.h>

int main()
{
	char str[5]={"hello"};
	char revstr[5];
	static int j=0;
	int len=sizeof(str);
	static int i=0;
	while(str[i]!='\0')
		i++;
	while(i>=0){
		revstr[j]=str[i];	//ft
		j++;
		i--;
	}
	for(j=0;j<5;j++)
	printf("%s",revstr[j]); // for printing in stdout

	return 0;
}