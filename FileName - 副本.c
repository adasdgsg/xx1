//项目1计算机
//思路
//1输入
//2引用
//3输出
#include <stdio.h>
double jia(double jj, double ff)
{
    double  fz= jj + ff;
    return fz;
}
double jian(double jj, double ff)
{
    double  fz = jj - ff;
    return fz;
}
double chebg(double jj, double ff)
{
    int  fz = jj * ff;
    return fz;
}
double chu(double jj, double ff)
{
    double  fz = jj / ff;
    return fz;
}
double main()
{
   
    double a;
    double b;
    double c;
    int F;
    printf("请输入 数字1234数字");
    scanf_s("%lf %d %lf" ,&a,&F,&b);
  switch(F)
  {
  case(1):
      c = jia(a, b);
      printf("%lf\n", c);
      break;
      case(2):
      c = jian(a, b);
      printf("%lf\n", c);
      break;
      case(3):
      c = chebg(a, b);
      printf("%lf\n", c);
      break;
      case(4):
      c = chu(a, b);
      printf("%lf\n", c);

  }

    return 0;

    
}