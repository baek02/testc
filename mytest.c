#include <stdio.h>
main(){
  int k;
  float sum;
  sum=0.0;
  for(k=2;k<=10;k++)
    sum=sum+(k+3.0)/(k*(k+1.0));
  printf("%f7.2\n",sum);
}
