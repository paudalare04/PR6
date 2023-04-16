#pragma once
#include <iostream>
using namespace std;

class lanchas

{

private:

	string namePlayer;
	int velocity;
	int distanceTraveled;
	int nitro;
	int valorDado;

public:


	//constructores
	lanchas(string pName, int pVelocity, int pNitro, int pDistanceTraveled);


	//getters
	string GetNamePlayer();
	int GetVelocity();
	int GetNitro();
	int GetDistanceTraveled();
	int GetValorDelDado();


	//setters
	void setName(string pName);
	void setVelocity(int pVelocity);
	void setNitro(int pNitro);
	void setDistanceTraveled(int pDistanceTravelled);
	void setValorDelDado(int pValorDado);


	//metodos propios

	void PrintLanchasStats();
	void PrintTiradaDeDado();
	void TurboOn();
	void TurboOff();
	void noPuedesMasNitro();

};