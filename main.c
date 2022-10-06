#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

void main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    /*
    usuário do GitHub: João Paulo S1
    Calculadora simples e funcional onde o usuário pode escolher as operações apresentadas.
o código foi desenvolvido com estudos e vídeos aulas de cursos já visto anteriormente.

Quando a calculadora fica operante, é exibida 6 alternativas de operações matemáticas.
Se o usuário não escolher nenhuma das opções, uma mensagem de erro irá aparecer, onde terá que digitar novamente.
caso a opção escolhida seja raiz quadrada, será solicitado um valor apenas.
se o usuário escolher a divisão e tentar dividir por valor 0, uma mensagem de erro aparecera e o usuário terá que rever sua escolha.
se a opção escolhida for potenciação, será apresentada uma mensagem para escolher os operandos, pedindo a seleção da base e do expoente da potenciação.
se o usuário selecionar as opções corretamente, os valores serão calculados e o resultado ira aparecer ao usuário.
o usuário poderá selecionar se deseja ficar ou sair, será exibido uma mensagem.
    */

    int operacao;
    float num, num2, resultado;
    char controle;

    printf("João Paulo moura da Silva\nUniversidade Lasalle\nAnalise e desenvolvimento de sistemas\nMatricula 202210293\n\n");
    printf("Calculadora em linguagem C:\n");

    do{
        do
        {
            printf("\nSelecione a operação que deseja fazer:\n");
            printf("1. Adição\n2. Subtração\n3. Divisão\n4. Multiplicação\n5. Raiz quadrada\n6. Potência\n\n");
            scanf("%d", &operacao);

            if(operacao > 6 || operacao < 1)
            {
                printf("\nValor inválido, digite um valor válido.\n\n");
            }
        } while(operacao > 6 || operacao < 1);

        if (operacao == 6)
        {
            printf("\nDigite a base da potenciação: ");
            scanf("%f", &num);
            printf("\nDigite o expoente da potenciação ");
            scanf("%f", &num2);
        }
        else if (operacao == 5)
        {
            printf("\nDigite o valor a ser usado na raiz quadrada: ");
            scanf("%f", &num);
        }
        else
        {
            do
            {
                printf("\nEscolha o primeiro valor para a operação: ");
                scanf("%f", &num);
                printf("\nEscolha o segundo valor para a operação: ");
                scanf("%f", &num2);

                if (operacao == 3 && num2 == 0)
                {
                    printf("\nNão é possível dividir nenhum valor por 0, tente novamente.\n");
                }
            } while(operacao == 3 && num2 == 0);
        }

        switch(operacao)
        {
            case 1:
                resultado = num+num2;
                break;
            case 2:
                resultado = num-num2;
                break;
            case 3:
                resultado = num/num2;
                break;
            case 4:
                resultado = num*num2;
                break;
            case 5:
                resultado = sqrt(num);
                break;
            case 6:
                resultado = pow(num, num2);
                break;
        }

        printf("\nO resultado da operação �: %.02f \n\n", resultado);

        printf("Aperte 0 para sair ou qualquer tecla para reiniciar: \n\n");
        scanf(" %c", &controle);
    } while(controle != '0');
}
