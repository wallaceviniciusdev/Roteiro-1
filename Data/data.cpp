#include <iostream>
#include "data.h"

Data::Data(){
	this->dia = 0;
	this->mes = 0;
	this->ano = 0;
}

void Data::setDia(int dia){
	if(this->dia <= 31){
		this->dia = dia;
	}else{
		cout << "Dia invalido" << endl;
	}
}

void Data::setMes(int mes){
	if(this->mes <= 12 && this>mes >= 1){
		this->mes = mes;
	}else{
		cout << "Mês invalido" << endl;
	}
}

void Data::setAno(int ano){
	if(this->ano < 0){
		this->ano = ano;
	}
}

void Data::avancarData(){
	if(this->mes==4 || this->mes==6 || this->mes==9 || this->mes==11){
		if(this->dia != 30){
			cout << this->dia+1 <<" / "<< this->mes << " / " <<this->ano << endl;
		}else if(this->dia >= 31){
			cout<<"Data Inexistente!\n";
		}else{
			this->dia = 1;
			cout<< this->dia << "/ " << this->mes+1 << " / " << this->ano <<endl";
		}
	}else if(this->mes==2){
		if(this->dia!=28 && this->dia !=29){
			cout<<this->dia+1<<" / " << this->mes << " / " <<this->ano<<" \n";
		}else{
			if(this->mes==2 && this->ano%4==0){
				if(this->dia==29){
					this->dia = 1;
					cout<<"01 / " << this->mes+1 << " / "<<this->ano<<"\n";
				}else{
					cout<< this->dia+1 << "/" << this->mes << "/" << this->ano <<"\n";
				}
			}

		}
	}else if(this->mes==12 && this->dia==31){
		this->dia = 1;
		this->mes = 1;
		cout << this->dia << "/" << this->mes << "/" <<this->ano+1<<"\n";
	}else{
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
