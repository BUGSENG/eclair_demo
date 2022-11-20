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

#ifndef CRC_H
#define CRC_H


// Compile-time selection of the desired CRC algorithm.
//
#if defined(CRC_CCITT)

#define CRC_NAME    "CRC-CCITT"
typedef uint16_t    crc_t;

#elif defined(CRC_16)

#define CRC_NAME    "CRC-16"
typedef uint16_t    crc_t;

#elif defined(CRC_32)

#define CRC_NAME    "CRC-32"
typedef uint32_t    crc_t;

#else

#error "One of CRC_CCITT, CRC_16, or CRC_32 must be #define'd."

#endif


// Public API functions provided by the Compact CRC library.
//
void    crc_init(void);
crc_t   crc_slow(uint8_t const * const p_message, int n_bytes);
crc_t   crc_fast(uint8_t const * const p_message, int n_bytes);


#endif /* CRC_H */

/*** end of file ***/
