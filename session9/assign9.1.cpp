#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void strr(char str2[],FILE *temp1)
{
int i=strlen(str2);
for(int j=i;j>=0;j--)
{
fprintf(temp1,"%c",str2[j]);
}
fprintf(temp1,"%c","\n");
}
int main()
{
FILE *fp,*ft,*temp;
char str[25],ch,*str1,*str2;
str1=new char;
str2=new char;
fp=fopen("dac1718_file","a+");

temp=fopen("temp","w");
cout<<"enter ur name";
cin>>str;
fprintf(fp,"%s\n",str);
fclose(fp);
ft=fopen("dac1718_file","r");

while(fscanf(ft,"%s",str1)!=EOF)
	{
	strr(str1,temp);
	
		}



	fclose(ft);
	fclose(temp);
return 0;
}
