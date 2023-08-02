#include <stdio.h>
#include <ctype.h>
#include <stdio_ext.h>

int main(){
	char p2;
 
	printf("O animal é uma ave [s][n]?"); 
	scanf("%c", &p2);
	if(p2=='s')
	
	printf("O animal é não-voador [s][n]?");
	__fpurge(stdin);
	scanf("%c", &p2);
	if(p2=='s'){
		printf("É tropical?");
		__fpurge(stdin);
		scanf("%c", &p2);
		if(p2=='s'){
			printf("O animal é um avestruz");
			}else{
				printf("o animal é o pinguim");
				}
		}
	

		
	printf("O animal é um pato");
	
 return 0;
}
