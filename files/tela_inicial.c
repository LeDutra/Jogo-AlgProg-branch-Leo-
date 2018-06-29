#include "header.c"
#include "prototypes.c"

int tela_inicial()
{
    int u;

    colorfn();

    PlaySoundA(TEXT("sounds/music2.wav"), NULL, SND_ASYNC);

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
        printf("%c", VAR_INI);
        gotoxy(78, 14-u);
        hidecursor();
        printf("%c", VAR_INI);
        Sleep(12);
    }

    gotoxy(30,6);
    setcolor(14);
    printf("Megamania C v0.9");
    setcolor(11);
    gotoxy(15,8);
    printf("Trabalho final de Algoritmos de Programacao 18/1");
    ret_color();
    Sleep(1000);
    gotoxy(3,16);
    printf("Controles:");
    gotoxy(10,17);
    printf("Setas do teclado e A e D = Movimentacao");
    gotoxy(10,18);
    printf("Barra de espaco, W ou seta pra cima = Tiro");
    gotoxy(10,19);
    printf("Para sair do jogo a qualquer momento, pressione ESC");
    gotoxy(3,27);
    printf("Desenvolvido e programado por Leonardo D. e Frederico S.");

    do
    {
        colorfn();
        gotoxy(20,23);
        printf("Pressione qualquer tecla para iniciar!");
        hidecursor();
        Sleep(500);
        gotoxy(20,23);
        printf("                                          ");
        hidecursor();
        Sleep(500);
    }
    while(!kbhit());

    PlaySoundA(TEXT("sounds/start.wav"), NULL, SND_ASYNC);
    Sleep(500);

    system("cls");

return 0;
}
