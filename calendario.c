#include <stdio.h>
int main (){
	int y; //ano
	int g; //numero aureo
	int c; //seculo
	int x; //fator de correção 1
	int z; //fator de correção 2
	int e; //epacta
	int n; //lua cheia
	int d; //domingo de pascoa
	int bissexto=0; //variavel que incrementa um dia bissexto
	int dia_semana=0; //variavel usada para definir o dia da semana
	int mes;  //variavel usada para identificar o mes
	int dia;  //usada no for para printar os dias
	int i;    //contador para calcular quantos "--" usar antes do 1
	int i2;   //contador para calcular quantos "--" usar depois do 31
	int x1=0; //variavel usada para quebrar as linhas do calendário.
	int dias_mes; //variavel usada para atribuir um numero de dias que tem no mes ao for 
	
	scanf("%d",&y);
	
	if(y%4==0){ bissexto=1;
	} else bissexto=0;
	
	g=(y % 19)+1;
	c=(y/100)+1;
	x=(3*c/4)-12;
	z=((8*c+5)/25)-5;
	e=((11*g+20+z-x)%30);
	if (e==25 && g>11 || e==24){e++;}
	n=44-e;
	if(n<21){n=n+30;}
	d=((5*y/4)-(x+10));
	n=(n+7)-((d+n)%7);
	
	//calcular que dia da semana é 1o de janeiro
	
	if(n>31){
	n=n-31;
	dia_semana=8-((31+28+31+bissexto+n)%7);
	if(dia_semana>6){
		dia_semana=dia_semana-7;
	} 
	}
	else dia_semana=8-((31+28+bissexto+n)%7);
	if(dia_semana>6){
		dia_semana=dia_semana-7;
	}
	
	//inicio do calendário
	
	//titulo e início do for prinicpal
	printf("Calendario do ano %d \n",y);
	printf("|-----------------------------|\n");
	for(mes=1;mes<=12;mes++){
	switch(mes){
		case 1:
			printf("|Janeiro                      |\n");
			printf("|-----------------------------|\n");
			break;
		case 2:
			printf("|Fevereiro                    |\n");
			printf("|-----------------------------|\n");
			break;
		case 3:
			printf("|Março                        |\n");
			printf("|-----------------------------|\n");
			break;
		case 4:
			printf("|Abril                        |\n");
			printf("|-----------------------------|\n");
			break;
		case 5:
			printf("|Maio                         |\n");
			printf("|-----------------------------|\n");
			break;
		case 6:
			printf("|Junho                        |\n");
			printf("|-----------------------------|\n");
			break;
		case 7:
			printf("|Julho                        |\n");
			printf("|-----------------------------|\n");
			break;
		case 8:
			printf("|Agosto                       |\n");
			printf("|-----------------------------|\n");
			break;
		case 9:
			printf("|Setembro                     |\n");
			printf("|-----------------------------|\n");
			break;
		case 10:
			printf("|Outubro                      |\n");
			printf("|-----------------------------|\n");
			break;
		case 11:
			printf("|Novembro                     |\n");
			printf("|-----------------------------|\n");
			break;
		case 12:
			printf("|Dezembro                     |\n");
			printf("|-----------------------------|\n");
			break;
		}
		
		//algoritmo para diferenciar os dias 31, 30, 29 ou 28.
		
		if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){ dias_mes=31;
		}else if(mes==2){ dias_mes=28+bissexto;
		}else if(mes==4||mes==6||mes==9||mes==11){ dias_mes=30; }
		
	//calendário, contagem dos dias e dos "--"
	printf("| dom seg ter qua qui sex sab |\n|");
	
	//printf dos -- antes do 1
	for(i=0;i<dia_semana;i++){
	printf("  --");
	x1++;
	}
	
	//printf dos dias
	for(dia=1;dia<=dias_mes;dia++){
	x1++;
		printf("  %02d",dia);
			if(x1%7==0){ printf(" |\n|");}
	}		
	//printf dos -- apos o 31
		for(i2=x1;i2<42;i2++){
	printf("  --");
			x1++;
			if(x1%7==0){ printf(" |\n|");}
		}
	

	x1=0;
	dia_semana=(dias_mes+dia_semana)%7; //algoritmo para calcular o dia da semana do prox mes
	printf("-----------------------------|\n");
	}
	
	return 0;
}
