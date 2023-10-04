#pragma once

#include "openPMD/config.hpp"

#if openPMD_HAVE_ADIOS2

#include <adios2.h>

/*
 * ADIOS2 v2.8 brings mode::ReadRandomAccess
 */
#define openPMD_HAS_ADIOS_2_8                                                  \
    (ADIOS2_VERSION_MAJOR * 100 + ADIOS2_VERSION_MINOR >= 208)
/*
 * ADIOS2 v2.9 brings modifiable attributes (technically already in v2.8, but
 * there are too many bugs, so we only support it beginning with v2.9).
 * Group table feature requires ADIOS2 v2.9.
 */
#define openPMD_HAS_ADIOS_2_9                                                  \
    (ADIOS2_VERSION_MAJOR * 100 + ADIOS2_VERSION_MINOR >= 209)

#else

#define openPMD_HAS_ADIOS_2_8 0
#define openPMD_HAS_ADIOS_2_9 0

#endif
