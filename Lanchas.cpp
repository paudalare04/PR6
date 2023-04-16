#include "Lanchas.h"
using namespace std;



//GETTERS

lanchas::lanchas(string pName, int pVelocity, int pNitro, int pDistanceTraveled) {
	namePlayer = pName;
	velocity = pVelocity;
	nitro = pNitro;
	distanceTraveled = pDistanceTraveled;
}

string lanchas::GetNamePlayer() {
	return namePlayer;
}

int lanchas::GetVelocity() {
	return velocity;
}

int lanchas::GetNitro() {
	return nitro;
}

int lanchas::GetDistanceTraveled() {
	return distanceTraveled;
}

int lanchas::GetValorDelDado() {
	return valorDado;
}

//SETTERS

void lanchas::setName(string pName) {
	namePlayer = pName;
}

void lanchas::setVelocity(int pVelocity) {
	velocity = pVelocity;
}

void lanchas::setNitro(int pNitro) {
	nitro = pNitro;
}

void lanchas::setDistanceTraveled(int pDistanceTravelled) {
	distanceTraveled = pDistanceTravelled;
}

void lanchas::setValorDelDado(int pValorDelDado) {

}

//METODOS

void lanchas::PrintLanchasStats() {

	cout << "" << endl;
	cout << "El corredor " << namePlayer << " empieza." << endl;
	cout << "" << endl;
	cout << "Distancia recorrida : " << distanceTraveled << endl;
	cout << "" << endl;
	cout << "Velocidad : " << velocity << endl;
	cout << "" << endl;
	cout << "Nitro : " << nitro << endl;
	cout << "" << endl;
	cout << "-----------------------------------------------------" << endl;
	cout << endl;
}

void lanchas::PrintTiradaDeDado() {

	velocity = velocity + valorDado;
	cout << "El corredor " << namePlayer << " a sacado un valor de dado de " << valorDado << " y obtiene una velocidad de " << velocity << endl;
	cout << "" << endl;
	distanceTraveled = distanceTraveled + velocity * 100;
	cout << "La distancia actual es de " << distanceTraveled << " metros " << endl;
	cout << "" << endl;
}

void lanchas::noPuedesMasNitro() {

	nitro = nitro - 1;

	cout << "Relajate broder, no puedes usar mas nitro " << endl;
	cout << "" << endl;
}


void lanchas::TurboOn() {

	velocity = velocity * 2;

}

void lanchas::TurboOff() {

	velocity = velocity / 2;
}



