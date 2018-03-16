#include <stdio.h>

int main(void) {
	char a[100],a1[100];
	int i,j;
	printf("enter the string ");
	scanf("%s%s",a,a1);
	i=strlen(a);
	j=strlen(a1);
	if(i>=j)
	printf("%s",a1);
	else
	printf("%s",a);
	
	return 0;
}
