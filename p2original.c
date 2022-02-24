#include<stdio.h>
void input_triangle(float *x1,float*y1,float*x2,float*y2,float*x3,float*y3)
{
  printf("enter the cooordinates of the first point\n");
  scanf("%f,%f",x1,y1);
  printf("enter the coordinates of the second point \n");
  scanf("%f,%f",x2,y2);
  printf("enter the coordinates of the third point\n");
  scanf("%f%f",x3,y3);
}
int is_triangle(float x1,float y1,float x2,float y2,float x3 ,float y3)
{
  float a;
  a=(x1*(y2-y3)-y1*(x2-x3)+1*(x2*y3-x3*y2));
  return a;
}
void output(float x1,float y1, float x2,float y2,float x3,float y3,int istriangle)
{
  if(istriangle>0)
  {
    printf("The three point do form a triangle: ");
  }
  else
  {
    printf("The three points do not form a triangle !! ");
  }
}

int main()
{
  float a,b,c,d,e,f,g;
  input_triangle(&a,&b,&c,&d,&e,&f);
  g=is_triangle(a,b,c,d,e,f);
  output(a,b,c,d,e,f,g);
  return 0;
}