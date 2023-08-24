#include <stdio.h>


int main(void)
{
  int x,y;
  char code;
  scanf("%c",&code);
  if(code == 'X'){
    x++;
  }
  else if(code == 'Y'){
    y++;
  }
  else{
    x=y=0;
  }
  
  return 0;
 }

switch 문 특징 
변수 사용 X
수식 사용 X
실수 사용 X
문자열 사용 X
문자 사용 O
