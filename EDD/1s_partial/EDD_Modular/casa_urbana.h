/**
 * @file casa_urbana.h
 * @brief Definición de la estructura CasaUrbana.
 */

#ifndef CASA_URBANA_H
#define CASA_URBANA_H

#include "casa.h"
#include <stdbool.h>

/**
 * @struct CasaUrbana
 * @brief Representa una casa urbana.
 * 
 * Extiende la estructura Casa para incluir información específica de una casa urbana.
 */
typedef struct {
    Casa casa;                     /**< Información específica de la casa. */
    bool conjunto_cerrado;        /**< Indica si la casa está en un conjunto cerrado. */
    int valor_administracion;     /**< Valor de la administración mensual. */
    bool incluye_areas_comunes;  /**< Indica si incluye áreas comunes. */
} CasaUrbana;

#endif // CASA_URBANA_H
