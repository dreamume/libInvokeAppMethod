#include <stdio.h>

extern int sampleLibMethod(int a, int b);

int appMethod(int a)
{
  return a * a;
}

int main(int argc, char *argv[])
{
  int total = sampleLibMethod(2 ,3);
  printf("the total is %d\n", total);

  return 0;
}
