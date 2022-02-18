#include <iostream> 
using namespace std;
class Persona {
	//atributos
	protected : string nombres,apellidos,direccion,fn;
			int telefono;
			
	//metodos 
	protected : 
	//constructor
				Persona(string nom,string ape,string direc,int tel,string f) {
					nombres = nom;
					apellidos = ape;
					direccion = direc;
					telefono = tel;
					fn = f;
					
				}
	
	void mostrar();
	void agregar ();
	void modificar ();
	void eliminar ();
};
