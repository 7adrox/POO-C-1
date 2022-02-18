#include "cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string n,nom,ape,direc,fn;
	int tel;
	cout<<"Ingresa el NIT: ";
	cin>>n;
	cout<<"Ingresa los Nombres: ";
	cin>>nom;
	cout<<"Ingresa los Apellidos: ";
	cin>>ape;
	cout<<"Ingresa la Direccion: ";
	cin>>direc;
	cout<<"Ingresa la Fecha de Nacimiento: ";
	cin>>fn;
	cout<<"Ingresa el Telefono: ";
	cin>>tel;
	
	//instancia de un objeto
	Cliente obj = Cliente(nom,ape,direc,tel,fn,n);
	obj.mostrar();
	cout<<"________________"<<endl;
	cout<<"Modificar Nit:";
	cin>>n;
	cout<<"Modificar Nombres:";
	cin>>nom;	
	cout<<"Modificar Apellidos:";
	cin>>ape;
	cout<<"Modificar Direccion";
	cin>>direc;
	cout<<"Modificar Fecha de Nacimiento:";
	cin>>fn;
	cout<<"Modificar Telefono:";
	cin>>tel;
	
	obj.setNit(n);
	obj.setNombres(nom);
	obj.setApellidos(ape);
	obj.setDireccion(direc);
	obj.setFN(fn);
	obj.setTelefono(tel);
	cout<<"________________"<<obj.getNit()<<endl;
	cout<<"Nit: "<<obj.getNit()<<endl;
	cout<<"Apellidos: "<<obj.getApellidos()<<endl;
	cout<<"Direccion: "<<obj.getDireccion()<<endl;
	cout<<"Fecha Nacimietno: "<<obj.getFN()<<endl;
	cout<<"Telefono: "<<obj.getTelefono()<<endl;
	//obj.mostrar();

}
