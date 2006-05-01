#ifndef _FIFO_H
#define _FIFO_H 1

#include <stdint.h>

typedef struct {
    uint8_t *buffer;
    uint8_t capacity;
    uint8_t size;
    volatile uint8_t read;
    volatile uint8_t write;
} fifo;

uint8_t isFifoFull(fifo *c);
uint8_t isFifoEmpty(fifo *c);
uint8_t fifoSize(fifo *c);
uint8_t fifoGet(fifo *c);
void fifoPut(fifo *c, uint8_t p);
fifo* fifoCreate(uint8_t capacity);
#endif
