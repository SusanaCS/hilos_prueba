/*
 * S10.cpp
 *
 *  Created on: 16 oct. 2019
 *      Author: antonio
 */

#include "S10.h"

#include <iostream>

S10::S10(int numero):SmartPhone(numero) {
}

void S10::llamar() {
	std::cout << "Llamar con S10. Numero: " << numero << std::endl;
}

S10::~S10() {
	// TODO Auto-generated destructor stub
}

