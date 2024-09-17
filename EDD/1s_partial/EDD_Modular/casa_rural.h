/**
 * @file casa_rural.h
 * @brief Definición de la estructura CasaRural.
 */

#ifndef CASA_RURAL_H
#define CASA_RURAL_H

#include "casa.h"

/**
 * @struct CasaRural
 * @brief Representa una casa rural.
 * 
 * Extiende la estructura Casa para incluir información específica de una casa rural.
 */
typedef struct {
    Casa casa;                /**< Información específica de la casa. */
    int distancia_cabecera;   /**< Distancia a la cabecera municipal en kilómetros. */
    int altitud;              /**< Altitud sobre el nivel del mar en metros. */
} CasaRural;

#endif // CASA_RURAL_H
