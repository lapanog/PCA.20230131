#include <stdio.h>
#include <string.h>
#include <string.h>

int convert_digit(char digit){
    if (digit == 48){return 0;}
    if (digit == 49){return 1;}
    if (digit == 50){return 2;}
    if (digit == 51){return 3;}
    if (digit == 52){return 4;}
    if (digit == 53){return 5;}
    if (digit == 54){return 6;}
    if (digit == 55){return 7;}
    if (digit == 56){return 8;}
    if (digit == 57){return 9;}
}

int is_digit(char digit){
    if (digit == '0'){return 1;}
    if (digit == '1'){return 1;}
    if (digit == '2'){return 1;}
    if (digit == '3'){return 1;}
    if (digit == '4'){return 1;}
    if (digit == '5'){return 1;}
    if (digit == '6'){return 1;}
    if (digit == '7'){return 1;}
    if (digit == '8'){return 1;}
    if (digit == '9'){return 1;}
    else{return 0;}
}

int main(){
    printf("Digite uma data no formato DD/MM/AAAA\n");
    char data[11];
    scanf("%s", data);

    int valido_barra, valido_num, digit;

    for(int i=0;i<10;i++){
        if((i==2)||(i==5)){
            if (data[i]=='/'){valido_barra = 1;}
            else{
                valido_barra = 0;
                break;
            }
        }
        else{
            digit = is_digit(data[i]);
            if(digit==1){valido_num = 1;}
            else{
                valido_num = 0;
                break;
            }
        }
    }

    while((!valido_barra) || (!valido_num)){
        printf("A data inserida não é válida. Digite novamente:\n");
        scanf("%s", data);
        for(int i=0;i<10;i++){
            if((i==2)||(i==5)){
                if (data[i]=='/'){valido_barra = 1;}
                else{
                    valido_barra = 0;
                    break;
                }
            }
            else{
                digit = is_digit(data[i]);
                if(digit==1){valido_num = 1;}
                else{
                    valido_num = 0;
                    break;
                }
            }
        }
    }

    int dia, mes, ano;
    
    dia = (convert_digit(data[0])*10) + convert_digit(data[1]);
    mes = ((convert_digit(data[3])*10) + convert_digit(data[4]));
    ano = ((convert_digit(data[6])*1000) + (convert_digit(data[7])*100) + (convert_digit(data[8])*10) + convert_digit(data[9]));
    printf("%d\n", dia);
    printf("%d\n", mes);
    printf("%d\n", ano);

    return 0;
}
