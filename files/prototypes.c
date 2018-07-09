#include "header.c"
#include "prototipo_inimigos.c"

// Prot�tipos:

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
int le_inimigos(INIMIGOS *inimigo, char *nome, int *fase);
void coloca_inimigos(INIMIGOS *inimigo, int quant);
void imprime_inimigos(INIMIGOS *inimigo, int direcao, int quant);
void posiciona_inimigos(INIMIGOS *inimigo, int *fase, int quant);
int testa_tiro(INIMIGOS *inimigo, int quant, int *tiro, int pontos);
int testa_inimigos(INIMIGOS *inimigo, int quant);
int sorteiaIn(INIMIGOS *inimigo, int quant);
void atirarIn(INIMIGOS inimigo, int *tiro);
int testa_tiroIn(int *nave, int quant, int *tiroIn);
