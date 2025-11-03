#include <stdio.h>


#define TAM 10

int main(){
 
int tabuleiro[TAM][TAM];
int i, j;

for( i = 0; i < TAM; i++){
for( j = 0;j < TAM; j++){
    tabuleiro[i][j] = 0;
}
}

//i = coluna , j = linha e todos serão impressos na 3 linha

//Primeiro Navio
for(j = 0; j < 4;j++){
    tabuleiro[2][2] = 1;
}
//segundo navio
for(i= 0; i<3; i++){
    tabuleiro[2][3] = 1;
}
//Terceiro navio
for(i= 0;i<5;i++){
    tabuleiro[2][4] = 1;
}

printf("====Tabuleiro batalha Naval====\n");

for(i= 0;i < TAM;i++){
    for(j= 0;j < TAM;j++){
        printf("%d", tabuleiro[i][j]);
    }
    printf("\n");
}


return 0;

}