/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

#define REVERSE_TEMP_SENSOR_RANGE

// Pt100 with INA826 amp with 3.3v excitation based on "Pt100 with INA826 amp on Ultimaker v2.0 electronics"
const short temptable_21[][2] PROGMEM = {
  { OV(  0),    0 },  // NA
  { OV(227),    1 },  // ??
  {     954,   10 },  // extrapolates
  {     989,   20 },  // MEASURED
  {    1025,   30 },  // MEASURED
  {    1058,   40 },  // MEASURED
  {    1092,   50 },  // MEASURED
  {    1125,   60 },  // MEASURED
  {    1162,   70 },  // MEASURED
  {    1194,   80 },  // MEASURED
  {    1228,   90 },  // MEASURED
  {    1261,  100 },  // MEASURED
  {    1295,  110 },  // MEASURED
  {    1330,  120 },  // MEASURED
  {    1362,  130 },  // MEASURED
  {    1397,  140 },  // MEASURED
  {    1430,  150 },  // MEASURED
  {    1463,  160 },  // MEASURED
  {    1499,  170 },  // MEASURED
  {    1533,  180 },  // MEASURED
  {    1567,  190 },  // MEASURED
  {    1599,  200 },  // MEASURED
  {    1634,  210 },  // MEASURED
  {    1668,  220 },  // MEASURED
  {    1702,  230 },  // MEASURED
  {    1735,  240 },  // MEASURED
  {    1765,  250 },  // MEASURED
  {    1796,  260 },  // MEASURED
  {    1829,  270 },  // MEASURED
  {    1860,  280 },  // MEASURED
  {    1892,  290 },  // Extrapolated
  {    1923,  300 },  // Extrapolated
  { OV(512),  310 },  // UNMEASURED
  { OV(514),  320 },  // UNMEASURED
  { OV(516),  330 },  // UNMEASURED
  { OV(518),  340 },  // UNMEASURED
  { OV(520),  350 },  // UNMEASURED
  { OV(522),  360 },  // UNMEASURED
  { OV(524),  370 },  // UNMEASURED
  { OV(526),  380 },  // UNMEASURED
  { OV(528),  390 },  // UNMEASURED
  { OV(530),  400 },  // UNMEASURED
  { OV(614),  500 }   // UNMEASURED
};
