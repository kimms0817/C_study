[네이버](https://www.naver.com/)
```c
#include <stdio.h>

int main()
{
   int a = 10;
   int b = 20;
   int c = a + b;
  printf("%d + %d = %d\n",a,b,c);
  printf("%d - %d = %d\n",a,b,c);
  printf("%d * %d = %d\n",a,b,c);
  printf("%d / %d = %d",a,b,c);

  return 0;
}
```
%d -> 정수
%f -> 실수 (float)
%lf -> 실수 (double)
%c -> 문자 (char)
%s -> 문자열 (char []배열)
```c
#include <stdio.h>

int main()
{
   int a;
   int b;
   int c = 0;
   scanf("%d %d" ,&a, &b);
  printf("%d + %d = %d\n",a,b,c);
  c = a - b;
  printf("%d - %d = %d\n",a,b,c);
  c = a * b;
  printf("%d * %d = %d\n",a,b,c);
  c = a / b;
  printf("%d / %d = %d",a,b,c);

  return 0;
}
```
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
