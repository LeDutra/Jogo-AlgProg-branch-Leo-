#include "header.c"
#include "prototypes.c"

int tela_inicial()
{
    int u;

    colorfn();

    PlaySoundA(TEXT("sounds/tsr.wav"), NULL, SND_ASYNC);

    for(u=1; u<=77; u++)
    {
        gotoxy(u,2);
        hidecursor();
        printf("%c", VAR_INI);
        gotoxy(78-u,12);
        hidecursor();
        printf("%c", VAR_INI);
        Sleep(12);
    }

    colorfn();

    for(u=2; u<=12; u++)
    {
        gotoxy(1, u);
        hidecursor();
        printf("%c", VAR_COL);
        gotoxy(78, 14-u);
        hidecursor();
        printf("%c", VAR_COL);
        Sleep(12);
    }

    setcolor(10);
    gotoxy(11,4);
    printf("  __  __                                        _       ");
    gotoxy(11,5);
    printf(" |  \\/  | ___  __ _  __ _ _ __ ___   __ _ _ __ (_) __ _ ");
    gotoxy(11,6);
    printf(" | |\\/| |/ _ \\/ _` |/ _` | '_ ` _ \\ / _` | '_ \\| |/ _` |");
    gotoxy(11,7);
    printf(" | |  | |  __/ (_| | (_| | | | | | | (_| | | | | | (_| |");
    gotoxy(11,8);
    printf(" |_|  |_|\\___|\\__, |\\__,_|_| |_| |_|\\__,_|_| |_|_|\\__,_|");
    gotoxy(11,9);
    printf("              |___/                                     ");

    ret_color();
    Sleep(1000);
    gotoxy(4,16);
    printf("Controles:");
    gotoxy(11,17);
    printf("Setas do teclado e A e D = Movimentacao");
    gotoxy(11,18);
    printf("Barra de espaco, W ou seta pra cima = Tiro");
    gotoxy(11,19);
    printf("Para sair do jogo a qualquer momento, pressione ESC");
    gotoxy(4,27);
    printf("Desenvolvido e programado por Leonardo D. e Frederico S. p/ AlgProg");

    do
    {
        colorfn();
        gotoxy(20,23);
        printf("Pressione qualquer tecla para iniciar!");
        hidecursor();
        Sleep(500);
        if(!kbhit()){
        gotoxy(20,23);
        printf("                                          ");
        hidecursor();
        Sleep(500);
        }
    }
    while(!kbhit());

    PlaySoundA(TEXT("sounds/coin.wav"), NULL, SND_ASYNC);
    system("cls");
    Sleep(500);

return 0;
}
