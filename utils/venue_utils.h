#ifndef CAPK_VENUE_UTILS
#define CAPK_VENUE_UTILS

#include "types.h" 
#include "constants.h" 
#include "venue_globals.h"

namespace capk
{


    // Retrieve venue_id for a given MIC string
    venue_id_t micStringToVenueId(const char* mic); 
    const char* const venueIdToMICCString(const venue_id_t venue_id);
}

#endif // CAPK_VENUE_GLOBALS