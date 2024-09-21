#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Estructura base Inmueble
typedef struct {
    int id_inmueble;
    int area;
    char direccion[100];
} Inmueble;

// Estructura Vivienda (hereda de Inmueble)
typedef struct {
    Inmueble inmueble;
    int num_habitaciones;
    int num_banos;
} Vivienda;

// Estructura Casa (hereda de Vivienda)
typedef struct {
    Vivienda vivienda;
    int num_pisos;
} Casa;

// Estructura Casa Rural (hereda de Casa)
typedef struct {
    Casa casa;
    int distancia_cabecera;
    int altitud;
} CasaRural;

// Estructura Casa Urbana (hereda de Casa)
typedef struct {
    Casa casa;
    bool conjunto_cerrado;
    int valor_administracion;
    bool incluye_areas_comunes;
} CasaUrbana;

// Estructura Apartamento (hereda de Vivienda)
typedef struct {
    Vivienda vivienda;
    int valor_administracion;
} Apartamento;

// Estructura Apartaestudio (hereda de Apartamento)
typedef struct {
    Apartamento apartamento;
} Apartaestudio;

// Estructura Local (hereda de Inmueble)
typedef struct {
    Inmueble inmueble;
    char localizacion[50];
} Local;

// Estructura Local Comercial (hereda de Local)
typedef struct {
    Local local;
    char centro_comercial[100];
} LocalComercial;

// Estructura Oficina (hereda de Local)
typedef struct {
    Local local;
    bool es_gobierno;
} Oficina;

int main() {
    // Ejemplo de uso: Casa Rural
    CasaRural casa_rural = {
        {  // Inicialización de Casa
            {  // Inicialización de Vivienda
                {1, 150, "Camino Vecinal 123"},  // Inicialización de Inmueble
                3,  // num_habitaciones
                2   // num_banos
            },
            2   // num_pisos
        },
        1500,  // distancia_cabecera
        2000   // altitud
    };
    printf("Casa Rural - ID: %d, Direccion: %s, Area: %d m2, Pisos: %d, Distancia a cabecera: %d km, Altitud: %d msnm\n", 
            casa_rural.casa.vivienda.inmueble.id_inmueble, casa_rural.casa.vivienda.inmueble.direccion, 
            casa_rural.casa.vivienda.inmueble.area, casa_rural.casa.num_pisos, 
            casa_rural.distancia_cabecera, casa_rural.altitud);
    
    // Ejemplo de uso: Apartaestudio
    Apartaestudio apartaestudio = {
        {  // Inicialización de Apartamento
            {  // Inicialización de Vivienda
                {2, 40, "Calle 10 #45-67"},  // Inicialización de Inmueble
                1,  // num_habitaciones
                1   // num_banos
            },
            300  // valor_administracion
        }
    };
    printf("Apartaestudio - ID: %d, Direccion: %s, Area: %d m2, Administracion: %d\n", 
            apartaestudio.apartamento.vivienda.inmueble.id_inmueble, apartaestudio.apartamento.vivienda.inmueble.direccion, 
            apartaestudio.apartamento.vivienda.inmueble.area, apartaestudio.apartamento.valor_administracion);
    
    // Ejemplo de uso: Oficina de Gobierno
    Oficina oficina_gobierno = {
        {  // Inicialización de Local
            {  // Inicialización de Inmueble
                3, 70, "Avenida Principal 456"
            },
            "Interno"  // localizacion
        },
        true  // es_gobierno
    };
    printf("Oficina - ID: %d, Direccion: %s, Area: %d m2, Es del Gobierno: %s\n", 
            oficina_gobierno.local.inmueble.id_inmueble, oficina_gobierno.local.inmueble.direccion, 
            oficina_gobierno.local.inmueble.area, oficina_gobierno.es_gobierno ? "Si" : "No");

    return 0;
}

