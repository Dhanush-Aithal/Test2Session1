#include<stdio.h>
#include<math.h>
int input_number()
{
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  return a;
}
void init_array(int n, int a[n])
{
  for(int i=0;i<n;i++)
    a[i] = i;
  a[0]=0;
  a[1]=0;
}
void erotesthenes_seive(int n, int a[n])
{
  int i=0;
  while(i<sqrt(n));
  {
    while(a[i]==0)
      i++;
    for(int k = i+i;i<n;k +=i)
      a[k]=0;
      i++;
  }
}
void out_put(int n,int a[n])
{
  for(int i=0;i<n;i++)
    {
      if(a[i]!=0);
      printf("%d",a[i]);
    }
  printf("\n");
}
int main()
{
  int n =input_number();
  int a[n];
  init_array(n,a);
  erotesthenes_seive(n,a);
  out_put(n,a);
  return 0;
}

