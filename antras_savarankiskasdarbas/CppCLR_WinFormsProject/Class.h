#pragma once
#include "Header.h"

class Studentas {
private:
	vector<int> balai;
	string vardas;
	string pavarde;
	double galutinis;
	double egzaminas = 0;
public:
	Studentas() {
		vardas = "Null";
		pavarde = "Null";
		galutinis = 1;
	};
	Studentas(string Vardas, string Pavarde, vector<int>Balai, double Galutinis) {
		vardas = Vardas;
		pavarde = Pavarde;
		balai = Balai;
		egzaminas = Galutinis;
		double vidurkis = accumulate(Balai.begin(), Balai.end(), 0.0) / Balai.size();
		double galutinis_balas = (0.4 * vidurkis) + (0.6 * egzaminas);
		galutinis = galutinis_balas;
	};
	Studentas(const Studentas& p1) {
		vardas = p1.vardas;
		pavarde = p1.pavarde;
		balai = p1.balai;
		galutinis = p1.galutinis;
	};
	Studentas& operator=(const Studentas& og);
	~Studentas() {
		balai.clear();
	};
	string GetVardas() {
		return vardas;
	};
	string GetPavarde() {
		return pavarde;
	};
	int GetND1() {
		return balai[0];
	}
	int GetND2() {
		return balai[1];
	}
	int GetND3() {
		return balai[2];
	}
	int GetND4() {
		return balai[3];
	}
	int GetND5() {
		return balai[4];
	}
	double GetEGZAMINAS() {
		return egzaminas;
	}

	double GetGALUTINIS() {
		return galutinis;
	};
	void DeleteBalai() {
		balai.clear();
	};
};

int y(string y) {
	int skaiciuoti = 0;
	string y1;
	stringstream y2(y);

	while (y2 >> y1) {
		++skaiciuoti;
	};
	return skaiciuoti;
}

bool pirmas(Studentas& lhs, Studentas& rhs) {
	return rhs.GetVardas() > lhs.GetVardas();
}
bool antras(Studentas& lhs, Studentas& rhs) {
	return rhs.GetGALUTINIS() > lhs.GetGALUTINIS();
}

