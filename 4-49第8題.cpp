#include <stdio.h>
#include <stdlib.h>


int main(void) 
{
	int ary[3][4];
	int i,j;
	
	for (i=0;i<3;i++) {
		
 		for(j=0;j<4;j++){
 			printf("ary[%d][%d]=(%d+1)*(%d+1), ",i,j,i,j );/*�i�L�X�L�{*/ 
 			ary[i][j]=(i+1)*(j+1);

 			printf("i=%d  ",i );/*�i�L�X�L�{*/ 
 			printf("j=%d \n",j );/*�i�L�X�L�{*/ 
 		}
			printf("i=%d  ",i );/*�i�L�X�L�{*/ 
 			printf("j=%d \n",j );/*�i�L�X�L�{*/ 
			
		 }  
 		
 	
 	printf("%d \n",ary[2][3]+ary[1][2] ); 
 	system("pause"); 
	/*�s�X�Ӭ�*/
	return 0;
 		
}
