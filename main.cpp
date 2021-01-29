#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <string.h>
using namespace std;

void intercambio(int a[],int i,int j){
	int ar = a[i];
    a[i] = a[j];
    a[j] = ar;
}//intercambio
void print(int a[], int num){
	for(int j=0;j<20;j++){
		cout<<"  "<<a[j];
	}
}//fin print
void recursion(int a[],int n){
	for( int i=0;i < n-1; i++){
		if(a[i]>a[i+1]){//comparo de 1 en 1
			intercambio(a,i,i+1);
		}
	}
	if(n - 1> 1){
		recursion(a,n-1);
	}
}	//fin nrecursion
float limite2 (float t,float a,int b){
	if(a==b-1){//caso base
		return t;
	}else{ 
		float p1,p2;
		p1=(2*b)-1;
		p2=(b*(b+1));
		t=t+(p1/p2);
		return limite2(t,a,b+1);
	}
}

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
			int r=0;
			//01234
			//1AND1
			for (int i = 0; i < pal.length(); i++){

				if (pal[i] == 'A' && i == 1){
					if ((pal[i - 1] == '1' && pal[i + 3] == '0') || (pal[i - 1] == '0' && pal[i + 3] == '1') || (pal[i - 1] == '0' && pal[i + 3] == '0')){
						r = 0;
					}else{
						r = 1;
					}
				}//fin primer if
				else if (pal[i] == 'O' && i == 1){
					if (r == '0' && pal[i + 2] == '0'){
						r = 0;
					}else{
						r = 1;
					}
				}else if (pal[i] == 'A'){
					if ((r == 1 && pal[i + 3] == '0') || (r == 0 && pal[i + 3] == '1') || (r == 0 && pal[i + 3] == '0')){
						r= 0;
					}else{
						r = 1;
					}
				}else if (pal[i] == 'O'){
					if (r == 0 && pal[i + 2] == '0'){
						r = 0;
					}else{
						r = 1;
					}
				}
			}//fin del for que recorre el length de la cadena
			if(r==1){
				cout<<"Verdadero"<<endl;
			}else{
				cout<<"Falso"<<endl;
			}
			
		}//fin opcion1
		if(main==2){		
		cout<<"Ejercisio 2"<<endl;
		int array[20];
		for (int i=0;i<20;i++){
			array[i]=1+(rand()%100);
		}
		cout<<"Cadena Original: "<<endl;
		print(array,20);
		cout<<endl;
		//nueva
		int n=20;
		cout<<"NUEVA: "<<endl;
		recursion(array,n);
		print(array,n);
		cout<<endl;
		
	    }// fin opcion 2
	    if(main==3){
	    	float a=0;
	    	cout<<"Ingrese el Limite: "<<endl;
	    	cin>>a;
	    	cout<<"Resultado: ";
	    	cout<<limite2(0,a,1)<<endl;	
		}
	

	}  
}
