/**********************************************************************
 *
 * Filename:    main.c
 *
 * Description: A simple test program for the CRC implementations.
 *
 * Notes:       To test a different CRC standard, modify crc2.h.
 *
 *
 * Copyright (c) 2000 by Michael Barr.  This software is placed into
 * the public domain and may be used for any purpose.  However, this
 * notice must not be changed or removed and no warranty is either
 * expressed or implied by its publication or distribution.
 **********************************************************************/

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

#include "crc.h"

#define PRINTF_FORMAT "%-9s%11s%12s  %s\n"
#if defined(CRC_32)
#    define HEX_FORMAT  "0x%08X"
#else
#    define HEX_FORMAT  "0x%04X"
#endif

int
main (int argc, char *argv[])
{
    char           cslow[20];
    char           cfast[20];
    const char *   my_name = argv[0];
    int8_t  arg_cnt = 1;

    /*
     * Must have at least 1 parameter (argc must be greater than 1).
     */
    if (1 == argc)
    {
        /* -E> hide MC3R1.D4.13 3 We assume the implementation provides a valid stderr.
        /* -E> hide MC3R1.D4.7 2 If printing to stderr fails there is little we can do besides returning 1. */
        (void) fprintf(stderr, "usage: %s -l [string]...\n", my_name);
        (void) fprintf(stderr, "usage: %s string...\n", my_name);
        return(1);
    }


    int32_t r;

    /*
     * Print table labels, -l, if specified.
     */
    if (('-' == argv[1][0]) && ('l' == argv[1][1]))
    {
        r = printf(PRINTF_FORMAT, "CRC", "Slow", "Fast", "Test String");
        if (r < 0) {
        	return(1);
        }
        r = printf(PRINTF_FORMAT, "---", "----", "----", "-----------");
        if (r < 0) {
        	return(1);
        }        arg_cnt = 2; // Skip past option
    }

    /*
     * Initialize for crc_fast. Only need to do this once.
     */
    crc_init();

    /*
     * Calculate CRC for each parameter.
     */
    for (; arg_cnt < argc; arg_cnt++)
    {
        size_t parm_len = strlen(argv[arg_cnt]);

        // Slow CRC Computation
                                        // Casting is the same size, 1 byte
        r = sprintf(cslow, HEX_FORMAT,
        		crc_slow((uint8_t const *) argv[arg_cnt], parm_len));
        if (r < 0) {
        	return(1);
        }

        // Fast CRC Computation
                                        // Casting is the same size, 1 byte
        r = sprintf(cfast, HEX_FORMAT,
        		crc_fast((uint8_t const *) argv[arg_cnt], parm_len));
        if (r < 0) {
        	return(1);
        }

        /*
         * Print the results.
         */
        r = printf(PRINTF_FORMAT, CRC_NAME, cslow, cfast, argv[arg_cnt]);
        if (r < 0) {
        	return(1);
        }
    }

return (0);
}   /* main() */
