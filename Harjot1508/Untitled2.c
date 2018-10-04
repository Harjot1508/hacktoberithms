#include <stdio.h>

int sum_all(void)
{
     int n1,n2,sum=0,i;

     printf("Enter 2 numbers :");
     scanf("%d%d",&n1,&n2);

     if(n1>n2) {  for(i=n2;i<=n1;i++)
                        sum+=i;
                     }
     else if(n1<n2) { for(i=n1;i<=n2;i++)
                                sum+=i;
                              }
     else { sum= 2*n1;}

     printf("%d",sum);

}

int main(void) {
                          sum_all();
                          }
