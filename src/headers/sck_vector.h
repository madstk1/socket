#ifndef SCK_VECTOR_H
#define SCK_VECTOR_H

#include <stdint.h>
#include <sck_core.h>

struct sck_vector_s {
    void        **data;
    uint16_t    size;
};

sck_vector_t *sck_vector_create ();
void sck_vector_push (sck_vector_t *, void *element);
void sck_vector_pop  (sck_vector_t * );
void sck_vector_set  (sck_vector_t *, int index, void *element);
void *sck_vector_get (sck_vector_t *, int index);

#endif /* SCK_VECTOR_H */