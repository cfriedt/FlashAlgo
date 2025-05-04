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

#include "flashalgo_stm32l496.h"

uint32_t Init(uint32_t adr, uint32_t clk, uint32_t fnc)
{
    return flashalgo_stm32l496_init(adr, clk, fnc);
}

uint32_t UnInit(uint32_t fnc)
{
    return flashalgo_stm32l496_uninit(fnc);
}

uint32_t BlankCheck(uint32_t adr, uint32_t sz, uint8_t pat)
{
    return flashalgo_stm32l496_blank_check(adr, sz, pat);
}

uint32_t EraseChip(void)
{
    return flashalgo_stm32l496_erase_chip();
}

uint32_t EraseSector(uint32_t adr)
{
    return flashalgo_stm32l496_erase_sector(adr);
}

uint32_t ProgramPage(uint32_t adr, uint32_t sz, uint32_t *buf)
{
    return flashalgo_stm32l496_program_page(adr, sz, buf);
}

uint32_t Verify(uint32_t adr, uint32_t sz, uint32_t *buf)
{
    return flashalgo_stm32l496_verify(adr, sz, buf);
}
