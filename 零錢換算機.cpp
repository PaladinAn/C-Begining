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


printf("50元有 %d 個\n", fifty);
printf("10元有 %d 個\n", ten);
printf("5元有 %d 個\n", five);
printf("1元有 %d 個\n ", one);
}
