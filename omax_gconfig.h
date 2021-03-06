/*
  Written by John MacCallum, The Center for New Music and Audio Technologies,
  University of California, Berkeley.  Copyright (c) 2013, The Regents of
  the University of California (Regents). 
  Permission to use, copy, modify, distribute, and distribute modified versions
  of this software and its documentation without fee and without a signed
  licensing agreement, is hereby granted, provided that the above copyright
  notice, this paragraph and the following two paragraphs appear in all copies,
  modifications, and distributions.

  IN NO EVENT SHALL REGENTS BE LIABLE TO ANY PARTY FOR DIRECT, INDIRECT,
  SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES, INCLUDING LOST PROFITS, ARISING
  OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF REGENTS HAS
  BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

  REGENTS SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
  THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
  PURPOSE. THE SOFTWARE AND ACCOMPANYING DOCUMENTATION, IF ANY, PROVIDED
  HEREUNDER IS PROVIDED "AS IS". REGENTS HAS NO OBLIGATION TO PROVIDE
  MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
*/

#ifndef __OSC_GCONFIG_H__
#define __OSC_GCONFIG_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "osc_bundle_u.h"

typedef struct _omax_gconfig t_omax_gconfig;

t_osc_err omax_gconfig_get(char *property, t_omax_gconfig **gconfig);
t_osc_err omax_gconfig_set(char *property, t_osc_atom_ar_u *values);
t_osc_err omax_gconfig_setMsg_u(t_osc_msg_u *msg);

t_osc_err omax_gconfig_setDspStartTime(t_osc_timetag t);
t_osc_err omax_gconfig_getDspStartTime(t_osc_timetag *t);

#ifdef __cplusplus
}
#endif

#endif // __OSC_GCONFIG_H__
