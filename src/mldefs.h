/*
 * mldefs.h
 * QEmailScrapper: Utility for scrapping a file in search of emails
 * Copyright (C) 2012  Daniel Ripoll <info@danielripoll.es>
 * http://danielripoll.es 
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 */


#ifndef EM_DEFS
#define EM_DEFS


/// Creo las macros de exportacion/importacion para windows
/// En windows una libreria dinamica (DLL) requiere una
/// exportacion de las funciones al ser compilada y una
/// importacion de las mismas al ser utilizada. De ahi las macros

#ifdef Q_OS_WIN32

#ifdef EM_EMAILSCRAPPERLIB
#define ML_EXPORT __declspec(dllexport)
#else
#define ML_EXPORT __declspec(dllimport)
#endif // EM_EMAILSCRAPPERLIB


#ifdef EM_EMAILSCRAPPER
#define MQ_EXPORT __declspec(dllexport)
#else
#define MQ_EXPORT __declspec(dllimport)
#endif
#else // EM_EMAILSCRAPPER


#define ML_EXPORT
#define MT_EXPORT

#endif // Q_OS_WIN32

#endif // EM_DEFS



