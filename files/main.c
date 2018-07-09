#include "header.c" // Cabeçalho com todas os includes e defines
#include "libraries/custom_bibl.h" // Biblioteca customizada por euzinho (Leo) que contém umas funções de cores e coisas E S T É T I C A S
#include "prototypes.c" // Protótipos pra não ficar dando warning que a função é implicita


int main()
{

    typedef struct st_inimigos
    {
        int posX;
        int posY;
        int status;
    } INIMIGOS;

    int tempo, deltaTempo=0;
    int nave[3]= {navePOSX,navePOSY,naveDeltaVx};
    int tiro[3]= {tiroPOSX,tiroPOSY,tiroStatus};
    int tiroIn[4]= {tiroInPOSX,tiroInPOSY,tiroInStatus,0};
    int fase[3]= {0,0,1};
    int flag_quit = 1;
    int flag_morte = 1;
    int flag_pause = 0;
    int quant;
    char pause = 'a';
    char nome_fase[15] = {"maps/map_1.txt"};
    int num_fase=0;
    int pontos=0;
    INIMIGOS inimigo[20];
    tela_inicial();
    num_fase++;
    do
    {
        nome_fase[9]=num_fase+48;
        quant=le_inimigos(inimigo,nome_fase,fase);
        anima_barra(nave);
        tempo=time(NULL);
        while(deltaTempo<40&&flag_quit&&flag_morte&&testa_inimigos(inimigo, quant))
        {
            posiciona_inimigos(inimigo,fase,quant);
            if(kbhit())
                leitura_teclado(nave,tiro, &flag_quit, &flag_pause);
            else
                movimenta(nave,0);
            atirar(nave,tiro);
 //           if(tiroIn[2]==0)
//                tiroIn[3]=sorteiaIn(inimigo,quant);
//            atirarIn(inimigo[tiroIn[3]],tiroIn);
            posiciona_nave(nave,0);
            pontos=testa_tiro(inimigo,quant,tiro,pontos);
//            flag_morte=testa_tiroIn(nave,quant,tiroIn);
            posiciona_inimigos(inimigo,fase,quant);
            deltaTempo=time(NULL)-tempo;
            ajusta_energia(deltaTempo);
            imprime_tela(deltaTempo);
            if(flag_pause)
            {
                PlaySoundA(TEXT("sounds/coin.wav"), NULL, SND_ASYNC);
                gotoxy(24, 9);
                colorfn();
                printf("Pausado! Pressione P para voltar");
                gotoxy(23, 10);
                printf("ou pressione ESC para sair do jogo");
                do
                {
                    while(!kbhit())
                    {
                        Sleep(1000);
                        tempo++;
                    }
                    pause = getch();
                }
                while(pause != 'p' && pause != 'P' && pause != 27);
                if(pause == 27)
                    flag_quit = 0;
                else
                    PlaySoundA(TEXT("sounds/coin.wav"), NULL, SND_SYNC);
                flag_pause=0;
            }
            if(deltaTempo == 35 || deltaTempo == 37 || deltaTempo == 39)
                PlaySoundA(TEXT("sounds/alarm.wav"), NULL, SND_ASYNC);
            Sleep(50);
        }
        if(deltaTempo>=40)
            PlaySoundA(TEXT("sounds/energy.wav"), NULL, SND_ASYNC);
        else if(flag_morte)
        {
            PlaySoundA(TEXT("sounds/expl.wav"), NULL, SND_ASYNC);
        }
        if((flag_morte && diminui_vida()) || (deltaTempo>=40 && diminui_vida()))
              flag_quit = 0;

        Sleep(2000);
        nave[0]= navePOSX;
        nave[1]= navePOSY;
        nave[2]= naveDeltaVx;
        tiro[0]= tiroPOSX;
        tiro[1]= tiroPOSY;
        tiro[2]= tiroStatus;
        posiciona_nave(nave,0);
        Sleep(300);
        system("cls");
        limpa_barra();
        deltaTempo = 0;
        flag_morte = 1;
//        if (!testa_inimigos(inimigo, quant))
//          num_fase++;
    }
    while(flag_quit);
    if(flag_quit)
        tela_game_over();
    else
        printf("\nSaindo do jogo!");
    return 0;
}
