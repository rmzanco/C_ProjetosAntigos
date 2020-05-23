#include <stdio.h>
#include <string.h>
	typedef	struct funcionario{ //estrutura para preenchimento dos usuarios
					char nome[101];
					float sal;
					float comis;
					float soma;}Func;

int main(){ //f principal
	char lixo; //para ignorar o enter, que entra como um caractere
	int i,k=0; 
	Func f1[101]; //f1, que é a struct
	Func aux; //aux, para copiar a struct da f1
	
		for(i=0;i<100;i++){ //for para o incremento dos funcionários e seus respectivos salários.
		//	printf("nome:\n");
			fgets(f1[i].nome,102,stdin);
			if(strcmp(f1[i].nome,"FIM\n")==0){break;} //Se o usuario digitar FIM, o programa ira sair do laço da repetição.
		 
 		// 	printf("Digite o seu salario:\n");
 		 	scanf("%f",&f1[i].sal);
 		 	scanf("%c",&lixo);
 		// 	printf("Digite a comissao:\n");
 		 	scanf("%f",&f1[i].comis);
 		 	scanf("%c",&lixo);
 		 	f1[i].soma = f1[i].sal + f1[i].comis;} //soma salario + comissao
	
printf("Folha de Pagamento\n");
		
int j;
		for(k=0;k<i;k++){
			for(j=k+1;j<i;j++){ //nesse for, pega o valor superior a k, para fazer uma comparação
				if(f1[k].soma>f1[j].soma){ //algoritmo bubble sort
					aux=f1[k];
					f1[k]=f1[j];
					f1[j]=aux;}
				if((f1[k].soma==f1[j].soma)&&(strcmp(f1[k].nome,f1[j].nome)>0)){ //se o valor for igual, ordenar a ordem alfabética
					strcpy(aux.nome,f1[j].nome); //algoritmo bubble sort, porem feito com strings.
					strcpy(f1[j].nome,f1[k].nome);
					strcpy(f1[k].nome,aux.nome);}
					}
				if(f1[k].soma!=f1[k-1].soma){printf("Salario no mes: R$ %.2f\n- %s",f1[k].soma,f1[k].nome);} //se o salario for diferente, declará-lo. junto com o grupo de nomes.
				else printf("- %s",f1[k].nome);}	//se for iguais, só printa o nome	
		
	return 0;}
