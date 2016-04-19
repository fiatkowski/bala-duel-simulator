#include <stdio.h>
#include <time.h>
 
int main()
{
	{
	system("COLOR f0");
	printf("o-----------------------------------------------------------------------------o\n");
	printf("|       Balas Duel Simulator By:Pabllo F & Clene (c) all rights reserved      |\n");
	printf("|         \\\\\\\ - fb.com/1twotres4cinq & fb.com/umdois3456 - ///                |\n");
	printf("o-----------------------------------------------------------------------------o\n");
    printf("\n\n");
   	printf("                         aperte enter para iniciar\n");
	printf("\n");
	getchar();
	
    system("CLS");
	}
	system("COLOR F");
	while(1)
				{ 
	srand(time(NULL)); 
    int balas_do_joao = 0,suas_balas = 0; 
    int maximo_balas = 30;
    balas_do_joao = (rand() % maximo_balas) + 1;						 
    printf("--JOAO SAYS: quantas balas vc tem ai otario?\n\n\n");
    printf("                       **CONSOLE SAYS: Nao pode ser mais que 30**\n");
    
	scanf("%d",&suas_balas);
	
	// funçao anti trapaça
	
    while(suas_balas > 30){
    	system("CLS");
	system("COLOR c ");		
    if(suas_balas > maximo_balas ){
   	printf("--JOAO SAYS: MENTIRA\n");
    printf("             ********CONSOLE SAYS: diz um valor menor que 30*********\n");
    scanf("%d",&suas_balas);
    
	  }
    		
}
    system("COLOR f");

//end here anti trapaça
    
  
	  
    int score_win ;
    int score_lose ;
   
	if (suas_balas < balas_do_joao) printf("haha joao tem mais balas que vc, game over\n" ,score_lose++ );
	
	else if (suas_balas > balas_do_joao){
	printf("JOAO SAYS: you win\n" , score_win++);
	printf("CONSOLE SAYS: joao tem %d balas, vc venceu\n",balas_do_joao);
		}
    else if (suas_balas == balas_do_joao){
    printf("CONSOLE SAYS: Vc e joao tem %d balas, empate \n",balas_do_joao); 
	   }
	   --score_lose;
	//begin here  the play again option
	   
    printf("deseja jogar novamente? 'y' / 'n' :\n ");
    char escolha = 0;   // alguem me explica porque essa porra ta rodando
    scanf("%s",&escolha);
    getchar();
    fflush(stdin);
    if(escolha == 'n' ) 
	   {
    printf("CONSOLE SAYS: Obrigado por jogar, ate a proxima\n");
    printf("score wins = %d\n",score_win);
    printf("score lose = %d\n", score_lose);
   	break;
	   }
    else if(escolha == 'y' ){
    continue;
	   }
	else { printf("opcao '%c' invalida... retornando ao começo\n", escolha); }
	
	//end here the play again option

	}	
	
	  
	getchar();
return 0;
}
