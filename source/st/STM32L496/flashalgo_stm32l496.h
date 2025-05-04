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

#ifndef FLASHALGO_STM32L496_H_
#define FLASHALGO_STM32L496_H_

#include <stdint.h>

uint32_t flashalgo_stm32l496_init(uint32_t adr, uint32_t clk, uint32_t fnc);
uint32_t flashalgo_stm32l496_uninit(uint32_t fnc);
uint32_t flashalgo_stm32l496_blank_check(uint32_t adr, uint32_t sz, uint8_t pat);
uint32_t flashalgo_stm32l496_erase_chip(void);
uint32_t flashalgo_stm32l496_erase_sector(uint32_t adr);
uint32_t flashalgo_stm32l496_program_page(uint32_t adr, uint32_t sz, uint32_t *buf);
uint32_t flashalgo_stm32l496_verify(uint32_t adr, uint32_t sz, uint32_t *buf);

#endif /* FLASHALGO_STM32L496_H_ */
