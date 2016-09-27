#include <stdio.h>
#include <stdlib.h>
#include<conio.h>


main ()
{
  int num1, num2,soma;
  int subt,multipl;
  int divis,quad;
  int menu;
  
  printf("\t\tCalculadora:\n\n");
  printf("\nEscolha uma opcao:\n\n");
  printf("1 -Operacao de soma\n");
  printf("2 -Operacao de Subtracao\n");
  printf("3 -Operacao de Multiplicacao\n");
  printf("4 -Operacao de Divisao\n");
  printf("5 -Operacao de Quadrado de um numero\n\n");                   
  printf("menu:");
  scanf("%d",&menu);
  switch (menu)
  do
  {
       
         case 1:   
         
              
         printf("\nDigite o primeiro valor: ");
         scanf("%d", &num1);
         printf("\nDigite o segundo valor: ");
         scanf("%d", &num2);
         soma= num1+num2;
         printf("O total e:%d\n",soma);  
         break;
          
         case 2:
               
                   
               printf("\nDigite o primeiro valor: ");
               scanf("%d", &num1);
               printf("\nDigite o segundo valor: ");
               scanf("%d", &num2);
               subt=num1-num2;
               printf("O Total e:%d\n",subt);
               break;
               
         case 3:
               
                     
               printf("\nDigite o primeiro valor: ");
               scanf("%d", &num1);
               printf("\nDigite o segundo valor: ");
               scanf("%d", &num2);
               multipl=num1*num2;
               printf("O Total e:%d\n",multipl);
               break;
               
         case 4:
           
               
               printf("\nDigite o primeiro valor: ");
               scanf("%d", &num1);
               printf("\nDigite o segundo valor: ");
               scanf("%d",&num2);
               divis=num1/num2;
               
               if(num2 !=0)
               {
           
                 printf("\n Nao e possivel dividir por zero\n");
                 }
               else;
               {
               printf("O total e:%d\n",divis);
               }
               break;
          
        case 5:
          
          
             printf("\nDigite um valor positivo:  ");
             scanf("%d",&num1);
             quad=num1*num1;
             printf(" O quadrado do numero e:%d\n",quad);
             break;
             
             
         
            default:
                    
                     if(num1 != 0 && menu != '0' && num2 != 0)
                            printf(" Operador invalido\n\n ");
                        else
                            printf(" Fechando calculadora!\n ");
                            
            }

        
        
             while(num1 != 0 && menu != '0' && num2 != 0);
             
             

  system("PAUSE");	
  return 0;       
}
