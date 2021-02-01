/*Faça um programa que leia 3 notas e calcule a media aritmetica*/

#include<conio.h>
#include<stdio.h>
#include<iostream>

float N1,N2,N3,media;

main(){
	system("cls");
	printf("\n Digite a nota N1: ");
	scanf("%f",&N1);
	printf("\n Digite a nota N2: ");
	scanf("%f",&N2);
	printf("\n Digite a nota N3: ");
	scanf("%f",&N3);
	media=(N1+N2+N3)/3;
	printf("\n a media eh: %2.2f ",media);
	printf("\n\n");
	system("pause");}
	
	
	
	


