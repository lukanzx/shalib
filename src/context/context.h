#pragma once

#include <assert.h>
#include <stdlib.h>

struct context {
    int stage;
    struct bufferevent *out_bev;
};

struct context *alloc_context();

void free_context(struct context *ctx);


