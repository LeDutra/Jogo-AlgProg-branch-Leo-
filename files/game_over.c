#include "header.c"

void tela_game_over()
{
    printf("\nA energia acabou");
    PlaySoundA(TEXT("sounds/game_over.wav"), NULL, SND_ASYNC);
    Sleep(2000);
}
