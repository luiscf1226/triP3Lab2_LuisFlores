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
int limite2 (float n){
	float k=1;
	float t=0;
	if(k==n){//caso base
		return k;
	}else{ 
		return t+=((2*k)-1)/(k*(k+1));
		limite2(k+1);
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
			for( int i=0; i<pal.length();i++){
				if()
			}
			
		}//opcion1
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
		recursion(array,n);
		print(array,n);
		cout<<endl;
		
	    }//opcion 2
	    if(main==3){
	    	float n;
	    	cout<<"Ingrese el Limite: "<<endl;
	    	cin>>n;
	    	float k=0;
	    	cout<<"Su Limite era: "<<n<<endl;
	    	cout<<"Resultado: ";
	    	limite2(n);
	    	cout<<n;
	    	
		}
	

	}  
}
