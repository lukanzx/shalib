#pragma once

#include <event2/util.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include <event2/buffer.h>
#include <event2/bufferevent.h>
#include <event2/event.h>
#include <event2/listener.h>
#include <sodium.h>
#include "config.h"
#include "context.h"
#include "logger.h"
#include "proxy.h"
#include "socks.h"
#include "aead.h"
#include "cipher.h"
#include "tcp.h"

struct evconnlistener;
struct sockaddr;
struct bufferevent;

void client_accept_cb(
        struct evconnlistener *listener,
        evutil_socket_t fd,
        struct sockaddr *addr,
        int socklen,
        void *arg
);

void client_read_cb(struct bufferevent *bev, void *arg);

void client_event_cb(
        struct bufferevent *bev,
        short events,
        void *arg
);


