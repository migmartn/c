#include<stdio.h>
#include<conio.h>



int main(){
	int a[] = {3,4,2,1,5};
	int i,dato;
	char band = 'F';
	
	dato = 4; 
	//Busqueda Secuencial
	i=0;
	while((band == 'F') && (i<5)){
		if(a[i] == dato){
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F'){
		printf("El numero a buscar no existe en el arreglo");
	}
	else if(band == 'V'){
		printf("El numero a sido encontrado en la pos: " "%i",i-1);
	}
	
	
	getch();
	return 0;
}
