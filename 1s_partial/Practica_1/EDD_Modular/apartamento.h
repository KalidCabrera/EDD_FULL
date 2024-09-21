/**
 * @file apartamento.h
 * @brief Definición de la estructura Apartamento.
 */

#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include "vivienda.h"

/**
 * @struct Apartamento
 * @brief Representa un apartamento.
 * 
 * Extiende la estructura Vivienda para incluir información específica de un apartamento.
 */
typedef struct {
    Vivienda vivienda;        /**< Información específica de la vivienda. */
    int valor_administracion; /**< Valor de la administración mensual. */
} Apartamento;

#endif // APARTAMENTO_H
