/**************************************
* Trabalho 2 de Programacao de Computadores I - Retangulo 
* Curso de Sistemas da informacao 
* Aluno: Arthur Magnum Porto dos Santos - matricula: 0050013432
* Professor: Alex Salgado 
***************************************/
#include <stdio.h>

int main()
{
    
    char car;

    //Variaveis de loop
    int i, j;
    
    //variaveis de dados
    int alt = 0;
    int lado = 0;
    char sn;
    
    //para finalizar o programa
    int fim = 0;

    
    
    while ( fim == 0 )
    {
        //entrada pelo usuario
        printf( "Tamanho do lado: " );
        scanf( "%d", &lado );
        
        printf( "Tamanho da altura: ");
        scanf( "%d", &alt );
        
        printf( "Caractere que deseja usar: ");
        scanf( " %c", &car );        
        
        printf( "Olá, meu nome é Arthur e o retângulo ficou assim:\n" );
        
        for ( i = 0; i < alt; i++ )
        {
            for( j = 0; j < lado; j++ )
            {
                if( i == 0 || i == alt - 1 || j == 0 || j == lado - 1)
                {
                    printf(" %c ", car);
                }
                else
                {
                    printf("   ");
                }   
            }
            printf( "\n" );
        }
        
        printf( "Deseja continuar (S / N)?" );
        scanf( " %c", &sn );
        if ( sn == 'n' )
        {
            fim = 1;
        }
    }
    
    return 0;
}