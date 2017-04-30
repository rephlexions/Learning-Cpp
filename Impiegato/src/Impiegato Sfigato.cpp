//============================================================================
// Name        : Impiegato.cpp
// Author      : Ovidiu Cara
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/*
Definire una classe persona con campi opportuni, un costruttore e metodo
presentati. Definire una sottoclasse impiegato con in più campi reparto e
stipendio, un metodo presentati opportunamente modificato e un metodo
aumento che aumenta lo stipendio del 5%.*/
#include <iostream>
#include <cstring>
using namespace std;

class Persona
{
public:
  Persona(char n[], char c[], int e);
  Persona();
  void presentati();
protected:
  char nome[30];
  char cognome[30];
  int eta;
};
class Impiegato: public Persona
{
public:
  Impiegato(char n[],char c[], int e, double s, int r );
  void presentati();
  void aumento();
protected:
  double stipendio;
  int reparto;
};

int main (){
  Impiegato sfigatouno("Ciccio", "Bomba", 54, 800, 9);
  sfigatouno.presentati();
  sfigatouno.aumento();
  sfigatouno.presentati();
  return 0;
}
Persona::Persona(char n[], char c[], int e)//:nome(n), cognome(c), eta(e)
{
	strcpy(nome, n);
	strcpy(cognome, c);
	eta = e;


}
Persona::Persona(){

}
void Persona::presentati()
{
  cout << "Ciao sfigati, mi chiamo " << nome << " " << cognome << " e ho " << " " << eta << "anni" << endl;
}
Impiegato::Impiegato(char n[],char c[], int e, double s, int r )//: nome(n), cognome (c), eta(e), stipendio(s), reparto(r)
{
	strcpy(nome, n);
	strcpy(cognome, c);
	eta = e;
	reparto = r;
	stipendio = s;


}
void Impiegato::presentati()
{
  cout << "Ciao, io sono l'impiegato sfigato. \n"
  << "Mi chiamo " << nome << " " << cognome << " e ho " << eta << " anni." << endl << "Lavoro nel reparto " << reparto << " e guadagno " << stipendio << " euri." << " Lo so, faccio schifo " << endl;
}
void Impiegato::aumento()
{
  stipendio=stipendio + 0.05*stipendio;
}
