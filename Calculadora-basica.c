
#include<stdio.h> // aqui é uma biblioteca padrão do C para rodar comandos basicos
#include<stdlib.h>
#include<locale.h>// biblio para funcionar acetuação em portugues 

int main(){
	float n1d, n2d, n3d;// esses floatas so são usados na divisão
	int n1, n2, n3, op=100; // declaraão das variaveis usadas sendo n1, n2 e n3 os numeros para as usado para as contas
	// e op a variavel que recebe a escolha do ususário.
	//obs op esta com valor de 100 pra quando iniciar o programa ele nao fechar automaticamente, pos 0 é a opçao do while de sair
	setlocale(LC_ALL,"portuguese");// esse comando aplica o suporte da acentuação da lingua portugesa
	

	printf("\n\n");
	printf("######     ####    #       ######  #       #  #         ###     #####     #####   ######        ####  \n");
    printf("#         #    #   #       #       #       #  #        #    #   #    #   #     #  #     #      #    #     \n"); 
    printf("#        #      #  #       #       #       #  #       #      #  #    #   #     #  ######      #      #     \n");
    printf("#        ########  #       #       #       #  #       ########  #     #  #     #  #     #     ########    \n");
    printf("#        #      #  #       #        #     #   #       #      #  #    #   #     #  #      #    #      #     \n");
    printf("######   #      #  ######  ######    #####    ######  #      #  #####     #####   #      #    #      #       \n\n\n\n  \n");	
    printf(".                                                            pressione enter para continuar...");
    //isso é so uma arte
       while(op!=0){
    
   fflush(stdin);
    getchar();
    
  
    // esse comando esepra o suario digitar qulquer coisa e limpa o buffer do teclado, pode usar quando toiver uma tela de carregamento e quiser que o 
    //usuario clique enter para continuar ou ate mesmo quando qiuser deixar a tela parada em alguma informação e so va para a proxima tela quando digitar enter

    

   
	system("cls");   // esse comando limpa a tela do terminal mas so funciona em windos recomendo que procure o que funcione para seu sistema operacional
    printf(" Diga a operação desejada! \n");
    printf("1. Somar\n");
    printf("2. Subtrair\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("5. MEME\n");
    printf("0. Sair\n\n");
    printf("     -------> ");
	scanf("%d", &op);
	
	
if(op == 0) {
        printf("OK\n");
   } else if (op == 4) {
        printf("Vamos la\n\n");
        system("cls");
    } 
	else if (op==5){
	system("cls");
	printf("Manuel Gomes, LA ELE");
	 printf(".                      \n\n\n\n\n\npressione enter para cotinuar");
	fflush(stdin);
	getchar();
	system("cls");
	}else {
        system("cls");
        printf("Digite o primeiro numero: ");
        scanf("%d", &n1);
        printf("Digite o segundo numero: ");
        scanf("%d", &n2);
        system("cls"); // para nao colocar um coletor de numeros em cada case usei um pricipal!
    // esse IF + ELSE serve justamente para caso o usuario escolha zero ele não ser obrigado a digitar os numeros sem nescessidade
	  }
    
switch(op){
    // aqui abrimos um switch case para exeutar nosso casos 5, e definimos cada caso:
    
	case 1:
	n3= n1+n2;
		printf("A soma de %d + %d = %d", n1, n2, n3);
			break;
		// sempre lembrar de fechar os casos com "break;" caso contrario o programa executara o codigo ate o fim do swicth ou econtrar um break.
    
    case 2:
    	n3= n1-n2;
		printf("A subtração de %d - %d = %d", n1, n2, n3);
			break;
			
    case 3:
    	n3= n1*n2;
		printf("A multiplicação de %d * %d = %d", n1, n2, n3);
		break;
		
	case 4:
	// aqui nos deparamos com o caso da divisão e ao contrario da maioria divisão nao pode ter o divisor 0 
	//logo, teremos que dar comandos: "if e do-while
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1d);
    
    do {
        printf("Digite o segundo numero (diferente de zero): ");
        scanf("%f", &n2d);
        
        if (n2d == 0) {
            printf("\nERRO: A divisao nao e possivel. Escolha outro valor para o divisor.\n\n");
            printf("digite enter para continuar");
            fflush(stdin);
            getchar();
            system("cls");
        }
    } while (n2d == 0);
    
    n3d = n1d / n2d;
    printf("A divisao de %.2f / %.2f = %.2f\n", n1d, n2d, n3d);
    break;
case 5:
printf("\n");
break;

	break;
	case 0: 
	system("cls");
	printf("saindo!!\n\n");
	printf("  OOO   BBBB    GGG\n");
    printf(" O   O  B   B  G\n");
    printf(" O   O  BBBB   G  GG\n");
    printf(" O   O  B   B  G   G\n");
    printf("  OOO   BBBB    GGGG\n");
    printf("\n\n por usar a cauculadora, espero ter ajudado!");
	break;
	
	default:
	printf("Digitem uma opção válida!");
	printf("\n\n            pressione enter para continuar...");
	
    getchar();
     fflush(stdin);
    	system("cls");
    	break;
    		}
    	
}// fechamento do while do menu principal	
	return 0;
}

