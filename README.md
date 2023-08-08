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
