#include<stdio.h>
main(){
  int i;
  float hap=6; 
  float sum=0;
  for(i=8;i<=50;i=i+2)
  {
    hap=hap+i-2;
    sum=sum+(float)i/hap;   
  } 
  printf("result = %7.2f\n",sum); 
}
