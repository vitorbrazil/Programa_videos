#include <stdio.h>
#include <stdlib.h>

 void parte1 (){
 	printf("\t\t__________________________________________________\n");
	printf("\n");
	printf("\t\t   -> [DEIXA] -> rotina -> recompensa \n");
	printf("\n");
	printf("\t\t   Tanto iniciar como parar um habito\n");
	printf("\t\t   A [DEIXA] e a porta de entrada para isso\n");
	printf("\n");
	printf("\t\t   EX: Vontade, Tempo, Pessoas, sentimento, etc...\n");
	printf("\t\t__________________________________________________\n");
	printf("\n");
	printf("\t\t   Voce quer iniciar um habito?\n");
	printf("\n");
	printf("\t\t   Iniciar Digite - 1\n");
	printf("\t\t   ");
}
void parte2 (char c[100]){
	printf("\t\t__________________________________________________\n");
	printf("\n");
	printf("\t\t   -> deixa -> [ROTINA] -> recompensa \n");
	printf("\n");
	printf("\t\t   [ROTINA] e a atividedade que vc sempre\n");
	printf("\t\t    faz ou fara, apos se deparar com a deixa (%s)\n",c);
	printf("\n");
	printf("\t\t   EX: musculacao , regime , estudar, etc...\n");
	printf("\t\t__________________________________________________\n");
	printf("\n");
}
void parte3 (char b[100]){
	char d;
	printf("\t\t__________________________________________________\n");
	printf("\n");
	printf("\t\t   -> deixa -> rotina -> [RECOMPENSA] \n");
	printf("\n");
	printf("\t\t   [RECOMPENSA] e o premio que voce se da \n");
	printf("\t\t   ou tambem uma sensacao que voce ira sentir, \n");
	printf("\t\t   resumindo algo que voce considere bom  \n");
	printf("\n");
	printf("\t\t__________________________________________________\n");
	printf("\n");
	printf("\t\t   Qual vai ser a sua recompensa por fazer %s\n",b);
	scanf("%s",&d);
	
	system("pause");
	system("cls");
	printf("\t\t   fim %s\n",b);
	
}

void Mensagem ( int x, char *PROCRASTINAR [ ] ) {
     printf ( "%s\n", PROCRASTINAR [ x ] );
}
int main(void){
	char atividade[100];
	int A=0;
 	char b[100], c[100],d[100];
	system(" title COMO PARAR DE PROCRASTINAR ");
	static char *PROCRASTINAR [ ] = {
	      "\t|\t\t         O PODER DO HABITO     \t\t \t     |",
	      "\t|\t\t                          \t\t \t     |",
          "\t|\t     Habito sao divididos em 3 partes distintas \t     |",
          "\t|\t     -> [DEIXA] -> [ROTINA] -> [RECOMPENSA]\t\t     |",
     	"\t|\t\t    como usar isso ao seu favor \t\t     |"};
	printf("\t_____________________________________________________________________\n");
	Mensagem(0,PROCRASTINAR);
	Mensagem(1,PROCRASTINAR);
	Mensagem(2,PROCRASTINAR);
	Mensagem(3,PROCRASTINAR);
	Mensagem(4,PROCRASTINAR);
	printf("\t_____________________________________________________________________\n");
	printf("\n");
	parte1 ();
	scanf("%d",&A);
	if(A==1){
			printf("\n");
			printf("\t\t   Digite o nome do Habito que desejar iniciar\n");
			printf("\t\t   ");
			scanf("%s",&b);
			printf("\n");
			printf("\t\t   Digite o que voce considera uma deixa par iniciar %s\n",b);
			printf("\t\t   ");
			scanf("%s",&c);
			
	}
	printf("\n");
	printf("\t\t");
	system("pause");
	system("cls");
	parte2 (c);
	printf("\t\t   Qual vai ser a rotina do habito %s\n",b);
	printf("\t\t   ");
	scanf("%s",&d);
	printf("\t\t");
	system("pause");
	system("cls");
	parte3 (b);
  	
  	
  return(0);
}
