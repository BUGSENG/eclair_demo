#ifndef MISRA_C_2012_DOC_H
#define MISRA_C_2012_DOC_H

/*

Documentation for MISRA C:2012 Dir 4.1: overflow
------------------------------------------------

To be written.
Example: Pervasive use of assertions and extensive test suite.


Documentation for MISRA C:2012 Dir 4.1: unexpected wrapping
-----------------------------------------------------------

To be written.
Example: The only wrapping the is present in the code concerns
unsigned integers and they are all expected.


Documentation for MISRA C:2012 Dir 4.1: invalid shift
-----------------------------------------------------

To be written.
Example: Pervasive use of assertions and extensive test suite.


Documentation for MISRA C:2012 Dir 4.1: division/remainder by zero
------------------------------------------------------------------

To be written.
Example:
There are neither division nor remainder operations in the project code.


Documentation for MISRA C:2012 Dir 4.1: unsequenced side effects
----------------------------------------------------------------

To be written.
Example:
No function in this project is meant to be executed from interrupt handlers
or in multi-threading environments.


Documentation for MISRA C:2012 Dir 4.1: read from uninitialized automatic object
--------------------------------------------------------------------------------

To be written.
Example:
Automatic variables are used to store temporary parameters and they
are always initialized to either a default value or a proper value
before usage.


Documentation for MISRA C:2012 Dir 4.1: read from uninitialized allocated object
--------------------------------------------------------------------------------

To be written.
Example:
The code does not use allocated storage.


Documentation for MISRA C:2012 Dir 4.1: write to string literal or const object
-------------------------------------------------------------------------------

To be written.
Example:
The toolchain puts every string literal and const object into a read-only
section of memory.  The hardware exception raised when a write is attempted
on such a memory section is correctly handled.


Documentation for MISRA C:2012 Dir 4.1: non-volatile access to volatile object
------------------------------------------------------------------------------

To be written.
Example:
Volatile access is limited ro registers that are always accessed
through macros or inline functions.


Documentation for MISRA C:2012 Dir 4.1: access to dead allocated object
-----------------------------------------------------------------------

To be written.
Example:
The code does not use allocated storage.


Documentation for MISRA C:2012 Dir 4.1: access to dead automatic object
-----------------------------------------------------------------------

To be written.
Example:
Pointers to automatic variables are never returned, nor stored in
wider-scoped objects.  No function does the same on any pointer
received as a parameter.


Documentation for MISRA C:2012 Dir 4.1: access to dead thread object
--------------------------------------------------------------------

To be written.
Example:
The program does not use per-thread variables.


Documentation for MISRA C:2012 Dir 4.1: access using null pointer
-----------------------------------------------------------------

To be written.
Example:
All possibly null pointers are checked before access.


Documentation for MISRA C:2012 Dir 4.1: access using invalid pointer
--------------------------------------------------------------------

To be written.
Example:
Usage of pointers is limited.  Pointers passed as parameters are
always checked for validity.


Documentation for MISRA C:2012 Dir 4.1: access using out-of-bounds pointer
--------------------------------------------------------------------------

To be written.
Example:
Pointers are never uses to access arrays: indices are always used
instead.


Documentation for MISRA C:2012 Dir 4.1: access using unaligned pointer
----------------------------------------------------------------------

To be written.
Example:
Pointer conversion that may result in unaligned pointers are never used.


Documentation for MISRA C:2012 Dir 4.1: mistyped access to object
-----------------------------------------------------------------

To be written.
Example:
Pointer conversions that may result in mistyped accesses to objects
are never used.


Documentation for MISRA C:2012 Dir 4.1: mistyped access to function
-------------------------------------------------------------------

To be written.
Example:
The code never uses function pointers.


Documentation for MISRA C:2012 Dir 4.1: invalid pointer arithmetic
------------------------------------------------------------------

To be written.
Example:
Pointer arithmetic is never used.


Documentation for MISRA C:2012 Dir 4.1: invalid pointer comparison
------------------------------------------------------------------

To be written.
Example:
Arrays are always accessed using indices instead of pointers.  Pointers
are only compared to NULL.


Documentation for MISRA C:2012 Dir 4.1: overlapping copy
--------------------------------------------------------

To be written.
Example:
The code never uses memcpy() and does not perform assignment of
overlapping objects (which is doable only via pointers).


Documentation for MISRA C:2012 Dir 4.1: invalid arguments to function
---------------------------------------------------------------------

To be written.
Example:
All parameters to functions are checked for validity.


Documentation for MISRA C:2012 Dir 4.1: returned function error
---------------------------------------------------------------

To be written.
Example:
All functions that may produce an error, do returns a suitable status code
that is checked at each call site.


Documentation for MISRA C:2012 Dir 4.1: tainted input
-----------------------------------------------------

To be written.
Example:
All parameters of all functions in the API are checked before being used.


Documentation for MISRA C:2012 Dir 4.1: data race
-------------------------------------------------

To be written.
Example:
No function in this code is meant to be executed from interrupt handlers or
in a multi-threading environment.


Nocumentation for MISRA C:2012 Dir 4.1: invariant violation
-----------------------------------------------------------

To be written.  Change "Nocumentation" to "Documentation" when done.


Documentation for MISRA C:2012 Dir 4.1: communication error
-----------------------------------------------------------

To be written.
Example:
This project does not involve any external communication.

*/
#endif
