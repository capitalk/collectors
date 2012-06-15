#ifndef CAPK_BBO
#define CAPK_BBO

#include <time.h>
#include "types.h"

#define MIC_LEN 5
#define SYMBOL_LEN 8

namespace capk {

struct BBO
{
    char MIC_name[MIC_LEN];
	char symbol[SYMBOL_LEN];
    double bid_price;
    double ask_price;
    double bid_size;
    double ask_size;
    timespec last_update; 
    
};

typedef struct BBO BBO_t;



#define MAX_MICS 126

} // namespace capk

#endif // CAPK_BBO