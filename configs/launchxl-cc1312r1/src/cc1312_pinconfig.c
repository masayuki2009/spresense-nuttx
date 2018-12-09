/****************************************************************************
 * configs/launchxl-cc1312r1/src/cc1312_userleds.c
 *
 *   Copyright (C) 2018 Gregory Nutt. All rights reserved.
 *   Author: Gregory Nutt <gnutt@nuttx.org>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

#include "hardware/tiva_ioc.h"
#include "tiva_gpio.h"
#include "launchxl-cc1312r1.h"

/****************************************************************************
 * Public Data
 ****************************************************************************/

#ifdef CONFIG_TIVA_UART0
/* UART0:
 *
 * The on-board XDS110 Debugger provide a USB virtual serial console using
 * UART0 (PA0/U0RX and PA1/U0TX).
 */

const struct cc134xx_pinconfig_s g_gpio_uart0_rx =
{
  .gpio =
  {
    GPIO_DIO(0)
  },
  .ioc =
  {
    GPIO_PORTID(IOC_IOCFG_PORTID_UART0_RX) | IOC_STD_INPUT
  }
};

const struct cc134xx_pinconfig_s g_gpio_uart0_tx =
{
  .gpio =
  {
    GPIO_DIO(1)
  },
  .ioc =
  {
    GPIO_PORTID(IOC_IOCFG_PORTID_UART0_TX) | IOC_STD_OUTPUT
  }
};
#endif