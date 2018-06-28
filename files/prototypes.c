#include "header.c"

// Protótipos:

int tela_inicial();
void posiciona_nave(int *pos, int deltaX);
void ajusta_energia(int tempo);
void imprime_tela();
void atirar(int *nave, int *tiro);
void movimenta(int *nave, int deltaV);
void leitura_teclado(int *nave, int *tiro);
void hidecursor();
void setcolor(int color);
void ret_color();
void colorfn();
void gotoxy(short x, short y);
