/*
 * principal.c
 *
 *  Created on: 23 oct. 2019
 *      Author: antonio

HOLA
 */


#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

void get_time_raw(time_t *t){
	time(t);
}

void get_time(struct tm **T){
	// Captura la hora actual:
	time_t raw_time;

	time(&raw_time);
	*T = localtime(&raw_time);
}

int segundos(struct tm *t1, struct tm *t2){
	int sg1 = t1->tm_hour*3600+t1->tm_min*60+t1->tm_sec;
	int sg2 = t2->tm_hour*3600+t2->tm_min*60+t2->tm_sec;

	return sg2-sg1;
}

void printTime(struct tm *t1){
	printf("\n%02d:%02d:%02d", t1->tm_hour, t1->tm_min, t1->tm_sec);
}

void prueba1(){
	struct tm *t1, *t2;

	get_time(&t1);
	printTime(t1);
	sleep(4);

	get_time(&t2);
	printTime(t2);
	printf("\nSegundos: %d", segundos(t1, t2));

}

void prueba2(){
	time_t t1, t2;

	get_time_raw(&t1);
	sleep(4);
	get_time_raw(&t2);

	double sg = difftime(t2, t1);
	printf("\nSegundos: %g", sg);

}


int main(){
	prueba2();
}
