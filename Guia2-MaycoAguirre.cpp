#include <iostream>
#include "Guia2-MaycoAguirre.h"
using namespace std;

int main()
{
    //sumarPuntos();
    //calcularDanoRecibido();
    //curarPersonaje();
    //calcularExp();
    //multiplicarMonedas();
    //sistemaCompra();
    //sumarNum();
    //ejercicioDano();
    //statsJugador();
    //calcularTiempo();
    //simCombate();
}

void sumarPuntos()
{
    int puntosIniciales;
    int puntosGanados;
    cout << "Ingresar los Puntos Iniciales del Jugador: " << endl;
    cin >> puntosIniciales;
    cout << "Ingresar los puntos ganados del Jugador" << endl;
    cin >> puntosGanados;
    if (puntosGanados > 100)
    {
        cout << "Gran Puntuacion!!!" << endl;
    }
    int puntosTotales = puntosIniciales+puntosGanados;
    cout << "Puntos: " << puntosTotales;
}

void calcularDanoRecibido()
{
    int vida = 20;
    int dano = 20;
    int vidaActual = vida-dano;
    cout << "vida: " << vidaActual << endl;
    if (vidaActual <= 0)
    {
        cout << "has muerto";
    }

}

void curarPersonaje()
{
    int vida = 75;
    int cura = 25;
    int curacion = vida+cura;
    vida = curacion;
    cout << "Vida Actual: " << vida << endl;
    if (vida>=100)
    {
        cout << "Vida maxima alcanzada"<<endl;
    }
    else if (vida < 100)
    {
        cout << "Aun puedes curarte mas"<<endl;
    }
}

void calcularExp()
{
    int nivel;
    cout << "Ingrese el nivel actual del personaje " << endl;
    cin >> nivel;
    if (nivel<10)
    {
        cout << "Nivel bajo, necesitas 100xp" << endl;
    }
    else if (nivel<20)
    {
        cout << "nivel medio, necesita 250xp" << endl;
    }
    else {
        cout << "Nivel alto, necesitas 500xp" << endl;
    }
}

void multiplicarMonedas()
{
    int monedas;
    int multiplicador;
    cout << "ingresar cantidad de monedas recogidas: " << endl;
    cin >> monedas;
    cout << "ingresar multiplicador" << endl;
    cin >> multiplicador;
    if (multiplicador == 1)
    {
        cout << "Sin bonificacion" << endl;
    }
    else if (multiplicador==2)
    {
        cout << "bonificacion x2 Activa" << endl;
    }
    else
    {
        cout << "Bonificacion x" << multiplicador << " Activa" << endl;
    }
    cout << "Monedas: " << monedas * multiplicador;
}

void sistemaCompra()
{
    int monedas;
    int opcion;
    int precio = 0;
    cout << "Ingrese Cantidad de Monedas: " << endl;
    cin >> monedas;
    cout << "Ingrese la opcion a Comprar:\n1- Espada $100\n2- Escudo $75\n3- Posion $25" << endl;
    cin >> opcion;
    switch (opcion)
    {
    case Espada:
        precio = 100;
        break;
    case Escudo:
        precio = 75;
        break;
    case Posion:
        precio = 25;
        break;
    default:
        cout << "No puedes comprar este Objeto" << endl;
        break;
    }
    if (monedas>=precio)
    {
        monedas = monedas - precio;
        cout << "Compra realizada\n Monedas restantes: " << monedas << endl;
    }
    else
    {
        cout << "No puedes comprar este objeto" << endl;
    }
}

void sumarNum()
{
    int opcion, num1, num2;
    cout << "Que tipo de recurso quiere sumar?\n1- Puntos\n2- Monedas\n3- Experiencia" << endl;
    cin >> opcion;
    cout << "Ingrese el primer valor: " << endl;
    cin >> num1;
    cout << "Ingrese el segundo valor a sumar: " << endl;
    cin >> num2;
    switch (opcion)
    {
    case Puntos:
        cout << "Has ganado " << sumar(num1, num2) << " Puntos" << endl;
        break;
    case Monedas:
        cout << "Has ganado " << sumar(num1, num2) << " Monedas" << endl;
        break;
    case Experiencia:
        cout << "Has ganado " << sumar(num1, num2) << " de Experiencia" << endl;
        break;
    default:
        cout << "Opcion ingresada invalida" << endl;
        break;
    }
}

void ejercicioDano()
{
    int vAtaque, vDefensa;
    cout << "Ingrese el Ataque: " << endl;
    cin >> vAtaque;
    cout << "Ingrese la defensa: " << endl;
    cin >> vDefensa;
    int dano = calcularDano(vAtaque, vDefensa);
    if (dano <=0)
    {
        cout << "el ataque fue inutil" << endl;
    }
    else {
        cout << "El enemigo recibio dano\nDano calculado: " << dano << endl;
    }
}

