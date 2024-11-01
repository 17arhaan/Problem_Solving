#include <stdio.h>
void dispchar(int,char)
{
      printf("You have entered %d and %c \n");
}
int main()
{
      int no;char ch;
      printf("Enter a number and a character : \n");
      scanf("%d %c",&no,&ch);
      dispchar(no,ch);
      return 0;
}
