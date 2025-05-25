#include<stdio.h>

int main(){

   
    int rainha, bispo=1 , torre=1 ; // variáveis que serão movimentadas 
    int R1 , B1 , T1;// variaveis que receberam a entrada do usuário decidindo a quantidade de vezes que serão movimentas as variáveis acima 


    printf("Quantas casas para esquerda você deseja movimetar a Rainha:\n");// Solicitação que o programa faz ao jogador 
    scanf("%d",&R1);// entrada de dados do jogador 

    for (rainha = 1 ; rainha <= R1; rainha++)// primeira estrutura de repetição For
    {
        printf("esquerda\n");/*Acão a ser repitida sempre a condição accima não for obtida*/

    }
    
    printf("Quantas casa na diagonal esquerda deseja movimentar o bispo:\n");// Solicitação que o programa faz ao jogador 
    scanf("%d",&B1);// entrada de dados do jogador 

    while (bispo <= B1)//segunda estrutuda de repetição (While)
    {
       
    printf("para cima e direita\n");//Ação ser tomada sempre que a  ação acima não obtida 

    bispo++;// incremento para toda que o bloco de codigo for repitido a variavel acima que está sendo testada voltar com o mais um em seu valor 
    }
    
    printf("Quantas casas para frente deseja movimentar a torre:\n");// Solicitação que o programa faz ao jogador 
    scanf("%d",&T1);// entrada de dados do jogador 

    do //Terceira estrutura de repetição (Do While)
    {
        printf("Frente\n");/*Primeiro o bloco de codigo será rodado uma vez, e se a condição 
        abaixo não tiver sido obtida ele volta a rodar todo o bloco novamente até que a 
        condição seja obtida*/
        torre++;//incremente para evitar o loop infinito 
    } while (torre<=T1);//Condição citada acima, enquanto ela não for obtida o bloco de codigo será rodado repetidamente. 

    return 0;
    
    

}