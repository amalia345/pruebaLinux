//EL usuario tiene que ingresar dos numeros, de entre estos dos agrgara numeros random
// Tarea que un arreglo imprima el más grande
#include<stdio.h>
void llenaRand(in, int, int[]);
void imprArrInt(int, int, int[]);
void arrMostBig(int, int, int[]);
int main([])
{
    int n, x, p,maximo, nums[200];
   printf("Dame el numero de elementos y el valor maximo!!!\t");
   scanf("%d%d", &n, &maximo);

   llenaRand(n, maximo, nums);
   imprArrInt(n, nums);



    /* code */
    return 0;
}
void llenaRand(int n, int mayor, int nums[]){
   int i;
   srand(time(NULL));//seedrand(semilla)
   for(i=0; i<n; i++)
     nums[i]=1+rand()%mayor;
};

//Imprime el arreglo 
void imprArrInt(int n, int nums[]){
     int i;
     for(i=0; i<n; i++){
     printf("%d\t", nums[i]);
     if(i%10==0&& (i>0))
        putchar('\n');
     }
}

void arrMostBig(int n, int numsint[]){
     int i, j, b;
     for ( j= 0; j < 50; j++)
     {
        for ( i = 0; i < ; i++)
        {
            if (n>j)
            {
                printf()
            }
            
        }
        
        printf("EL nùmero mas grande que se encontro es: ");
     }
     
}
