/** @file crc.h
 *
 * @brief Compact CRC library for embedded systems for CRC-CCITT,
 * CRC-16, CRC-32.
 *
 * @par
 * COPYRIGHT NOTICE: (c) 2000, 2018 Michael Barr.  This software is
 * placed in the public domain and may be used for any purpose.
 * However, this notice must not be changed or removed.  No warranty
 * is expressed or implied by the publication or distribution of this
 * source code.
 */

#ifndef REFLECT_H
#define REFLECT_H

#include <stdint.h>

uint32_t
reflect (uint32_t data, uint8_t n_bits);

#endif /* CRC_H */
