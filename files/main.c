#include "header.c" // Cabeçalho com todas os includes e defines
#include "libraries/custom_bibl.h" // Biblioteca customizada por euzinho (Leo) que contém umas funções de cores e coisas E S T É T I C A S
#include "prototypes.c" // Protótipos pra não ficar dando warning que a função é implicita

int main()
{
    int tempo, deltaTempo=0;
    int nave[3]= {navePOSX,navePOSY,naveDeltaVx};
    int tiro[3]= {tiroPOSX,tiroPOSY,tiroStatus};

    tela_inicial();
    tempo=time(NULL);
    while(deltaTempo<40)
    {
        if(kbhit())
            leitura_teclado(nave,tiro);
        else
            movimenta(nave,0);
        atirar(nave,tiro);
        posiciona_nave(nave,0);
        deltaTempo=time(NULL)-tempo;
        ajusta_energia(deltaTempo);
        system("cls");
        imprime_tela(deltaTempo);
        if(deltaTempo == 35 || deltaTempo == 37 || deltaTempo == 39)
            PlaySoundA(TEXT("sounds/alarm.wav"), NULL, SND_ASYNC);
    }
    tela_game_over();
    return 0;
}
