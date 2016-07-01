#include<stdio.h>
void main()
{
char s[10];
int n1=0,n2=0,n3=0;
int i=0;
printf("Enter the line");
gets(s);
while(s[i]!='\0')
{
char c=s[i];
if(c>='A'&&c<='Z'||c>='a'&&c<='z')
n1++;
else if(c>='0'&&c<='9')
n2++;
else n3++;
i++;
}
printf("%d %d",n1,n2);
printf("%d",n3);
}
