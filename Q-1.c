//cmp=compare
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[100];
	int i,length=0,cmp=0;
	
	printf("Enter any string:- ");
	scanf("%s",&str1);
	
	for(i=0;str1[i]!=0;i++)
	{
		length++;
	}
	for(i=0;i<length;i++)
	{
		if(str1[i] == str1[length-i-1])
		{
			cmp=1;
		}
		else{
			cmp=0;
		}
	}
	if(cmp == 1){
		printf("palindrom");
	}
	else{
		printf("not palindrom");
	}
}
