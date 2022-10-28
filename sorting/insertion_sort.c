#include <stdio.h>

void intercambio(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int particion(int a[], int izq, int der){
	int pivote = = a[izq]
			while(1){
					while(a[izq] < pivote){
						izq++
					}
					while(a[der] > pivote){
						der --;
					}
					if(izq >= der){
						return der;
					}else{
						return izq;
					}
			}break
}

void insertionSort(int a[], int n){
	for(int i=1;i<n;i++){
		int key = a[i];
		int j = i-1;
		while(key<a[j] && j >=0){
			a[j+1] = a[j];
			--j;
		}
		a[j+1] = key;
	}
}
void bubble_sort(int a[], int n){
	for(int i=1; i<n; i++)
		for(int j=0; j<n-1; j++)
			if(a[j]>a[j+1])
				intercambio(&a[j], &a[j+1]);
}

void pantalla(int a[], int n){
	for(int j=0; j<n-1; j++)
		printf("%d, ", a[j]);
	printf("%d\n", a[n-1]);
}

void main(){

	int t=0;

	printf("Cuantos numeros quiere permutar? ");
	scanf("%d", &t);

	int a[t];

	for (int i=0;i<t;i++){
		printf("Ingrese el valor %d:", i+1);
		scanf("%d", &a[i]);
	}
	printf("\nValores desordenados: ");
	pantalla(a,t);
	insertionSort(a,t);
	printf("\nValores ordenados: ");
	pantalla(a,t);
	printf("\n\n");
}
