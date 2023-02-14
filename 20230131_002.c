#include <stdio.h>
#include <string.h>
#include <string.h>

int main(){
    
    char carros[5][200];
    printf("Digite 5 modelos de carros:\n");
    for(int i=0;i<5;i++){
        scanf("%s", carros[i]);
    }

    printf("Agora digite o consumo deles(quantos km/l cada um faz).\n");
    int consumo[5];

    for (int i=0; i<5; i++){
        scanf("%d", &consumo[i]);
    }

    printf("Direi qual o mais econômico e quantos litros cada um consumiria para percorrer\n");
    printf("1.000km:\n\n");

    printf("O mais econômico é: ");
    int economico = 0;
    for (int i=1;i<5;i++){
        if (consumo[i]>consumo[economico]){
            economico = i;
        }
    }
    printf("%s\n\n", carros[economico]);

    float litros;
    for (int i=0;i<5;i++){
        litros = 1000.0/consumo[i];
        printf("O modelo %s consome %.2f litros ao percorrer 1.000km\n\n", carros[i], litros);
    }

}
