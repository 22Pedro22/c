#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void email();
void passwd();
void passwd8();

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
		                srand(time(NULL));
                unsigned int num = rand() % 1001;
                char utilizers[][10] = {"Network" , "User_Name" , "Anonymous"};
                unsigned int num1 = rand() % 1001;
                char subdomains[][20] = {"@gmail.com" , "@outlook.com" , "@hotmail.com" , "@yahoo.com"};
                unsigned int num_utilizers = rand() % 3;
                unsigned int num_subdomains = rand() % 4;
                printf("Email gerado: %u%s%u%s\n" , num , utilizers[num_utilizers] , num1 , subdomains[num_subdomains]);

        }

}

void passwd(){
        unsigned short int choice;
        printf("--------------\n");
        printf("[1] 8 Caracteres\n");
        printf("[2] 16 Caracteres\n");
        printf("[3] 32 Caracteres\n");
        printf("> ");
        scanf("%hu" , &choice);
	if(choice == 1){
		passwd8();
	}

}
   
void passwd8(){
	srand(time(NULL));
	char passwd[9];
	for(int i = 0; i < 9; i++){
		unsigned int num = rand() % 26;
		char low_letter = 'a' + num;
		unsigned int num1 = rand() % 26;
		char up_letter = 'A' + num1;
	}
	if(i % 2 == 0){
		passwd[i] = low_letter;
	}
	else{
		passwd[i] = up_letter;
	}
	printf("%s" , passwd);
}