void statsJugador()
{
    string nombre;
    int ataque, defensa, velocidadAtaque, vidaMaxima, multiplicadorDano;
    cout << "ingrese nombre: " << endl;
    cin >> nombre;
    cout << "ingrese Ataque" << endl;
    cin >> ataque;
    cout << "ingrese Defensa" << endl;
    cin >> defensa;
    cout << "ingrese Velocidad de Ataque" << endl;
    cin >> velocidadAtaque;
    cout << "ingrese Vida Maxima" << endl;
    cin >> vidaMaxima;
    cout << "ingrese Multiplicador de dano critico" << endl;
    cin >> multiplicadorDano;
    if (multiplicadorDano>2)
    {
        cout << "critico alto" << endl;
    }
    else if(multiplicadorDano<=1){
        cout << "Critico Bajo" << endl;
    }
    else if (multiplicadorDano>=1 && 2<=multiplicadorDano) {
        cout << "Critico Normal" << endl;
    }
    cout << "Nombre: " << nombre << endl << "Ataque: " << ataque << endl << "Defensa: " << defensa << endl << "Velocidad de Ataque: " << velocidadAtaque << endl << "vida Maxima: " << vidaMaxima << endl << "Multiplicador de dano critico: " << multiplicadorDano << endl;
}

void calcularTiempo()
{
    int dia1, dia2, dia3, totalMin, promedioDias, horas, minRestantes;
    cout << "ingresar cuantos minutos jugo en el dia" << endl;
    cin >> dia1;
    cout << "ingresar cuantos minutos jugo en el dia" << endl;
    cin >> dia2;
    cout << "ingresar cuantos minutos jugo en el dia" << endl;
    cin >> dia3;
    totalMin = dia1 + dia2 + dia3;
    promedioDias = totalMin / 3;
    horas = totalMin / 60;
    minRestantes = totalMin % 60;
    cout << "Total de Minutos Jugados: " << totalMin << endl << "Promedio de Minutos por dia: " << promedioDias << endl << "Total en Formato Hs:min: " << horas<<":";
    if (minRestantes<10)
    {
        cout << "0" << minRestantes << endl;
    }
    else {
        cout << minRestantes << endl;
    }

    if (horas>10)
    {
        cout << "jugador muy activo" << endl;
    }
    else if (horas >= 5 && 10 >= horas) {
        cout << "jugador Regular" << endl;
    }
    else {
        cout << "Jugador Casual" << endl;
        }
}

void simCombate()
{
    string nombreJugador, nombreEnemigo;
    int ataquePersonaje, defensaPersonaje, vidaPersonaje, ataqueEnemigo, defensaEnemigo, vidaEnemigo;
    cout << "Ingresar nombre del Jugador: " << endl;; cin >> nombreJugador;
    cout << "ingresar Ataque de Personaje: " << endl; cin >> ataquePersonaje;
    cout << "ingresar Defensa del personaje" << endl; cin >> defensaPersonaje;
    cout << "ingresar Vida del personaje" << endl; cin >> vidaPersonaje;
    cout << "ingresar nombre del Enemigo" << endl; cin >> nombreEnemigo;
    cout << "ingresar Ataque del Enemigo" << endl; cin >> ataqueEnemigo;
    cout << "ingresar defensa del enemigo" << endl; cin >> defensaEnemigo;
    cout << "ingresar vida del enemigo" << endl; cin >> vidaEnemigo;
    int danoAlPersonaje = calcularDanoCom(ataqueEnemigo, defensaPersonaje);
    int danoAlEnemigo = calcularDanoCom(ataquePersonaje, defensaEnemigo);

    int vidaInicialPersonaje = vidaPersonaje;
    int vidaInicialEnemigo = vidaEnemigo;
    vidaPersonaje -= danoAlPersonaje;
    vidaEnemigo -= danoAlEnemigo;

    cout << "Resultado del combate\n" << nombreJugador << " Vida: " << vidaInicialPersonaje << " -> " << vidaPersonaje << endl;
    cout << nombreEnemigo << " Vida: " << vidaInicialEnemigo << " -> " << vidaEnemigo << endl;

    if (vidaPersonaje<=0&&vidaEnemigo<=0)
    {
        cout << "Ambos han sido derrotados";
    }
    else if (vidaPersonaje<=0) {
        cout << "Jugador Derrotado";
    }
    else if (vidaEnemigo<=0) {
        cout << "enemigo derrotado";
    }
    else {
        cout << "El combate continua";
    }
}


