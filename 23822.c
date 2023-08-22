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
