/**
 * @file apartaestudio.h
 * @brief Definición de la estructura Apartaestudio.
 */

#ifndef APARTAEESTUDIO_H
#define APARTAEESTUDIO_H

#include "apartamento.h"

/**
 * @struct Apartaestudio
 * @brief Representa un apartaestudio.
 * 
 * Extiende la estructura Apartamento. En este caso, no se añaden campos adicionales.
 */
typedef struct {
    Apartamento apartamento; /**< Información específica del apartamento. */
} Apartaestudio;

#endif // APARTAEESTUDIO_H
