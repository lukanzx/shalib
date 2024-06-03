#pragma once

#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include <event2/bufferevent.h>
#include <event2/dns.h>
#include <event2/event.h>
#include <event2/listener.h>

#include "client.h"
#include "config.h"
#include "logger.h"
#include "server.h"

// INET6_ADDRSTRLEN + 1 + 5
#define STR_ADDR_LEN 52

struct sockaddr;

void tcp_client();

void tcp_server();

void str_addr(
        char *str,
        int str_len,
        struct sockaddr *addr
);


