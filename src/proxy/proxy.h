#pragma once

#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include <event2/buffer.h>
#include <event2/bufferevent.h>

#include "context.h"
#include "logger.h"
#include "server.h"

struct bufferevent;

struct proxy_context {
    struct bufferevent *out_bev;
};

struct proxy_context *alloc_proxy_context(struct bufferevent *bev);

void free_proxy_context(struct proxy_context *ctx);

void proxy_read_cb(struct bufferevent *bev, void *arg);

void proxy_event_cb(struct bufferevent *bev, short events, void *arg);


