#include "Persona.cpp"
#include <iostream>
using namespace std;
class Cliente : Persona {
	// atributos
	private : string nit;
	//constructor
	public : 
	Cliente(string nom,string ape,string direc,int tel,string f,string n) : Persona(nom,ape,direc,tel,f){
		nit = n;
	}
	//metodos get y set
	//setter (modificar el atributo)
	void setNit(string n){nit = n;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string direc){direccion = direc;}
	void setFN(string f){fn = f;}
	void setTelefono(int tel){telefono = tel;}
	
	//getter (mostrar)
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getFN(){return fn;}	
	int getTelefono(){return telefono
	
	;}
	
	
	void mostrar (){
		cout<<"_______________"<<endl;
		cout<<"Nit:"<<nit<<endl;
		cout<<"Nombres:"<<nombres<<endl;
		cout<<"Apellidos"<<apellidos<<endl;
		cout<<"Direccion"<<direccion<<endl;
		cout<<"Telefono"<<telefono<<endl;
		cout<<"Nacimiento"<<fn<<endl;
		
		
			}
	
	
};
