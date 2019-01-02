#include<stdio.h>
#include<string.h>
#include<ctype.h>
int number_word(char *s)
{
	int i = 0, dem = 0;
	int len = strlen(s);
	while(i<len)
	{
		if(!isalpha(s[i]))
		do{
			i++;
		} while(s[i] == ' ');
		else
		{
			dem++;
			do{
				i++;
			} while(s[i] != ' ');
		}
	}
	return dem;
}
main()
{
	char s[100];
	printf("nhap chuoi vao: ");
	gets(s);
	printf("so tu trong chuoi la: %d", number_word(s));
}
