#include <iostream>
#include "data.h"

Data::Data(){
	this->dia = 0;
	this->mes = 0;
	this->ano = 0;
}

void Data::setDia(int dia){
	this->dia = dia;
}

void Data::setMes(int mes){
	this->mes = mes;
}

void Data::setAno(int ano){
	this->ano = ano;
}

void Data::avancarData(){
	
}

void Data::avancarDataIndice(int indice){
	if(this->mes==4 || this->mes==6 || this->mes==4||this->mes==9||this->mes==11){
		if(this->dia!=30){
			cout<< this->dia+1 <<" / "<<this->mes<<" / "<<this->ano<<"\n";
		}
		else if(dia==31){
			cout<<"Data Inexistente!\n";
		}
		else{
			cout<<"01 / "<<this->mes+1<< " / "<<this->ano<<"\n";
		}
	}
	else if(this->mes==2){

		if(this->dia!=28 && this->dia !=29){
			cout<<this->dia+1<<" / 02 / "<<this->ano<<" \n";
		}
		else{
			if(this->mes==2 && this->ano%4==0){
				if(this->dia==29){
					cout<<"01 / 03 / "<<this->ano<<"\n";
				}
				else{
					cout<<"29 / 02 / "<<this->ano<<"\n";
				}
			}

		}
	}
	else if(this->mes==12 && this->dia==31){
		cout<<"01 / 01 / "<<this->ano+1<<"\n";
	}
	else{
		cout<<dia+1 <<" / "<<mes<<" / "<<ano<<"\n";
	}
}

int Data::getDia(){
	return this->dia;
}

int Data::getMes(){
	return this->mes;
}
int Data::getAno(){
	return this->ano;
}