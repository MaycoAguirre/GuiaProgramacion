#pragma once

//ejercicio 1
void sumarPuntos();

//Ejercicio 2
void calcularDanoRecibido();

//ejercicio 3
void curarPersonaje();

//ejercicio 4
void calcularExp();

//ejercicio 5
void multiplicarMonedas();

//ejercicio 6 
void sistemaCompra();
enum objetos {
	Espada = 1,
	Escudo = 2,
	Posion = 3
};

//ejercicio 7
void sumarNum();
int sumar(int a, int b) 
{
	return a + b;
};
enum recursos {
	Puntos = 1,
	Monedas = 2,
	Experiencia = 3
};

//ejercicio 8
int calcularDano(int ataque, int defensa) 
{
	return ataque - defensa;
};
void ejercicioDano();

//ejercicio 9
void statsJugador();

//ejercicio 10
void calcularTiempo();

//ejercicio 11
void simCombate();
int calcularDanoCom(int ataque, int defensa) {
	int dano = ataque - defensa;
	if (dano < 0)return 0;
	return dano;
}
