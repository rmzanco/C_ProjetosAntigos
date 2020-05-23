/*Primeiro, digitar o numero de casos, 
depois fazer um switch com cada base
(de A até F), ao final, comparar */

#include <stdio.h>
int main(){
int nCasos,nBases,nBases2;
int a1,b1,c1,d1,e1,f1;
int a2,b2,c2,d2,e2,f2;
char base1,base2;
	
scanf("%d",&nCasos);

while(nCasos != 0){
	a1=0;b1=0;c1=0;d1=0;e1=0;f1=0;
	a2=0;b2=0;c2=0;d2=0;e2=0;f2=0;
	for(nBases=0;nBases<=12;nBases++){
		base1 = getchar();
		
		switch(base1){
			case'A':
			a1++;
			break;
			case'B':
			b1++;
			break;
			case'C':
			c1++;
			break;
			case'D':
			d1++;
			break;
			case'E':
			e1++;
			break;
			case'F':
			f1++;
			break;
		}
	}
	for(nBases2=0;nBases2<=12;nBases2++){
		base2 = getchar();
		switch(base2){ 
			case'A':
			a2++;
			break;
			case'B':
			b2++;
			break;
			case'C':
			c2++;
			break;
			case'D':
			d2++;
			break;
			case'E':
			e2++;
			break;
			case'F':
			f2++;
			break;
		} 
	} 

	if (a1==a2 && b1==b2 && c1==c2 && d1==d2 && e1==e2 && f1==f2){ 
	    printf("Caracteristicas Iguais \n");
	}
	else{
	    printf("Caracteristicas Diferentes \n");
	}
	    
	nCasos--;
		
}

return 0;
}

/*Rodrigo Malosti Zanco RA:205541*/
