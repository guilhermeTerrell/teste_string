#include <stdio.h>

//Definindo uma função que retorna o tamnho de uma string
int stringSize(char stringVector[]){
    int i=0;
    for(i=0; stringVector[i]!='\0'; i++){
    }
    return i;
}

//Definindo uma função que conta as ocorências de um padrão em um texto
int ocorre(char texto[], char padrao[]){
    int i=0;
    int j=0;
    int counter=0;
    int tamanhoPadrao=stringSize(padrao);
    while(padrao[i]!='\0' && texto[j]!='\0'){
        if(padrao[i]==texto[j]){
            i++;
            j++;
            counter++;
            if(counter==tamanhoPadrao){
                return 1;
            }
        }
        else{
            i=0;
            j++;
            counter=0;
        }
    }
    return 0;
}


int main(){
    int tamanho=0;
    int ocorrencias=0;
    char padrao[10]={"x"};
    char frase[14]={"Hello, World!"};
    tamanho=stringSize(frase);
    if(ocorre(frase, padrao)){
        ocorrencias++;
    }
    printf("O padrão se repete no texto %d vez(es)", ocorrencias);
    return 0;
}
