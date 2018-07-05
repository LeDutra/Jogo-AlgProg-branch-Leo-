#include "header.c"
#include "prototipo_inimigos.c"

// Protótipos:

int tela_inicial();
void posiciona_nave(int *pos, int deltaX);
void ajusta_energia(int tempo);
void imprime_tela();
void atirar(int *nave, int *tiro);
void movimenta(int *nave, int deltaV);
void leitura_teclado(int *nave, int *tiro, int *flag, int *flag_pause);
void hidecursor();
void setcolor(int color);
void ret_color();
void colorfn();
void gotoxy(short x, short y);
void tela_game_over();
void limpa_barra();
void anima_barra(int *nave);
int diminui_vida();
void limpa_matriz();
int le_inimigos(INIMIGOS *inimigo, char *nome);
void coloca_inimigos(INIMIGOS *inimigo, int quant);
