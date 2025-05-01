#include <stdio.h>
int main(){

    int opcao, peca, quantidade = 5, i = 8, j = 2;

    printf("Bem-vindo ao jogo de xadrez!\n");
    printf("\n");
    printf("***JOGO DE XADREZ***\n");
    printf("\n");
    printf("Escolha uma opção:\n");
    printf("1. iniciar o jogo\n");
    printf("2. Regras do Jogo\n");
    printf("3. Sair do Jogo\n");
    scanf("%d", &opcao);
    printf("\n");

    switch(opcao)  // Switch case para escolher a opção do menu)
    {
    case 1:
        printf ("iniciando o jogo...\n");
        break;
    case 2:
        printf ("Regras do jogo...\n");
        printf ("O jogo de xadrez é jogado entre dois jogadores em um tabuleiro de 64 casas.\n");
        printf ("Cada jogador começa com 16 peças: 1 rei, 1 rainha, 2 torres, 2 bispos, 2 cavalos e 8 peões.\n");
        printf ("O objetivo do jogo é dar xeque-mate ao rei do oponente, ou seja, colocar o rei em uma posição onde ele não possa escapar de ser capturado.\n");
        printf ("As peças se movem de maneiras diferentes:\n");
        printf ("- Rei: uma casa em qualquer direção.\n");
        printf ("- Rainha: qualquer número de casas em qualquer direção.\n");   
        printf ("- Torre: qualquer número de casas na horizontal ou vertical.\n");
        printf ("- Bispo: qualquer número de casas na diagonal.\n");
        printf ("- Cavalo: duas casas em uma direção e uma casa em ângulo reto.\n");
        printf ("- Peão: uma casa para frente, mas captura na diagonal.\n");
        printf ("O jogo termina quando um dos jogadores dá xeque-mate no rei do oponente ou quando ocorre um empate.\n");   
        printf ("Divirta-se jogando xadrez!\n");
        printf ("\n");

        printf("Escolha uma opção:\n");
        printf("1. iniciar o jogo\n");
        printf("2. Regras do Jogo\n");
        printf("3. Sair do Jogo\n");
        scanf("%d", &opcao);
        printf("\n");

        switch(opcao)  // Switch case para escolher a opção do menu)
        {
        case 1:
        printf ("iniciando o jogo...\n");
        printf("Escolha uma peça:\n");
        printf("1 - Peão\n");
        printf("2 - Torre\n");
        printf("3 - Bispo\n");
        printf("4 - Rainha\n");
        printf("5 - Rei\n");
        printf("6 - Cavalo\n");
        scanf("%d", &peca);
        printf("Sua peça escolhida foi: %d\n", peca);
        switch(peca)  // Switch case para escolher a peça
    {
        
case 1:   // MOVER PEÃO

printf("*** Movimento Peão ***\n"); 
printf("\n");
for (int i = 1; i <= 1; i++){
    printf("%d - frente\n", i);
}
    printf("\n");
    printf("Peão moveu 1 casa para a frente\n");
    printf("\n"); 
    break;

case 2:   // MOVER TORRE    
printf("*** Movimento Torre ***\n");
printf("\n");
    
void movertorre(int numero) {
    if (numero > 0) {

        movertorre(numero - 1); // Chamada recursiva com o número decrementado
        printf("%d - frente\n", numero);
             
    }
}
    movertorre(quantidade); // Chama a função recursiva com o número inicial
    printf("\n");
    printf("Torre moveu 5 casas para a frente\n");
    printf("\n");

    break;

case 3:   // MOVER BISPO

printf("*** Movimento Bispo ***\n");    
printf("\n");   

void moverbispo(int numero){ 
    if (numero > 0) {
    
        moverbispo(numero - 1); // Chamada recursiva com o número decrementado
        printf("%d - Direita \n", numero);             
    }
}
        moverbispo(quantidade); // Chama a função recursiva com o número inicial
        printf("\n");
        
        for (int i = 1; i <= 5; i++){
            printf("%d ", i);
            printf(" - Cima\n");    
        }
            printf("\n");
            printf("Bispo moveu 5 casas em diagonal para direita\n");
            printf("\n");
    break;

case 4:   // MOVER RAINHA

        printf("*** Movimento Rainha ***\n");           
        printf("\n");  
        
        void moverrainha(int numero) {
            if (numero > 0) {
        
                moverrainha(numero - 1); // Chamada recursiva com o número decrementado
                printf("%d - esuerda\n", numero);
                     
            }
        }
            moverrainha(i); // Chama a função recursiva com o número inicial
            printf("\n");
            printf("Rainha moveu 8 casas para a esquerda\n");
            printf("\n");

    break;

case 5:   // MOVER REI

        printf("*** Movimento Rei ***\n"); 
        printf("\n");
        
        
        for (int i = 1; i <= 1; i++){
        printf("%d - esquerda\n", i);
    }
        printf("\n");
        printf("Rei moveu 1 casa para a esquerda\n");
        printf("\n"); 

    break;

case 6:   // MOVER CAVALO

        printf("*** Movimento Cavalo ***\n"); 
        printf("\n");
        
        void movercavalo(int numero){ 
            if (numero > 0) {
            
                movercavalo(numero - 1); // Chamada recursiva com o número decrementado
                printf("%d - Cima \n", numero);             
            }
        }
                movercavalo(j); // Chama a função recursiva com o número inicial
                printf("\n");
                
                for (int i = 1; i <= 1; i++){
                    printf("%d ", i);
                    printf(" - Direita\n");    
                }
                    printf("\n");
                    printf("Cavalo moveu 2 casas para cima e 1 para a direita\n");
                    printf("\n");
    break;
    default:
        printf ("opção inválida\n");
        
        break;
        return 0;
        }
        return 0;
        case 3:
        printf ("Saindo do jogo...\n");
        printf ("Obrigado por jogar!\n");
        return 0;
        break;
        default:
        printf ("opção inválida\n");
        return 0;
        break;  
       
        }
        case 3:
        printf ("Saindo do jogo...\n");
        printf ("Obrigado por jogar!\n");
        return 0;
        break;
        default:
        printf ("opção inválida\n");
        return 0;
        break;  
    }

    printf("Escolha uma peça:\n");
    printf("1 - Peão\n");
    printf("2 - Torre\n");
    printf("3 - Bispo\n");
    printf("4 - Rainha\n");
    printf("5 - Rei\n");
    printf("6 - Cavalo\n");
    scanf("%d", &peca);
    printf("Sua peça escolhida foi: %d\n", peca);

    printf("\n");

    switch(peca)  // Switch case para escolher a peça
    {
        
case 1:   // MOVER PEÃO

printf("*** Movimento Peão ***\n"); 
printf("\n");
for (int i = 1; i <= 1; i++){
    printf("%d - frente\n", i);
}
    printf("\n");
    printf("Peão moveu 1 casa para a frente\n");
    printf("\n"); 
    break;

case 2:   // MOVER TORRE    
printf("*** Movimento Torre ***\n");
printf("\n");
    
void movertorre(int numero) {
    if (numero > 0) {

        movertorre(numero - 1); // Chamada recursiva com o número decrementado
        printf("%d - frente\n", numero);
             
    }
}
    movertorre(quantidade); // Chama a função recursiva com o número inicial
    printf("\n");
    printf("Torre moveu 5 casas para a frente\n");
    printf("\n");

    break;

case 3:   // MOVER BISPO

printf("*** Movimento Bispo ***\n");    
printf("\n");   

void moverbispo(int numero){ 
    if (numero > 0) {
    
        moverbispo(numero - 1); // Chamada recursiva com o número decrementado
        printf("%d - Direita \n", numero);             
    }
}
        moverbispo(quantidade); // Chama a função recursiva com o número inicial
        printf("\n");
        
        for (int i = 1; i <= 5; i++){
            printf("%d ", i);
            printf(" - Cima\n");    
        }
            printf("\n");
            printf("Bispo moveu 5 casas em diagonal para direita\n");
            printf("\n");
    break;

case 4:   // MOVER RAINHA

        printf("*** Movimento Rainha ***\n");           
        printf("\n");  
        
        void moverrainha(int numero) {
            if (numero > 0) {
        
                moverrainha(numero - 1); // Chamada recursiva com o número decrementado
                printf("%d - esuerda\n", numero);
                     
            }
        }
            moverrainha(i); // Chama a função recursiva com o número inicial
            printf("\n");
            printf("Rainha moveu 8 casas para a esquerda\n");
            printf("\n");

    break;

case 5:   // MOVER REI

        printf("*** Movimento Rei ***\n"); 
        printf("\n");
        
        
        for (int i = 1; i <= 1; i++){
        printf("%d - esquerda\n", i);
    }
        printf("\n");
        printf("Rei moveu 1 casa para a esquerda\n");
        printf("\n"); 

    break;

case 6:   // MOVER CAVALO

        printf("*** Movimento Cavalo ***\n"); 
        printf("\n");
        
        void movercavalo(int numero){ 
            if (numero > 0) {
            
                movercavalo(numero - 1); // Chamada recursiva com o número decrementado
                printf("%d - Cima \n", numero);             
            }
        }
                movercavalo(j); // Chama a função recursiva com o número inicial
                printf("\n");
                
                for (int i = 1; i <= 1; i++){
                    printf("%d ", i);
                    printf(" - Direita\n");    
                }
                    printf("\n");
                    printf("Cavalo moveu 2 casas para cima e 1 para a direita\n");
                    printf("\n");
    break;
    default:
        printf ("opção inválida\n");
        
        break;
        return 0;
    } 
}
