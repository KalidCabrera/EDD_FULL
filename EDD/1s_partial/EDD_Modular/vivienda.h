/**
 * @file vivienda.h
 * @brief Definición de la estructura Vivienda.
 */

#ifndef VIVIENDA_H
#define VIVIENDA_H

#include "inmueble.h"

/**
 * @struct Vivienda
 * @brief Representa una vivienda.
 * 
 * Extiende la estructura Inmueble para incluir información específica de una vivienda.
 */
typedef struct {
    Inmueble inmueble;         /**< Información básica del inmueble. */
    int num_habitaciones;      /**< Número de habitaciones en la vivienda. */
    int num_banos;             /**< Número de baños en la vivienda. */
} Vivienda;

#endif // VIVIENDA_H
