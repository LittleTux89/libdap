/**
 * \file kex_rlwe_msrln16.h
 * \brief Header for ring-LWE key exchange protocol from the Microsoft LatticeCrypto library
 */

#ifndef __OQS_KEX_RLWE_MSRLN16_H
#define __OQS_KEX_RLWE_MSRLN16_H

#include <stddef.h>
#include <stdint.h>

#include "../kex/kex.h"
#include "../crypto/rand/rand.h"
//с симлинком беда какая-то, поэтому так пока

/*#include <oqs/kex.h>
#include <oqs/rand.h>*/

#ifdef __cplusplus
extern "C" {
#endif

OQS_KEX *OQS_KEX_rlwe_msrln16_new(OQS_RAND *rand);

int OQS_KEX_rlwe_msrln16_alice_0(OQS_KEX *k, void **alice_priv, uint8_t **alice_msg, size_t *alice_msg_len);
int OQS_KEX_rlwe_msrln16_bob(OQS_KEX *k, const uint8_t *alice_msg, const size_t alice_msg_len, uint8_t **bob_msg, size_t *bob_msg_len, uint8_t **key, size_t *key_len);
int OQS_KEX_rlwe_msrln16_alice_1(OQS_KEX *k, const void *alice_priv, const uint8_t *bob_msg, const size_t bob_msg_len, uint8_t **key, size_t *key_len);

void OQS_KEX_rlwe_msrln16_alice_priv_free(OQS_KEX *k, void *alice_priv);
void OQS_KEX_rlwe_msrln16_free(OQS_KEX *k);

#ifdef __cplusplus
}
#endif

#endif
