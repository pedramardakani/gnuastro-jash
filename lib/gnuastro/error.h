/*********************************************************************
error - error handling throughout the Gnuastro library
This is part of GNU Astronomy Utilities (Gnuastro) package.

Original author:
     Jash Shah <jash28582@gmail.com>
Contributing author(s):
     Mohammad Akhlaghi <mohammad@akhlaghi.org>
Copyright (C) 2022 Free Software Foundation, Inc.

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
#ifndef __GAL_ERROR_H__
#define __GAL_ERROR_H__

/* Include other headers if necessary here. Note that other header files
   must be included before the C++ preparations below */
#include <stdint.h>



/* C++ Preparations */
#undef __BEGIN_C_DECLS
#undef __END_C_DECLS
#ifdef __cplusplus
# define __BEGIN_C_DECLS extern "C" {
# define __END_C_DECLS }
#else
# define __BEGIN_C_DECLS                /* empty */
# define __END_C_DECLS                  /* empty */
#endif
/* End of C++ preparations */





/* Actual header contants (the above were for the Pre-processor). */
__BEGIN_C_DECLS  /* From C++ preparations */





/************************************************************
 **************        Error Structure        ***************
 ************************************************************/
/* Data type for storing errors */
typedef struct gal_error_t
{
  char *code;                /* Generic code of the problem.            */
  uint8_t is_warning;        /* Defines if the error is only a warning. */
  char *back_msg;            /* Detailed message of backend (library)   */
  char *front_msg;           /* Detailed message of front end (caller). */
  struct gal_error_t *next;  /* Next error message.                     */
} gal_error_t;





/****************************************************************
 ************************   Allocation   ************************
 ****************************************************************/
gal_error_t *
gal_error_allocate(char *code, char *back_msg, uint8_t is_warning);

void
gal_error_add_back_msg(gal_error_t **err, char *code,
                       char *back_msg, uint8_t is_warning);

void
gal_error_add_front_msg(gal_error_t **err, char *front_msg,
                        uint8_t replace);



int
gal_error_print(gal_error_t *err);

void
gal_error_exit(gal_error_t **err);

void
gal_error_reverse(gal_error_t **err);




__END_C_DECLS    /* From C++ preparations */

#endif           /* __GAL_ERROR_H__ */
