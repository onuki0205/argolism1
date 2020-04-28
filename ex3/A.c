#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  int x,i =0;
  char s[100];
  char c;
  //while( scanf("%c", &c) != '\n'){
  for(i = 0; i < 10; i++){
    scanf("%c",&c);
    if(c == '\n')break;
    s[i] = c;
  }

  // while( scanf("%s", s) != EOF){
  //   if ( s[0] == '+' ){
  //
  //   } else if ( s[0] == '-' ){
  //
  //   } else if ( s[0] == '*' ){
  //
  //   } else {
  //     x = atoi(s);
  //
  //   }
  //   i++;
  // }
  printf("%s",s);

  return 0;
}
