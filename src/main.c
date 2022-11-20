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
    char     cslow[20];
    char     cfast[20];
    char *   my_name = argv[0];
    uint8_t  arg_cnt = 1;

    /*
     * Must have at least 1 parameter (argc must be greater than 1).
     */
    if (1 == argc)
    {
        fprintf(stderr, "usage: %s -l [string]...\n", my_name);
        fprintf(stderr, "usage: %s string...\n", my_name);
        return(1);
    }


    /*
     * Print table labels, -l, if specified.
     */
    if (('-' == argv[1][0]) && ('l' == argv[1][1]))
    {
        printf(PRINTF_FORMAT, "CRC", "Slow", "Fast", "Test String");
        printf(PRINTF_FORMAT, "---", "----", "----", "-----------");
        arg_cnt = 2; // Skip past option
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
        int parm_len = strlen(argv[arg_cnt]);

        // Slow CRC Computation
                                        // Casting is the same size, 1 byte
        sprintf(cslow, HEX_FORMAT,
            crc_slow((uint8_t const *) argv[arg_cnt], parm_len));

        // Fast CRC Computation
                                        // Casting is the same size, 1 byte
        sprintf(cfast, HEX_FORMAT,
            crc_fast((uint8_t const *) argv[arg_cnt], parm_len));

        /*
         * Print the results.
         */
        printf(PRINTF_FORMAT, CRC_NAME, cslow, cfast, argv[arg_cnt]);

    }

return (0);
}   /* main() */
