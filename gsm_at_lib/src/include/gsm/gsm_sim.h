/**	
 * \file            gsm_sim.h
 * \brief           SIM API
 */

/*
 * Copyright (c) 2019 Tilen MAJERLE
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE
 * AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * This file is part of GSM-AT library.
 *
 * Author:          Tilen MAJERLE <tilen@majerle.eu>
 * Version:         $_version_$
 */
#ifndef GSM_HDR_SIM_H
#define GSM_HDR_SIM_H

#ifdef __cplusplus
extern "C" {
#endif

#include "gsm/gsm.h"

/**
 * \ingroup         GSM
 * \defgroup        GSM_SIM SIM API
 * \brief           SIM card manager
 * \{
 */

gsm_sim_state_t gsm_sim_get_current_state(void);
gsmr_t      gsm_sim_pin_enter(const char* pin, const gsm_api_cmd_evt_fn evt_fn, void* const evt_arg, const uint32_t blocking);
gsmr_t      gsm_sim_pin_add(const char* pin, const gsm_api_cmd_evt_fn evt_fn, void* const evt_arg, const uint32_t blocking);
gsmr_t      gsm_sim_pin_remove(const char* pin, const gsm_api_cmd_evt_fn evt_fn, void* const evt_arg, const uint32_t blocking);
gsmr_t      gsm_sim_pin_change(const char* pin, const char* new_pin, const gsm_api_cmd_evt_fn evt_fn, void* const evt_arg, const uint32_t blocking);
gsmr_t      gsm_sim_puk_enter(const char* puk, const char* new_pin, const gsm_api_cmd_evt_fn evt_fn, void* const evt_arg, const uint32_t blocking);

/**
 * \}
 */

#ifdef __cplusplus
}
#endif

#endif /* GSM_HDR_SIM_H */
