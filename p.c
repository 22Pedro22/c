#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void email();
void passwd();

int main(){
        unsigned short int choice;
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("\tSYSTEM64\t\n");
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("[1] Gerar Email\n");
        printf("[2] Gerar Senha\n");
        printf("[0] Sair\n");
        printf("> ");
        scanf("%hu" , &choice);
        if(choice == 1){
                email();
        }
        else if(choice == 2){
                passwd();
        }
        else if(choice == 0){
                printf("Saindo");
        }

        return 0;
}

void email(){
        unsigned short int choice;
        printf("---------------------\n");
        printf("[1] Email Aleatório\n");
        printf("[2] Email Customizado\n");
        printf("> ");
        scanf("%hu" , &choice);
        if(choice == 1){
   
