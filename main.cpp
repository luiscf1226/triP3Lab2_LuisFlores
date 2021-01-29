#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;
void recursive (int a[],int num){
	if(num>1){//recorrer
		for(int i=0;i<num-1;i++){
			if(a[i]>a[i+1]){//burbuja
				int n=a[i];
				a[i]=a[i+1];
				a[i+1]=n;
			}
		}
		num--;//decrementa en 1
		recursive(a,num);//recursivo llamarse de nuevo
	}else{
		return;
	}
	if(num==1){//caso base de 20 num baja a 1
		cout<<"Cadena Nueva: "<<endl;
		for(int j=0;j<20;j++){
			cout<<"  "<<a[j];
		}
		cout<<endl;	
	}	
}//fin recursivo

int main() {
	//comienzo
	int main=0;
	while(main!=4){
		cout<<"1. Ejercisio 1 "<<endl<<"2. Ejercisio 2 "<<endl<<"3. Ejercicio 3."<<endl<< "4. Salir "<< endl<<"ESCOJA: "<<endl;
		cin>> main; 
		if(main==1){
			string pal;
			cout<<"Ejercisio 1"<<endl;
			cout<<"Ingrese Cadena: ";
			cin>>pal;
			
		}
		if(main==2){
				
		cout<<"Ejercisio 2"<<endl;
		int array[20];
		for (int i=0;i<20;i++){
			array[i]=1+(rand()%100);
		}
		cout<<"Cadena Original: "<<endl;
		for(int j=0;j<20;j++){
			cout<<"  "<<array[j];
		}
		cout<<endl;
		recursive(array,20);
		}
	
		
	}
	return 0;
}
