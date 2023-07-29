#include<stdio.h>
int main()
{
	char s1[50][20],name[20];
	int n,i,flag=0;
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter n names:");
	for(i=0;i<n;i++)
	  scanf("%s",&s1[i]);
	printf("enter name to search:");
	scanf("%s",&name);
	for(i=0;i<n;i++)
	 {
	 if(strcmp(s1[i],name)==0)
     {
     	flag=1;
     	break;
     }
}
	if(flag==1)
	   printf("name is found");
    else
    printf("name is not found");
}
