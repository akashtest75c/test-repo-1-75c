#include<stdio.h>
#include<conio.h>

int main()
{
  int a;
  int b;
  a = 123;
  b = 456;
  int c = a+b;
  printf("%d\n",&c);
  return 0;
}

void swap(int a, int b){
   int c;
   c = a;
   a = b;
   b = c;
}

