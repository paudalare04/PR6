#include "Lanchas.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;


int turbo;

void preguntaNitro(lanchas& lanchitas) {

	cout << "QUIERES USAR EL NITRO ? " << endl;
	cout << "" << endl;

	cout << "1.Adelanete! " << endl;
	cout << "" << endl;

	cout << "2. No, prefiero aguantar más. " << endl;
	cout << "" << endl;

	cin >> turbo;

	if (turbo == 1) {

		int valorTurbo;

		valorTurbo = rand() % 2;

		if (valorTurbo == 0) {

			lanchitas.TurboOff();

			cout << "Estas jodido, tu velocidad ha disminuido a la mitad, suerte." << endl;
			cout << "" << endl;

			cout << "Tu velocidad actual es de " << lanchitas.GetVelocity() << " :( " << endl;
			cout << "" << endl;

			lanchitas.noPuedesMasNitro();
			Sleep(1000);
		}

		if (valorTurbo == 1) {

			lanchitas.TurboOn();

			cout << "Que suerte, tu velocidad va increchendo" << endl;
			cout << "" << endl;

			cout << "Tu velocidad actual es de  " << lanchitas.GetVelocity() << " :) " << endl;
			cout << "" << endl;

			lanchitas.noPuedesMasNitro();
			Sleep(1000);
		}

	}

	if (turbo == 2) {

		cout << "Hemos reservado el turbo para otra ocasión mas importante. " << endl;
		cout << "" << endl;

		cout << "Tu velocidad sigue siendo de " << lanchitas.GetVelocity() << " :/ " << endl;
		cout << "" << endl;

	}

}

int main() {

	srand(time(NULL));
	int turnosPartida = 5;
	int valorDado;


	cout << "Bienvenidos a la carrera de lanchas donde participaran dos concursantes" << endl;
	cout << "" << endl;

	lanchas lancha1("PAU", 0, 1, 0), lancha2("ROGER", 0, 1, 0);

	lancha1.PrintLanchasStats();
	lancha2.PrintLanchasStats();

	for (size_t i = 0; i < 5; i++) {
	
		valorDado = rand() % 6 + 1;
		turnosPartida = turnosPartida - 1;


		lancha1.PrintTiradaDeDado();
		Sleep(1000);

		if (lancha1.GetNitro() == 1){

			preguntaNitro(lancha1);
		}

		valorDado = rand() % 6 + 1;
		turnosPartida = turnosPartida - 1;

		lancha2.PrintTiradaDeDado();
		Sleep(1000);

		if (lancha2.GetNitro() == 1) {

			preguntaNitro(lancha2);
		}



	}

	if (lancha1.GetDistanceTraveled() > lancha2.GetDistanceTraveled()) {

		cout << lancha1.GetNamePlayer() << " ERES EL CAMPEON DE LA CARRERA FELICITACIONES \n";

	}else {

		cout << lancha2.GetNamePlayer() << " ERES EL CAMPEON DE LA CARRERA FELICITACIONES \n";

	}



}
