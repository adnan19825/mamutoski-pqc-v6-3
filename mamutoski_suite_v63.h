#ifndef MAMUTOSKI_SUITE_V63_H
#define MAMUTOSKI_SUITE_V63_H
#include <stdint.h>
// NIST L5 HYBRID ARCHITECTURE (17,318 Bytes)
#define MAM_TOTAL_PAYLOAD_SIZE 17347 
typedef struct {
    uint8_t ml_kem_ct[1568];    /* FIPS 203 Primary */
    uint8_t hqc_ct[7249];       /* Hybrid Backup */
    uint8_t bike_ct[5154];      /* Resilience Layer */
    uint8_t falcon_sig[1280];   /* FIPS 204 Auth */
    uint8_t hash[64];           /* Integrity */
} mamutoski_payload_t;
int mamutoski_encaps(mamutoski_payload_t* ctx);
#endif
