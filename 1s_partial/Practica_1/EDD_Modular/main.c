#include <stdio.h>
#include <casa_rural.h>
#include <apartaestudio.h>

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
