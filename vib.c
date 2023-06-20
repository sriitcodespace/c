#include <stdio.h> 

int main()
{
char ch;
printf("Enter a letter from VIBGYOR :");
scanf("%c",&ch);
switch(ch)
{
case 'V':
printf("Violet");
break;
case 'I':
printf("Indigo");
break;
case 'B':
printf("Blue");
break;
case 'G':
printf("Green");
break;
case 'Y':
printf("Yellow");
break;
case 'O':
printf("Orange");
break;
case 'R':
printf("Red");
break;
default:
printf("Not a color letter from VIBGYOR");
}
return 0;

}
