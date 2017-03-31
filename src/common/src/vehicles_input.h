/*PGR-GNU*****************************************************************
File: vehicles_input.h

Copyright (c) 2016 Celia Virginia Vergara Castillo
vicky_vergara@hotmail.com

------

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

 ********************************************************************PGR-GNU*/

#ifndef SRC_COMMON_SRC_VEHICLES_INPUT_H_
#define SRC_COMMON_SRC_VEHICLES_INPUT_H_
#pragma once

#include "./pgr_types.h"

/** @brief Reads the vehicles orders
 *
 * @param[in] vehicles_sql
 * @param[out] vehicles
 * @param[out] total_vehicles
 */
void
pgr_get_vehicles(
        char *vehicles_sql,
        Vehicle_t **vehicles,
        size_t *total_vehicles);

/** @brief Reads the vehicles orders
 *
 * @param[in] vehicles_sql
 * @param[out] vehicles
 * @param[out] total_vehicles
 */
void
pgr_get_vehicles_with_id(
        char *vehicles_sql,
        Vehicle_t **vehicles,
        size_t *total_vehicles);

#endif  // SRC_COMMON_SRC_VEHICLES_INPUT_H_
