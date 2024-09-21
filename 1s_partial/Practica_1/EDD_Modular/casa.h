/**
 * @file casa.h
 * @brief Definición de la estructura Casa.
 */

#ifndef CASA_H
#define CASA_H

#include "vivienda.h"

/**
 * @struct Casa
 * @brief Representa una casa.
 * 
 * Extiende la estructura Vivienda para incluir información específica de una casa.
 */
typedef struct {
    Vivienda vivienda; /**< Información específica de la vivienda. */
    int num_pisos;     /**< Número de pisos en la casa. */
} Casa;

#endif // CASA_H
