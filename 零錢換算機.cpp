#include <stdio.h>
main()
{
int change;

scanf("%d", &change);

int fifty = change/50;
change -= fifty*50;

int ten = change/10;
change -= ten*10;

int five = change/5;
change -= five*5;

int one = change;


printf("50���� %d ��\n", fifty);
printf("10���� %d ��\n", ten);
printf("5���� %d ��\n", five);
printf("1���� %d ��\n ", one);
}
