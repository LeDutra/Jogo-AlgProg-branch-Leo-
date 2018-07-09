#include "header.c"
#include "prototypes.c"

// Vari�veis globais:

unsigned char matriz[LINHAS][COLUNAS] =
{
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0',
    201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187,'\0',
    186,' ',' ',' ',' ',' ',' ',' ',' ','E','n','e','r','g','i','a',':',' ',' ',186,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186,'\0',
    186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',204,205,205,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186,'\0',
    186,' ',' ',' ',' ',' ',' ',' ',' ',' ','V','i','d','a','s',':',' ',' ',' ',186,' ',' ',254,' ',' ',254,' ',' ',254,' ',' ',186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',186,'\0',
    200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188,'\0'
};


// Fun��es:

void imprime_inimigos(INIMIGOS *inimigo, int direcao, int quant)
{
    int i;

    for(i=0;i<quant;i++)
    {
          inimigo[i].posX = inimigo[i].posX + direcao;
          if ((inimigo[i].posX == 2)||(inimigo[i].posX == 78)||(inimigo[i].status==0))
          {
                matriz[inimigo[i].posY][inimigo[i].posX-3]=' ';
                matriz[inimigo[i].posY][inimigo[i].posX-2]=' ';
                matriz[inimigo[i].posY][inimigo[i].posX-1]=' ';
                matriz[inimigo[i].posY][inimigo[i].posX  ]=' ';
                matriz[inimigo[i].posY][inimigo[i].posX+1]=' ';
                matriz[inimigo[i].posY][inimigo[i].posX+2]=' ';
                matriz[inimigo[i].posY][inimigo[i].posX-3]=' ';
                if (inimigo[i].posX == 2)
                        inimigo[i].posX = 76;
                if (inimigo[i].posX == 78)
                        inimigo[i].posX = 3;
          }
          if (inimigo[i].status!=0)
          {
                matriz[inimigo[i].posY][inimigo[i].posX-3]=' ';
                matriz[inimigo[i].posY][inimigo[i].posX-2]='x';
                matriz[inimigo[i].posY][inimigo[i].posX-1]='x';
                matriz[inimigo[i].posY][inimigo[i].posX  ]='x';
                matriz[inimigo[i].posY][inimigo[i].posX+1]='x';
                matriz[inimigo[i].posY][inimigo[i].posX+2]='x';
                matriz[inimigo[i].posY][inimigo[i].posX-3]=' ';
          }
    }
}

void posiciona_inimigos(INIMIGOS *inimigo, int *fase, int quant)
{

  srand (time(NULL));

  int sorteio;
  int i;
  int direcao;
  int modulo;

 sorteio = rand() % 10;

  if(fase[0]==0)
  {
    direcao = 0;
    modulo = 1;
  }
  else
  {
    modulo=fase[0];
    if (fase[1]!=0)
    {
      direcao = fase[1];
    }
    else
    {
      if (sorteio==0)
        fase[2] = 0 - fase[2];
      direcao = fase[2];
    }
  }

  for(i=0;i<modulo;i++)
  {
    imprime_inimigos(inimigo, direcao, quant);
  }
}

int testa_tiro(INIMIGOS *inimigo, int quant, int *tiro, int pontos)
{
  int i;
// tiro[1] == posY
// tiro[0] == posX
  for(i=0;i<quant;i++)
  {
      if(inimigo[i].posY == tiro[1] && inimigo[i].posX-2 <= tiro[0] && inimigo[i].posX+2 >= tiro[0])
      {
          inimigo[i].status = 0;
          pontos+=20;
      }
  }
  return pontos;
}

int testa_inimigos(INIMIGOS *inimigo, int quant)
{
  int i;
  int flag_retorno = 0;

  for(i=0;i<quant;i++)
    if(inimigo[i].status == 1)
      flag_retorno = 1;

  return flag_retorno;
}

