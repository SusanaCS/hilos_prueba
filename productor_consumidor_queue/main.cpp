/*
 * main.cpp
 *
 *  Created on: 28 oct. 2019
 *      Author: antonio
 *
 *
 *     EJERCICIO QUEUE-->LA COLA ES MAS EFICIENTE EN EL USO DE MEMORIA, NO TIENE POR QUE SER CONTIGUA
 *     DIFERENCIA CON VECTOR: VECTOR SI TIENE QUE SER CONTIGUO
 *
 *     GitHub
 */


#include <queue>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <chrono>
#include <string>
#include <algorithm>


#define NUM_FICHEROS 100




void generarFicheros(){

	//Generamos 100 archivos de texto, con un numero aleatorio cada uno de los archivos

	std::ofstream ofs;
	std::srand(std::time(NULL));
	std::string nombreFich;

	for (int i=0; i<NUM_FICHEROS; i++){
		nombreFich = "ficheros/fich"+std::to_string(i)+".txt";

		ofs.open(nombreFich, std::ios::out);
		ofs << std::to_string(std::rand());


		ofs.close();
	}

}


void testQueue(){

		std::queue<int> cola;


		for (int i=10; i>0; i--){
			cola.push(i); 		//para añadir elementos al final
		}


			std::cout << "Queue: "<< std::endl;
			while(!cola.empty()){

				std::cout << "El primer elemento es: " << cola.front() << std::endl << std::endl;
					//cola.front() obtiene el primer elemento de la cola

				std::cout << "El ultimo elemento es: " << cola.back() << std::endl << std::endl;
					//cola.back() obtiene el ultimo elemento de la cola

				cola.pop();
			//cola.pop() elimina el primer elemento de la cola



			}


}



int main(){

	 //testQueue();
	 //generarFicheros();



}





