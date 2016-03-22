/*********************************************************************
MakeCatalog - Make a catalog from an input and labeled image.
MakeCatalog is part of GNU Astronomy Utilities (Gnuastro) package.

Original author:
     Mohammad Akhlaghi <akhlaghi@gnu.org>
Contributing author(s):
Copyright (C) 2015, Free Software Foundation, Inc.

Gnuastro is free software: you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation, either version 3 of the License, or (at your
option) any later version.

Gnuastro is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with Gnuastro. If not, see <http://www.gnu.org/licenses/>.
**********************************************************************/
#ifndef COLUMNS_H
#define COLUMNS_H

void
idcol(struct mkcatalogparams *p);

void
hostobj(struct mkcatalogparams *p, int o1c0);

void
numclumps(struct mkcatalogparams *p);

void
area(struct mkcatalogparams *p, int cinobj, int isriver);

void
position(struct mkcatalogparams *p, size_t col, char *target,
         char *type, char *axis);

void
brightnessmag(struct mkcatalogparams *p, size_t col, char *target,
              char *scale);

void
skystd(struct mkcatalogparams *p, size_t col);

void
sncol(struct mkcatalogparams *p);

#endif
