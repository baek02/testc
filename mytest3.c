#include<stdio.h>
main(){
char hh[]="We are the Champion";
char Large[80];
char Small[80];


int i;
for(i=0;hh[i]!='\0';i++)
Large[i]=hh[i];
Large[i]='\0';
for(i=0;Large[i]!='\0';i++)
{
if(Large[i]>='A'&&Large[i]<='Z')
Large[i];
else if(Large[i]>='a'&&Large[i]<='z')
Large[i]=Large[i]-('a'-'A');
else 
Large[i];
}

for(i=0;hh[i]!='\0';i++)
Small[i]=hh[i];
Small[i]='\0';
for(i=0;Small[i]!='\0';i++)
{
if(Small[i]>='a'&&Small[i]<='z')
Small[i];
else if(Small[i]>='A'&&Small[i]<='Z')
Small[i]=Small[i]+('a'-'A');
else 
Small[i];
}


printf("%s\n",hh);
printf("%s\n",Large);
printf("%s\n",Small);
}
