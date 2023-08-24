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
switch(number)
{
case x:
  printf("x와 일치합니다.\n");
  break;
  변수 사용 X
case(x+2):
  printf("수식과 일치합니다.\n");
  break;
수식 사용 X
case 0.001:
  printf("실수");
  break;
실수 사용 X
case "0.01":
  printf("문자열");
  break;
문자열 사용 X
case 'a'
  printf("문자\n");
  break;
문자 사용 O
