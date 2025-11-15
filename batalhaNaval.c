#include <stdio.h>


//aplicar habilidade
void habilidade(char tabuleiro[10][10], int *habilidade, int linhas, int colunas, int linhas_meio, int colunas_meio, char marca){
 int inicio_linhas = linhas_meio - (linhas / 2);
    int inicio_colunas = colunas_meio - (colunas / 2);

for(int i = 0; i < linhas; i++){
    for(int j = 0; j< colunas;j++){
        if(*(habilidade + i*colunas + j) == 1){
            if (inicio_linhas + i >= 0 && (inicio_linhas + i) < 10 &&
                inicio_linhas + j >= 0 && inicio_colunas + j < 10) {
                    tabuleiro[inicio_linhas + i][inicio_colunas + j] = marca;
                }
            }
        }
    }
}


int main(){
char tabuleiro[10][10];
int i, j;

for( i = 0; i < 10; i++){
for( j = 0;j < 10; j++){
    tabuleiro[i][j] = '0';
}
}

// Define as habilidades
    int cone[3][5] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1}
    };

    int cruz[5][5] = {
        {0,0,1,0,0},
        {0,0,1,0,0},
        {1,1,1,1,1},
        {0,0,1,0,0},
        {0,0,1,0,0}
    };

    int octaedro[3][3] = {
        {0,1,0},
        {1,1,1},
        {0,1,0}
    };

    habilidade(tabuleiro, (int*)cone, 3,5,8,2,'1');
    habilidade(tabuleiro, (int*)cruz, 5,5,6,6,'5');
    habilidade(tabuleiro, (int*)cone, 3,5,3,2,'4');


printf("====Tabuleiro batalha Naval====\n");
 printf("   A B C D E F G H I J\n");
    for (int i = 0; i < 10; i++) {
        printf("%d  ", i);
for (int j = 0; j < 10; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
return 0;

}