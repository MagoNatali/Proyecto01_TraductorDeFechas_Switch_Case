#include <iostream>

using namespace std;

int main(){
	cout<<"PROYECTO 01 - TRADUCTOR DE FECHAS"<<endl;
	int mes,dia,anio,opcion;
	cout<<"Por favor introduzca una fecha (mes,dia,anio): ";
	cin>>mes>>dia>>anio;
	cout<<"¿Como le gustaria mostrar la fecha?"<<endl;
	cout<<"Mes completo, dia, anio (Enero,11,1999): Introduzca 1."<<endl;
	cout<<"Mes abreviado, dia, anio (Ene.11,1999): Introduzca 2."<<endl;
	cout<<"Mes en cifra/dia/anio (01/11/1999): Introduzca 3."<<endl;
	cout<<"Ingrese una Opcion"<<endl;
	cin>>opcion;
	switch(opcion){
	case 1:
		switch(mes){
		case 1:
			cout<<"La fecha traducida es: Enero "<<dia<<" "<<anio<<endl;
			break;
		case 2:
			cout<<"La fecha traducida es: Febrero "<<dia<<" "<<anio<<endl;
			break;
		case 3:
			cout<<"La fecha traducida es: Marzo "<<dia<<" "<<anio<<endl;
			break;
		case 4:
			cout<<"La fecha traducida es: Abril "<<dia<<" "<<anio<<endl;
			break;
		case 5:
			cout<<"La fecha traducida es: Mayo "<<dia<<" "<<anio<<endl;
			break;
		case 6:
			cout<<"La fecha traducida es: Junio "<<dia<<" "<<anio<<endl;
			break;
		case 7:
			cout<<"La fecha traducida es: Julio "<<dia<<" "<<anio<<endl;
			break;
		case 8:
			cout<<"La fecha traducida es: Agosto "<<dia<<" "<<anio<<endl;
			break;
		case 9:
			cout<<"La fecha traducida es: Setiembre "<<dia<<" "<<anio<<endl;
			break;
		case 10:
			cout<<"La fecha traducida es: Octubre "<<dia<<" "<<anio<<endl;
			break;
		case 11:
			cout<<"La fecha traducida es: Noviembre "<<dia<<" "<<anio<<endl;
			break;
		case 12:
			cout<<"La fecha traducida es: Diciembre "<<dia<<" "<<anio<<endl;
			break;
		default:
			cout<<"MES INGRESADO INCORRECTAMENTE"<<endl;
		}
		break;
	case 2:
		switch(mes){
		case 1:
			cout<<"La fecha traducida es: Ene. "<<dia<<" "<<anio<<endl;
			break;
		case 2:
			cout<<"La fecha traducida es: Feb. "<<dia<<" "<<anio<<endl;
			break;
		case 3:
			cout<<"La fecha traducida es: Mar. "<<dia<<" "<<anio<<endl;
			break;
		case 4:
			cout<<"La fecha traducida es: Abr. "<<dia<<" "<<anio<<endl;
			break;
		case 5:
			cout<<"La fecha traducida es: May. "<<dia<<" "<<anio<<endl;
			break;
		case 6:
			cout<<"La fecha traducida es: Jun. "<<dia<<" "<<anio<<endl;
			break;
		case 7:
			cout<<"La fecha traducida es: Jul. "<<dia<<" "<<anio<<endl;
			break;
		case 8:
			cout<<"La fecha traducida es: Ago. "<<dia<<" "<<anio<<endl;
			break;
		case 9:
			cout<<"La fecha traducida es: Set. "<<dia<<" "<<anio<<endl;
			break;
		case 10:
			cout<<"La fecha traducida es: Oct. "<<dia<<" "<<anio<<endl;
			break;
		case 11:
			cout<<"La fecha traducida es: Nov. "<<dia<<" "<<anio<<endl;
			break;
		case 12:
			cout<<"La fecha traducida es: Dic. "<<dia<<" "<<anio<<endl;
			break;
		default:
			cout<<"MES INGRESADO INCORRECTAMENTE"<<endl;
		}
		break;
	case 3:
		if(mes < 1 || mes >12)
			cout<<"Mes ingresado Incorrectamente"<<endl;
		else
			cout<<"La fecha traducida es: "<<mes<<" / "<<dia<<" / "<<anio<<endl;
		break;
	default:
		cout<<"OPCION INGRESADA NO VALIDA"<<endl;
	}
	return 0;
}
