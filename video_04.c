#include <stdio.h>

 void parte1 (){
	printf("\n");
	printf("\t\t\t\t [ Primeiro passo ]\n");
	printf("\n");
	printf("   Liste pelo menos 10 atividades diarias que voce costumas fazer no dia a dia:\n");
}
void parte2 (){
	int A=0;
	char a1[100];
	printf("   Coloque em ordem de prioridade para que aumentara a sua produtividade do dia\n");
	printf("\n");
	for(A=0;A<=9;A++){
		printf("\t Digite a atividade numero %d >:",A+1);
  		scanf("%[^\n]s",&a1[A]);
  		setbuf(stdin, NULL);
  	}
}
void Mensagem ( int x, char *PROCRASTINAR [ ] ) {
     printf ( "%s\n", PROCRASTINAR [ x ] );
}
int main(void){
	char atividade[100], A;
	system(" title COMO PARAR DE PROCRASTINAR ");
	static char *PROCRASTINAR [ ] = {
	      "\t|\t\t      COMO PARAR DE PROCRASTINAR \t\t     |",
                    "\t|\t\t\t         E    \t\t\t\t     |",
     			"\t|\t\t      AUMENTAR A PRODUTIVIDADE \t\t\t     |"};
	printf("\t_____________________________________________________________________\n");
	Mensagem(0,PROCRASTINAR);
	Mensagem(1,PROCRASTINAR);
	Mensagem(2,PROCRASTINAR);
	printf("\t_____________________________________________________________________\n");
	printf("\n"); 
	parte1();
	parte2();
	while(A!='Y'||A!='y'){
  	printf("\t Voce Coloco em ordem de prioridade?(y-sim n-nao)\n");
	  
		scanf("%s",&A);
		
		if (A=='Y'||A=='y'){
			printf("\n");
			printf("\t_____________________________________________________________________\n");
			printf("\t Isso !! assim suas atividades do dia a dia serao mais protutivas \n");
			printf("\t Faca isso com todas as atividades diarias, priorisando-as\n");
			printf("\n");
			printf("\t_____________________________________________________________________\n");
			return 0;
		}else if (A=='n'||A=='N'){
			printf("\t_____________________________________________________________________\n");
			printf("\t Repita o processo e Coloque em ordem de prioridade!! \n");
			printf("\t assim suas atividades do dia a dia serao mais protutivos \n");
			printf("\t A tendencia e deixar atividades menos importantes pro final\n");
			printf("\t_____________________________________________________________________\n");
				parte1();
				parte2();
		}
	}
	
	
  	
  	
  return(0);
}
