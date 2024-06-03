#pragma once

#include <stddef.h>
#include <stdint.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include <event2/buffer.h>
#include <event2/bufferevent.h>
#include <event2/event.h>

#include "config.h"
#include "context.h"
#include "logger.h"

#define MAX_ADDR_LENGTH 259

struct evbuffer;

enum CMD {
    CONNECT = 0x01, BIND = 0x02, UDP_ASSOCIATE = 0x03
};

enum ATYP {
    IPv4 = 0x01, DOMAINNAME = 0x03, IPv6 = 0x04
};

int handshake(struct evbuffer *buf, struct context *ctx);

int read_tgt_addr(
        struct evbuffer *r,
        uint8_t *addr,
        size_t *addr_len
);
