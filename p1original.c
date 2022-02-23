#include<stdio.h>
#include<math.h>
void input(float*x1,float*y1,float*x2,float*y2)
{
  printf("enter the first point\n");
  scanf("%f%f",x1,y1);
  printf("enter the second point\n");
  scanf("%f%f",x2,y2);
  
}
void find_distance(float x1,float y1,float x2,float y2,float *area)
{
  float a,b,result,sqrt;
  a = x2-x1;
  b = y2-y1;
  result= (a*a)+(b*b);
  float z=result/2;
  sqrt=0.5*(z+(result/z));
  while(fabs(z-sqrt)>0.00001)
    {
      z=sqrt;
      sqrt =0.5*(z+(result/z));
    }
  *area=sqrt;  
}
void output(float x1,float y1,float x2,float y2,float area)
{
  printf("The distance between the point (%f,%f) and (%f,%f) is %f",x1,y1,x2,y2,area);
}
int main()
{
  float x1,y1,x2,y2,area;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,y1,x2,y2,&area);
  output(x1,y1,x2,y2,area);
  return 0;
}