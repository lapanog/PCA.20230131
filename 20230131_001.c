#include <stdio.h>
#include <string.h>
#include <string.h>

char to_upper(char c){
    char upper = c;
    if((c>='a')&&(c<='z')){
        upper = c - ('a' - 'A');
    }
    return upper;
}

int is_vowel(char c){
    if ((c==65)||(c==69)||(c==73)||(c==79)||(c==85)||
    (c==97)||(c==101)||(c==105)||(c==111)||(c==117)){return 1;}
    else{return 0;}
}

int number_of_vowels(char word[]){

    int size = strlen(word);
    int num_vowels = 0;

    for (int i = 0; i<size; i++){
        if ((word[i]==65)||(word[i]==69)||(word[i]==73)||(word[i]==79)||(word[i]==85)||
        (word[i]==97)||(word[i]==101)||(word[i]==105)||(word[i]==111)||(word[i]==117)){num_vowels++;}
    }
    return num_vowels;
}

void show_word(char word[]){

    int i = 0;
    while(word[i] != '\0'){
        printf("%c", word[i]);
        i++;
    }
    printf("\n\n");

}

void back_to_front(char word[]){
    int size = strlen(word);
    for (int i = size-1; i>=0; i--){
        if (i == 0){printf("%c\n\n", word[i]);}
        else{printf("%c", word[i]);}
    }
}

void no_vowels(char word[]){
    int size = strlen(word);
    for (int i = 0; i<size; i++){
        if (!((word[i]==65)||(word[i]==69)||(word[i]==73)||(word[i]==79)||(word[i]==85)||
        (word[i]==97)||(word[i]==101)||(word[i]==105)||(word[i]==111)||(word[i]==117))){
            if (i == size-1){
                printf("%c\n\n", word[i]);
            }
            else{
                printf("%c", word[i]);
            }
        }
    }
    if (is_vowel(word[size-1])){printf("\n\n");}
}

void string_upper(char word[], char upper[]){
    int size = strlen(word);
    for (int i = 0; i<size; i++){
        upper[i] = to_upper(word[i]);
    }
}

int frequence(char word[], char c){
    int size = strlen(word);
    int freq = 0;
    for (int i=0; i<size; i++){
        if (word[i]==c){freq++;}
    }
    return freq;
}

void remove_character(char word[], char new_word[], char c){
    int size = strlen(word);
    int new_size = 0;
    int i = 0;
    while(word[i]!='\0'){
        if (word[i]!=c){
            new_word[new_size] = word[i];
            new_size++;
        }
        i++;
    }
}

int main(){

    char word[201];

    printf("Digite uma palavra.\n");
    scanf("%s", word);

    printf("Mostrarei ela ao contrário:\n");
    back_to_front(word);

    printf("Mostrarei apenas as consoantes:\n");
    no_vowels(word);

    printf("Transformarei todas as letras em maiusculas:\n");
    char aux[201];
    string_upper(word, aux);
    show_word(aux);

    printf("Determinarei a frequencia de um determinado caractere na palavra:\n");
    printf("Digite o caractere:\n");
    char c;
    scanf(" %c", &c);
    int c_frequence = frequence(word, c);
    printf("%c aparece %d vezes\n\n", c, c_frequence);

    printf("Irei remover um caracere da palavra inteira:\n");
    printf("Digite o caractere a ser removido:\n");
    scanf(" %c", &c);
    char new_word[201];
    remove_character(word, new_word, c);
    show_word(new_word);

    return 0;

}