void coloca_inimigos(INIMIGOS *inimigo, int quant)
{
    int i;
    for(i=0;i<quant;i++)
    {
        matriz[inimigo[i].posY][inimigo[i].posX]='X';
    }
}

int le_inimigos(INIMIGOS *inimigo, char *nome, int *fase)
{
    FILE *arq;
    int posiX=0, posiY=0;
    int i=0;
    char buffer;
    if((arq=fopen(nome,"r"))==NULL)
        printf("Falha ao abrir o arquivo.\n");
    else
        while(!feof(arq))
        {
            buffer=fgetc(arq);
            switch(buffer)
            {
            case '0':
                fase[0]=0;
                break;
            case '1':
                fase[0]=1;
                break;
            case '2':
                fase[0]=2;
                break;
            case '3':
                fase[0]=3;
                break;
            case '4':
                fase[0]=4;
                break;
            case '5':
                fase[0]=5;
                break;
            case '6':
                fase[0]=6;
                break;
            case '7':
                fase[0]=7;
                break;
            case '8':
                fase[0]=8;
                break;
            case '9':
                fase[0]=9;
                break;
            case 'R':
                fase[1]=1;
                break;
            case 'L':
                fase[1]=-1;
                break;
            case 'B':
                fase[2]=0;
                break;
            case '\n':
                posiY++;
                posiX=0;
                break;
            case 'x':
                inimigo[i].posX=posiX+2;
                inimigo[i].posY=posiY;
                inimigo[i].status=1;
                i++;
            case ' ':
                posiX++;
                break;
            default:
                break;
            }
        }
    fclose(arq);
    return i;
}

void posiciona_nave(int *pos, int deltaX)
{
   if((pos[0]+deltaX)>3&&(pos[0]+deltaX)<COLUNAS-4)
            pos[0]=pos[0]+deltaX;
    matriz[pos[1]-1][pos[0]-1]=' ';
    matriz[pos[1]-1][pos[0]  ]='|';
    matriz[pos[1]-1][pos[0]+1]=' ';
    matriz[pos[1]  ][pos[0]-3]=' ';
    matriz[pos[1]  ][pos[0]-2]='|';
    matriz[pos[1]  ][pos[0]-1]='-';
    matriz[pos[1]  ][pos[0]  ]='^';
    matriz[pos[1]  ][pos[0]+1]='-';
    matriz[pos[1]  ][pos[0]+2]='|';
    if(pos[0]==COLUNAS-4)
        matriz[pos[1]  ][pos[0]+3]='\0';
    else
        matriz[pos[1]  ][pos[0]+3]=' ';
}

void ajusta_energia(int tempo)
{
    if(tempo!=0)
    {
        matriz[20][60-tempo]=176;
    }
}

void imprime_tela(int deltaTempo)
{
    int alt;

    for(alt = 0; alt < LINHAS; alt++)
    {
        if(alt > 18)
        {
            if(deltaTempo >= 35 && deltaTempo % 2 == 1)
                setcolor(4);
            else
                setcolor(10);
            gotoxy(0, alt);
            printf("%s", matriz[alt]);
        }
        else
        {
            setcolor(14);
            gotoxy(0, alt);
            printf("%s", matriz[alt]);
        }
        hidecursor();
        printf("\n");
        hidecursor();
    }
}

void movimenta(int *nave, int deltaV)
{
    int i;

    nave[2]=nave[2]+deltaV;
    if(nave[2]>0)
    {
        for(i=0; i<nave[2]; i++)
            posiciona_nave(nave,1);
        nave[2]=0;
    }
    else
    {
        for(i=0; i>nave[2]; i--)
            posiciona_nave(nave,-1);
        nave[2]=0;
    }
}

