/*
 * Copyright (c) 2025 Tenstorrent AI ULC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdint.h>

#include "FlashOS.h"

#if 0
#include "stm32l4xx_hal.h"
#include "stm32l4xx_ll_spi.h"
#include "stm32l4xx_hal_dma.h"
#include "stm32l4xx_hal_spi.h"
#endif

#if defined(NUCLEO_STM32L496ZG)
#else
#error "Missing board definition for this target"
#endif

#if defined(SPI1)
#define spictl SPI1
#elif defined(SPI2)
#define spictl SPI2
#elif defined(SPI3)
#define spictl SPI3
#endif

#if defined(spictl)
#if defined(W25Q16)
#define spidev W25Q16
#else
#error "Missing SPI flash definitions for this target"
#endif
#endif

extern const struct FlashDevice FlashDevice;

#if defined(NUCLEO_STM32L496ZG) && defined(spictl) && defined(spidev)
uint32_t flashalgo_stm32l496_init(uint32_t adr, uint32_t clk, uint32_t fnc)
{
    return 1;
}

uint32_t flashalgo_stm32l496_uninit(uint32_t fnc)
{
    return 1;
}

uint32_t flashalgo_stm32l496_blank_check(uint32_t adr, uint32_t sz, uint8_t pat)
{
    return 1;
}

uint32_t flashalgo_stm32l496_erase_chip(void)
{
    return 1;
}

uint32_t flashalgo_stm32l496_erase_sector(uint32_t adr)
{
    return 1;
}

uint32_t flashalgo_stm32l496_program_page(uint32_t adr, uint32_t sz, uint32_t *buf)
{
    return 1;
}

uint32_t flashalgo_stm32l496_verify(uint32_t adr, uint32_t sz, uint32_t *buf)
{
    return 1;
}
#endif
