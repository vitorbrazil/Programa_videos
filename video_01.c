#include <stdio.h>

 void parte1 (){
	printf("\n");
	printf("\t\t\t\t [ Primeiro passo ]\n");
	printf("\n");
	printf("\tEscolha um topico que deseja entender e comece a estuda-lo.\n");
	printf("  Anote abaixo tudo o que voce sabe sobre o topico (Finalize apertando ENTER).\n");
}
void parte2 (){
	char A;
	printf("\n");
	printf("\t\t\t\t [ Segunda passo ]\n");
	printf("\n");
	printf("\tFinja ensinar seu topico a uma sala de aula.\n");
	printf("\tCertifique-se de que voce e capaz de explicar o topico em termos simples\n");
	printf("\n");
	printf("\tPressione ENTER apos terminar ...\n");
  	getch();
  	printf("\t Voce foi o mais coerente possivel ?(y-sim n-nao)\n");
}
void parte3 (){
	printf("\n");
	printf("\t\t\t\t [ Terceiro passo ]\n");
	printf("\n");
	printf("\tVolte para os livros quando voce ficar com duvidas.\n");
	printf("\tSo pare quando as lacunas em seu conhecimento parecerem obvias.\n");
	printf("\tRevise areas problematicas ate que voce possa explicar o assunto\n");
	printf("\t completamente.\n");
	printf("\n");
	printf("\t\t\t\t [ Quarto passo ]\n");
	printf("\n");
	printf("\tSimplifique e use analogias. Repita o processo simplificando \n");
	printf("\ta sua linguagem e conectando fatos com analogias para ajudar \n");
	printf("\ta fortalecer sua compreensão.\n");
	printf("\n");
	printf("\t Digite SAIR e aperte enter para finalizar\n");	
}
void Mensagem ( int x, char *FEYNMAN [ ] ) {
     printf ( "%s\n", FEYNMAN [ x ] );
}
int main(void){
	int NUM;
	char texto_str[1000],A='A';
	FILE *pont_arq; 
	char palavra[1000];
	system(" title A TÉCNICA FEYNMAN ");
	static char *FEYNMAN  [ ] = {
	                                    	"\t|\t\t\t TECNICA FEYNMAN\t\t\t    |",
                    "\t|  Com a tecnica de Feynman voce aprende tudo que voce quiser,\t    |",
     			"\t| de modo que voce possa identificar rapidamente os buracos em seu  |",
    					 "\t| conhecimento.\t\t\t\t\t\t\t    |",
    					 "\t|  Apos quatro passos, voce podera entender conceitos mais\t    |",  
     				"\t| profundamente e reter melhor as informacoes para si mesmo.\t    |",
			 "Obrigado por usar este programa !!!"};
	printf("\t_____________________________________________________________________\n");
	Mensagem(0,FEYNMAN);
	printf("\t|\t\t\t\t\t\t\t\t    |\n");
	Mensagem(1,FEYNMAN);
	Mensagem(2,FEYNMAN);
	Mensagem(3,FEYNMAN);
	Mensagem(4,FEYNMAN);
	Mensagem(5,FEYNMAN);
	printf("\t_____________________________________________________________________\n");
	printf("\n"); 
	parte1();
  
  	pont_arq = fopen("arquivo_palavra.txt", "w");
 

	if(pont_arq == NULL){
   		printf("Erro na abertura do arquivo!");
    	return 1;
	}
	printf("\n");
 	printf("\t Digite sua anotacao : ");
	scanf("%[^\n]s", palavra);

	fprintf(pont_arq, "%s", palavra);
	
	fclose(pont_arq);
	printf("\n");
 	printf("\t Dados gravados com sucesso!\n\t anotacao salva em arquivo.txt na pasta do programa\n");
 	printf("\n");
 	printf("\t ");
 	system("pause");
 	printf("\n");
 	printf("\t Dezeja ler oque digitou anteriormente? (y-sim n-nao)");
 	scanf("%s",&NUM);
 	
 	if(NUM=='y'||NUM=='Y'){
 	 	pont_arq = fopen("arquivo_palavra.txt", "r");
 	 	while(fgets(texto_str, 1000, pont_arq) != NULL)
 	 	printf("\n");
    	printf("\t %s\n", texto_str);
    	printf("\n");
    	printf("\t ");
 		printf("\tPressione qualquer tecla para continuar. . .");
  		printf("\n");
		fclose(pont_arq);
  		getch();
  		parte2();
 	 }else{
 	 	parte2();	
 	 }
 	 
 	while(A!='Y'||A!='y'){
		scanf("%s",&A);
		
		if (A=='Y'||A=='y'){
			parte3 ();
		}else if (A=='n'||A=='N'){
			printf("\t Repita o processo e tente ser o mais coerente possivel \n");
			parte2 ();
		}else{
			return 0;
		}
	}
 	
  return(0);
}