void leitura_teclado(int *nave, int *tiro, int *flag, int *flag_pause)
{
    unsigned char a;

    int velocidade = 2;

    a=getch();
    if(a==0||a==0XE0)
        a=getch();
    switch(a)
    {
    case 85:
    case 117:
    case 27:
        *flag = 0;
        break;
    case 80:
    case 112:
        *flag_pause = 1;
        break;
    case 75:
    case 65:
    case 97:
        movimenta(nave,-velocidade);
        break;
    case 77:
    case 68:
    case 100:
        movimenta(nave,velocidade);
        break;
    case 72:
    case 87:
    case 119:
    case 32:
    case 57:
        tiro[2]=1;
        break;
    default:
        movimenta(nave,0);
        break;
    }
    printf("\n");
}

void anima_barra(int *nave)
{
    posiciona_nave(nave,0);

    PlaySoundA(TEXT("sounds/fill.wav"), NULL, SND_ASYNC);

    int i;

    for(i=20; i< 60; i++)
    {
//        system("cls");
        if(matriz[20][i] == 176)
            matriz[20][i] = 219;
//        if(matriz[20][i+1] == 176)
//            matriz[20][i+1] = 219;
        imprime_tela(0);
        Sleep(50);
    }

    PlaySoundA(TEXT("sounds/start.wav"), NULL, SND_ASYNC);

//    system("cls");
}

void limpa_barra()
{

    int i;

    for(i=20; i< 60; i=i+2)
    {
        matriz[20][i] = 176;
        matriz[20][i+1] = 176;
    }

    limpa_matriz();

    imprime_tela(0);

//    system("cls");

}

int diminui_vida()
{
    int flag = 1;

    if(matriz[22][28] == 254)
        matriz[22][28] = 207;
    else if(matriz[22][25] == 254)
        matriz[22][25] = 207;
    else if(matriz[22][22] == 254)
        matriz[22][22] = 207;
    else
        flag = 0;

    return flag;
}

void limpa_matriz()
{
    int i, j;

    for(i=0; i<19; i++)
        for(j=0; j<COLUNAS-1; j++)
            matriz[i][j] = ' ';
}


void atirar(int *nave, int *tiro)
{
    if(tiro[1] == 15 && tiro[2] > 0)
        PlaySoundA(TEXT("sounds/tiro.wav"), NULL, SND_ASYNC);
    matriz[tiro[1]][tiro[0]]=' ';
    if(tiro[2]==1&&tiro[1]>0)
    {
        tiro[1]--;
        tiro[0]=nave[0];
        matriz[tiro[1]][tiro[0]]='|';
    }
    else
    {
        tiro[0]=nave[0];
        tiro[1]=nave[1];
        tiro[2]=0;
    }
}

/*
int sorteiaIn(INIMIGOS *inimigo, int quant)
{
  srand (time(NULL));

  int sorteio;
  int i;
  int j;

 sorteio = rand() % quant;

 for (i=0;i<sorteio;i++)
 {
    if (inimigo[i].status==1)
      j=i;
 }

 return j;
}

void atirarIn(INIMIGOS inimigo, int *tiro)
{
    if(tiro[1] == 15 && tiro[2] > 0)
        PlaySoundA(TEXT("sounds/tiro.wav"), NULL, SND_ASYNC);
    matriz[tiro[1]][tiro[0]]=' ';
    if(tiro[2]==1&&tiro[1]>0)
    {
        tiro[1]++;
        tiro[0]=inimigo.posX;
        matriz[tiro[1]][tiro[0]]='|';
    }
    else
    {
        tiro[0]=inimigo.posX;
        tiro[1]=inimigo.posY;
        tiro[2]=0;
    }
}

int testa_tiroIn(INIMIGOS *nave, int quant, int *tiroIn)
{
  int i;
  int flag=1;
// tiro[1] == posY
// tiro[0] == posX
  for(i=0;i<quant;i++)
  {
      if(nave[1] == tiroIn[1] && nave[0]-2 <= tiroIn[0] && nave[0]+2 >= tiroIn[0])
      {
          nave[2] = 0;
          flag=0;
      }
  }
  return flag;
}

*/
