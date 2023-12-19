#include<stdio.h>
#include<string.h>

void main()
{
    char str[100];
    int i,j,len,count;
    
    printf("Enter any string :- ");
    scanf("%s",&str);
    
    len=strlen(str);
    printf("string length is %d\n",len);
    
    for(i=0;i<=len;i++)
    {
    	count=1;
    	if(str[i])
    	{
    		for(j=i+1;j<len;j++)
    		{
    			if(str[i] == str[j])
    			{
    				count++;
    				str[j]='\0';
				}
			}
			printf("%c = %d\n",str[i],count);
		}
	}
}
