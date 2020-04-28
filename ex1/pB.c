#include<stdio.h>
#include<stdlib.h>

int func1(int ,int);

int main(){
  int out;
  int x,y;
  scanf("%d %d",&x,&y);
  if(x < 1 || y > 1000000000) exit(2);
  out = func1(x,y);
  printf("%d\n",out);
  return 0;
}

int func1(int x,int y){
  int a;
  int b;
  if (x > y) {
    a = y;
    y = x;
    x = a;
  }
  while ((b = y % x) != 0) {
    y = x;
    x = b;
  }
  return x;
}
