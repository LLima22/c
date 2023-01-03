#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    
int op, confirma;
int candidato1, candidato2, nulo;
 
        printf("Eleicoes 2021\n");      
        printf(" _______________________\n") ;     
        printf(" |                     | \n");
        printf(" |*Aluno1:Eliana Sousa |   \n");  
        printf(" |*Aluno2:Lucas Lima   |    \n");
        printf(" |*Aluno3:Talita       |      \n");    
        printf(" |*Turma:Profa.Eliane  |        \n");                  
        printf(" |                     | \n");
        printf(" |_____________________|   \n");                      
 
    system("pause");
    op = 0;
    while(op != -1)
    {
        system("cls");
            printf("Eleicoes 2021\n");      
            printf(" _______________________      URNA ELETRONICA     \n");
            printf(" |    _______          |     |  1  |  2  |  3 |   \n");
            printf(" |    |  |  |          |     |  4  |  5  |  6 |   \n");
            printf(" |    -------          |     |  7  |  8  |  9 |   \n");
            printf(" |                     |           |  0  |        \n");
            printf(" |                     |                          \n");
            printf(" |                     | |Branco | Corrige | Confirma |\n");
            printf(" |_____________________|                          \n\n");
     
            printf("17 - Lucas\n");
            printf("13 - Luan\n");
            printf("-1 - sair\n");
            printf("Digite o codigo do candidato: \n");
            scanf("%d",&op);    
           
        if (op == 17)
        {      
           system("cls");
           printf("Eleições 2021\n");
           printf(" _______________________      URNA ELETRONICA     \n");
           printf(" |                     |     |  1  |  2  |  3 |   \n");
           printf(" |  17  - Lucas        |     |  4  |  5  |  6 |   \n");
           printf(" |                     |     |  7  |  8  |  9 |   \n");
           printf(" |                     |           |  0  |        \n");
           printf(" |                     |                          \n");
           printf(" |                     | |(1)Branco | (2)Corrige | (3)Confirma |\n");
           printf(" |_____________________|                         \n");
           printf("Digite a opcao: \n");
           scanf("%d", &confirma);
           
           if (confirma == 3)
           {
              candidato1++;
              printf("\a\a\a"); //beep
           }
             
           
        }else if (op==13)
        {
           system("cls");
           printf("Eleições 2021\n");
           printf(" _______________________      URNA ELETRONICA     \n");
           printf(" |                     |     |  1  |  2  |  3 |   \n");
           printf(" |  13  - Luan         |     |  4  |  5  |  6 |   \n");
           printf(" |                     |     |  7  |  8  |  9 |   \n");
           printf(" |                     |           |  0  |        \n");
           printf(" |                     |                          \n");
           printf(" |                     | |(1)Branco | (2)Corrige | (3)Confirma |\n");
           printf(" |_____________________|                         \n");
           printf("Digite a opcao: \n");
           scanf("%d", &confirma);
           
           if (confirma == 3)
           {
              candidato2++;
              printf("\a\a\a"); //beep
           }
 
             
        }else if (op != -1)
        {
           system("cls");
           printf("Eleicoes 2021\n");
           printf(" _______________________      URNA ELETRONICA     \n");
           printf(" |                     |     |  1  |  2  |  3 |   \n");
           printf(" |%d Codigo invalido   |     |  4  |  5  |  6 |   \n", op);
           printf(" |                     |     |  7  |  8  |  9 |   \n");
           printf(" |                     |           |  0  |        \n");
           printf(" |                     |                          \n");
           printf(" |                     | |(1)Branco | (2)Corrige | (3)Confirma |\n");
           printf(" |_____________________|                          \n");
           printf("Digite a opcao: ");
           scanf("%d", &confirma);
           
           if (confirma == 3)
           {
              nulo++;
              printf("\a\a\a"); //beep
           }
        }          
    }
   
    printf("Relatorio final\n");
    printf("Lucas: %d\n", candidato1);
    printf("Luan: %d\n", candidato2);
    printf("Nulo: %d\n", nulo);
    
    system("pause") ;
    return 0;
}
