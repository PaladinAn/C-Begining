#include <stdio.h>
#include <stdlib.h>


int func(int n ){
				if(n<10)return n;
				else return((func(n/10)+n%10)%10);

				printf("return(%d) \n",n); 
}

int main(void) 
{
	int n=1357;
	
 	
 	printf("%d \n",func(n)); 
 	system("pause"); 
	/*¥s¥X¨Ó¬Ý*/
	return 0;
 		
}
