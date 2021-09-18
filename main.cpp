/*
======== Curso de Ciencia de la Computación I - CCOMP2 - 1 ==========
Integrantes:
------------
1) Mauricio David Apaza Iruri
2) William Alexis Barrios Concha
3) Oscar Mauricio Quispe Mallma

Título:
-------
Creación de un Tik Tak Toe en base a lenguaje C++ (pvp)

Profesor:
--------- 
DSc. Manuel Eduardo Loayza Fernandez

            Departamento de Ciencia de la Computación
                 Universidad Católica San Pablo
                       Semestre 2021 - II
                         Arequipa - Perú
*/
#include <iostream>
using namespace std;


int main() {
	/*Variables Generales*/
    char x;
	char y;
	int ubi;
	int player_1 = 0;
	int player_2 = 1;
	int count = 0;
	int jugador = 1;
	
	/*Variables del Tablero*/
	char a = ' ';
	char b = ' ';
	char c = ' ';
	char d = ' ';
	char e = ' ';
	char f = ' ';
	char g = ' ';
	char h = ' ';
	char j = ' ';
	
	/*Elección de Icono para Jugar*/
	cout << "===============" << "TRES EN RAYA" << "===============" << endl;
	cout << "Jugador 1: ";
	cin >> x;
	cout << "Jugador 2: ";
	cin >> y;
	
	/*Manual de Posiciones*/
	cout << "Estas son las posiciones: \n" << endl;
    cout << " " << 1 << " | " << 2 << " | " << 3 << endl;
	cout << "-----------" << endl;
	cout << " " << 4 << " | " << 5 << " | " << 6 << endl;
	cout << "-----------" << endl;
	cout << " " << 7 << " | " << 8 << " | " << 9 << endl;
	cout << "\n" << endl;
	
	/*Bucle de Funcionamiento*/	
	for (int i = 1; i <= 9; i++){
		cout << "Elegir posicion del JUGADOR " << jugador << ":" << endl;
		
		/*Condicionales del Jugador 1*/		
		if (player_1 == 0){
			cin >> ubi;
			cout << "\a";
			if (ubi == 1 && a == ' '){
				a = x;
				cout << " " << a << " | " << b << " | " << c << endl;
				cout << "-----------" << endl;
				cout << " " << d << " | " << e << " | " << f << endl;
				cout << "-----------" << endl;
				cout << " " << g << " | " << h << " | " << j << endl;
			}
			else if (ubi == 2 && b == ' '){
				b = x;
				cout << " " << a << " | " << b << " | " << c << endl;
				cout << "-----------" << endl;
				cout << " " << d << " | " << e << " | " << f << endl;
				cout << "-----------" << endl;
				cout << " " << g << " | " << h << " | " << j << endl;
			}
			else if (ubi == 3 && c == ' '){
				c = x;
				cout << " " << a << " | " << b << " | " << c << endl;
				cout << "-----------" << endl;
				cout << " " << d << " | " << e << " | " << f << endl;
				cout << "-----------" << endl;
				cout << " " << g << " | " << h << " | " << j << endl;
			}
			else if (ubi == 4 && d == ' '){
				d = x;
				cout << " " << a << " | " << b << " | " << c << endl;
				cout << "-----------" << endl;
				cout << " " << d << " | " << e << " | " << f << endl;
				cout << "-----------" << endl;
				cout << " " << g << " | " << h << " | " << j << endl;
			}
			else if (ubi == 5 && e == ' '){
				e = x;
				cout << " " << a << " | " << b << " | " << c << endl;
				cout << "-----------" << endl;
				cout << " " << d << " | " << e << " | " << f << endl;
				cout << "-----------" << endl;
				cout << " " << g << " | " << h << " | " << j << endl;
			}
			else if (ubi == 6 && f == ' '){
				f = x;
				cout << " " << a << " | " << b << " | " << c << endl;
				cout << "-----------" << endl;
				cout << " " << d << " | " << e << " | " << f << endl;
				cout << "-----------" << endl;
				cout << " " << g << " | " << h << " | " << j << endl;
			}
			else if (ubi == 7 && g == ' '){
				g = x;
				cout << " " << a << " | " << b << " | " << c << endl;
				cout << "-----------" << endl;
				cout << " " << d << " | " << e << " | " << f << endl;
				cout << "-----------" << endl;
				cout << " " << g << " | " << h << " | " << j << endl;
			}
			else if (ubi == 8 && h == ' '){
				h = x;
				cout << " " << a << " | " << b << " | " << c << endl;
				cout << "-----------" << endl;
				cout << " " << d << " | " << e << " | " << f << endl;
				cout << "-----------" << endl;
				cout << " " << g << " | " << h << " | " << j << endl;
			}
			else if (ubi == 9 && j == ' '){
				j = x;
				cout << " " << a << " | " << b << " | " << c << endl;
				cout << "-----------" << endl;
				cout << " " << d << " | " << e << " | " << f << endl;
				cout << "-----------" << endl;
				cout << " " << g << " | " << h << " | " << j << endl;
			}
			else {
				cout << "POSICION USADA! (Elija otra)" << endl;
				i--;
				player_2++;
				player_1--;
				jugador --;
			}
			if ( a != ' ' || b != ' '  || c != ' ' || d != ' ' || e != ' ' || f != ' ' || g != ' ' || h != ' ' || j != ' '){
				player_2--;
				player_1++;
				jugador ++;
			}
		}
		
		/*Condicional del Jugador 2*/
		else if (player_2 == 0) {
			cin >> ubi;
			cout << "\a";
			if (ubi == 1 && a == ' '){
				a = y;
				cout << " " << a << " | " << b << " | " << c << endl;
				cout << "-----------" << endl;
				cout << " " << d << " | " << e << " | " << f << endl;
				cout << "-----------" << endl;
				cout << " " << g << " | " << h << " | " << j << endl;
			}
			else if (ubi == 2 && b == ' '){
				b = y;
				cout << " " << a << " | " << b << " | " << c << endl;
				cout << "-----------" << endl;
				cout << " " << d << " | " << e << " | " << f << endl;
				cout << "-----------" << endl;
				cout << " " << g << " | " << h << " | " << j << endl;
			}
			else if (ubi == 3 && c == ' '){
				c = y;
				cout << " " << a << " | " << b << " | " << c << endl;
				cout << "-----------" << endl;
				cout << " " << d << " | " << e << " | " << f << endl;
				cout << "-----------" << endl;
				cout << " " << g << " | " << h << " | " << j << endl;
			}
			else if (ubi == 4 && d == ' '){
				d = y;
				cout << " " << a << " | " << b << " | " << c << endl;
				cout << "-----------" << endl;
				cout << " " << d << " | " << e << " | " << f << endl;
				cout << "-----------" << endl;
				cout << " " << g << " | " << h << " | " << j << endl;
			}
			else if (ubi == 5 && e == ' '){
				e = y;
				cout << " " << a << " | " << b << " | " << c << endl;
				cout << "-----------" << endl;
				cout << " " << d << " | " << e << " | " << f << endl;
				cout << "-----------" << endl;
				cout << " " << g << " | " << h << " | " << j << endl;
			}
			else if (ubi == 6 && f == ' '){
				f = y;
				cout << " " << a << " | " << b << " | " << c << endl;
				cout << "-----------" << endl;
				cout << " " << d << " | " << e << " | " << f << endl;
				cout << "-----------" << endl;
				cout << " " << g << " | " << h << " | " << j << endl;
			}
			else if (ubi == 7 && g == ' '){
				g = y;
				cout << " " << a << " | " << b << " | " << c << endl;
				cout << "-----------" << endl;
				cout << " " << d << " | " << e << " | " << f << endl;
				cout << "-----------" << endl;
				cout << " " << g << " | " << h << " | " << j << endl;
			}
			else if (ubi == 8 && h == ' '){
				h = y;
				cout << " " << a << " | " << b << " | " << c << endl;
				cout << "-----------" << endl;
				cout << " " << d << " | " << e << " | " << f << endl;
				cout << "-----------" << endl;
				cout << " " << g << " | " << h << " | " << j << endl;
			}
			else if (ubi == 9 && j == ' '){
				j = y;
				cout << " " << a << " | " << b << " | " << c << endl;
				cout << "-----------" << endl;
				cout << " " << d << " | " << e << " | " << f << endl;
				cout << "-----------" << endl;
				cout << " " << g << " | " << h << " | " << j << endl;
			}
			/*Condicional para la corroboracion de las posiciones usadas*/
			else {
				cout << "POSICION USADA! (Elija otra)" << endl;
				i--;
				player_1++;
				player_2--;
				jugador++;
			}
			/*Condicional que permite el cambio de Jugador 1 y 2*/
			if ( a != ' ' || b != ' '  || c != ' ' || d != ' ' || e != ' ' || f != ' ' || g != ' ' || h != ' ' || j != ' '){
				player_1--;
				player_2++;
				jugador--;	
			}
		}
		
		/*Condicionales de corroboracion del ganador*/
		/* Ubicación de X */
		if (a == x && b == x && c == x){
			cout << x << " es el ganador";
			break;
		}
		else if (d == x && e == x && f == x){
			cout << x << " es el ganador";
			break;
		}
		else if (g == x && h == x && j == x){
			cout << x << " es el ganador";
			break;
		}
		else if (a == x && d == x && g == x){
			cout << x << " es el ganador";
			break;
		}
		else if (b == x && e == x && h == x){
			cout << x << " es el ganador";
			break;
		}
		else if (c == x && f == x && j == x){
			cout << x << " es el ganador";
			break;
		}
		else if (a == x && e == x && j == x){
			cout << x << " es el ganador";
			break;
		}
		else if (c == x && e == x && g == x){
			cout << x << " es el ganador";
			break;
		}
		
		/* Ubicación de Y */
		if (a == y && b == y && c == y){
			cout << y << " es el ganador";
			break;
		}
		else if (d == y && e == y && f == y){
			cout << y << " es el ganador";
			break;
		}
		else if (g == y && h == y && j == y){
			cout << y << " es el ganador";
			break;
		}
		else if (a == y && d == y && g == y){
			cout << y << " es el ganador";
			break;
		}
		else if (b == y && e == y && h == y){
			cout << y << " es el ganador";
			break;
		}
		else if (c == y && f == y && j == y){
			cout << y << " es el ganador";
			break;
		}
		else if (a == y && e == y && j == y){
			cout << y << " es el ganador";
			break;
		}
		else if (c == y && e == y && g == y){
			cout << y << " es el ganador";
			break;
		}
		count++;
	}
	
	/*Condicional de corroboracion del empate*/
	if (count == 9){
		cout << "EMPATE";
	}

return 0;	
}