#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],b[10],c[10];
	scanf("%s",a);
	scanf("%s",b);
	scanf("%s",c);
	int x=strlen(a);
	int y=strlen(b);
	int z=strlen(c);
	int i;
	for(i=0;i<x;i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
			a[i]='%';
	}
	for(i=0;i<y;i++)
	{
		if(b[i]!='a'&b[i]!='e'&b[i]!='i'&b[i]!='o'&b[i]!='u'&b[i]!='A'&b[i]!='E'&b[i]!='I'&b[i]!='O'&b[i]!='U')
			b[i]='#';
	}
	for(i=0;i<z;i++)
	{
		if(c[i]>='a'&c[i]<='z')
			c[i]=c[i]-32;
	}
	printf("%s\n",a);
	printf("%s\n",b);
	printf("%s\n",c);
}
