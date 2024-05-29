#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void llenaRand(int, int, int[]);//Rand, nnumero random
void imprArrInt(int, int[]);
void estaEn(int, int, int[]);
void bubbleSort( int, int[]);

int main() {
    int n, x, p,maximo, nums[200];
   printf("Dame el numero de elementos y el valor maximo!!!\t");
   scanf("%d%d", &n, &maximo);

   llenaRand(n, maximo, nums);
   imprArrInt(n, nums);
   bubbleSort(n,nums);
   printf ("\nOrdenados\n");
   imprArrInt (n,nums);



   /*while(1){
   printf("Que numero buscas?");
   scanf("%d", &x);
   p=estaEn(x, n, nums);
   if(p>=0)
      printf("%d esta en la posicion %d. \n", x, p);
   else
      printf("%d no esta en el arreglo. \n", x);

   }*/
   return 0;
}

void llenaRand(int n, int mayor, int nums[]){
   int i;
   srand(time(NULL));//seedrand(semilla)
   for(i=0; i<n; i++)
     nums[i]=1+rand()%mayor;
};

void imprArrInt(int n, int nums[]){
     int i;
     for(i=0; i<n; i++){
     printf("%d\t", nums[i]);
     if(i%10==0&& (i>0))
        putchar('\n');
     }
}

/*int estaEn(int x,int n, int nums[]){
    int i;
    for(i=0; i<n; i++){
        if(x==nums[i])
            return i;
    }
    return -1;
};
*/
//Funcion que toma los numeros random y los ordena
void bubbleSort(int n,int a[]){
     int i, j, t;
    for ( j = 0; j < n-1; j++)
    
       for (i=n-1; i>j; i-- )
        if(a[i]<=a[i-1]){
        t=a[i];
        a[i]= a[i-1];
        a[i-1]=t;
    }

}