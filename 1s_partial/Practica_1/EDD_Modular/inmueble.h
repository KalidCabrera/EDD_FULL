/**
 * @file inmueble.h
 * @brief Definición de la estructura Inmueble.
 */

#ifndef INMUEBLE_H
#define INMUEBLE_H

/**
 * @struct Inmueble
 * @brief Representa un inmueble básico.
 * 
 * Estructura base que incluye información general sobre un inmueble.
 */
typedef struct {
    int id_inmueble;     /**< Identificador único del inmueble. */
    int area;            /**< Área del inmueble en metros cuadrados. */
    char direccion[100]; /**< Dirección del inmueble. */
} Inmueble;

#endif // INMUEBLE_H
