#include<stdio.h>
int main (void)
{
  int a,b,c,d,e,f;
  scanf("%d",&a);
  while(a!=0)
  {
    if(a%2==0)
      {
        b++;
        c+=a;
      }
    else
      {
        d++;
        e+=a;
      }
    }
  e/=d;
  c/=a;
  printf("%d %d   %d %d",b,c,d,e);
  return 0;
  }
