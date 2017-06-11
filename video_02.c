#include <stdio.h>
#include <stdlib.h>
void Mensagem ( int x, char *Pomodoro [ ] ) {
     printf ( "%s\n", Pomodoro [ x ] );
}
int main(){
	int horas,minutos,tempoSOMADO,pomodori=0,intervalo=0,sobro,A,tempo,intervaloMaior=0,B;
	char nomeT[500],pontos[1];
	system(" title Tecnica Pomodoro ");
	static char *Pomodoro  [ ] = {
	                                    	"\t|\t\t\tTecnica Pomodoro\t\t\t     |",
                    "\t| A Tecnica Pomodoro e um metodo de gerenciamento de tempo\t     |",
     			"\t| a tecnica consiste em dividir o trabalho em periodos de 25 minutos,|",
    					 "\t| chamados de pomodori, a cada 1 pomodori(25 minutos)\t\t     |",
     				"\t| voce faz uma pausa de 5 minutos,a cada 4 pomodoros depois          |",
    			 "\t| de 3 pausas, na quarta pausa vc descansa entre 15 e 30 minutos     |",
                 "\tDigite o tempo de duracao dessa tarefa!!!\n",
		     "\tSeja mais produtivo e aumente a produtividade com a Tecnica Pomodoro. ",
			 "Obrigado por usar este programa !!!"};
	printf("\t_____________________________________________________________________\n");
	Mensagem(0,Pomodoro);
	printf("\t|\t\t\t\t\t\t\t\t     |\n");
	Mensagem(1,Pomodoro);
	Mensagem(2,Pomodoro);
	Mensagem(3,Pomodoro);
	Mensagem(4,Pomodoro);
	Mensagem(5,Pomodoro);
	printf("\t_____________________________________________________________________");	 
	printf("\t\t\n");
	printf("\tDigite o nome da tarefa que voce ira fazer: ");
	scanf("%[^\n]s", &nomeT);
	setbuf(stdin, NULL);
	printf("\n");
	Mensagem(6,Pomodoro);
	printf("\t -Primeiro Digite as horas :");
	scanf("%d",&horas);
	printf("\n");
	printf("\t -Agora Digite os minutos :");
	scanf("%d",&minutos);
	
	tempo=horas*60;
	tempo+=minutos;

	while(tempo >= 25){
		for(A=1;A<=25;A++){
			
			tempo--;
			
		}
		pomodori+=1;
		//printf("%d\n",pomodori);
		for(A=0;A<=5;A++){
			
			tempo--;
			
		}
		intervalo+=1;
		//printf("%d\n",intervalo);
		for(B=0;B<720;B++){
			if(intervalo == 3*B){
				tempo=tempo-30;
				intervaloMaior+=1;
						
			}
		}
	}
	printf("\n");
	printf("\tQuantidade de Pomodoris = %d\n",pomodori);
	printf("\tquantidades de intervalos de 5 Minutos = %d\n",intervalo);
	printf("\tquantidades de intervalos de 15 a 30 Minutos = %d\n",intervaloMaior);
	printf("\n");
	printf("\t_____________________________________________________________________\n");
	printf("\n");
	Mensagem(7,Pomodoro);
	printf("\t_____________________________________________________________________\n");
	printf("\n");
	Mensagem(8,Pomodoro);
	printf("\n");
	system("pause");
	return 0;
}
