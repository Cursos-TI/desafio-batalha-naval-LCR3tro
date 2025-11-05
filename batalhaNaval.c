#include <stdio.h>
#include <windows.h>

#define TAM 10

int main(){
SetConsoleOutputCP(65001);
 char letras[10]={'A','B','C','D','E','F','G','H','I','J'};
int tabuleiro[TAM][TAM];
int i, j;

for( i = 0; i < TAM; i++){
for( j = 0;j < TAM; j++){
    tabuleiro[i][j] = 0;
}
}

//i = linha vertical , j = linha horizontal e todos serão impressos na 3 linha

//Primeiro Navio vertical
for(j = 0; j < 4;j++){
    tabuleiro[3][3] = 3;
}
//segundo navio horizontal
for(i= 0; i<3; i++){
    tabuleiro[2][3] = 3;
}
//Terceiro navio Diagonal
for(i= 0;i<5;i++){
    tabuleiro[1][4] = 3;
}
//Quarto navio diagonal
for(i=0;i< 5;i++){
    tabuleiro[1][2] = 3;
}

printf("====Tabuleiro batalha Naval====\n");

for(j=0;j<10;j++){
printf("%c",letras[j]);
}
printf("\n");

for(i= 0;i < TAM;i++){
    for(j= 0;j < TAM;j++){
        printf("%d", tabuleiro[i][j]);
    }
    printf("\n");
}


return 0;

}