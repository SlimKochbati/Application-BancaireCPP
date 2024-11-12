#include <iostream>
#include <cstring>
#include "Client.h"
#include "Banque.h"

using namespace std;

Client::Client(string id, string lastName, string firstName, string phone) {
    CIN = id;
    nom = lastName;
    prenom = firstName;
    numero = phone;
}

string Client::getNom() {
    return nom;
}

string Client::getCIN() {
    return CIN;
}

string Client::getNum() {
    return numero;
}

string Client::getPrenom() {
    return prenom;
}