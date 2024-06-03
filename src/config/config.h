#pragma once

#include <stddef.h>

enum config {
    SERVER_HOST, SERVER_PORT, LOCAL_PORT, PASSWORD
};

enum mode {
    SERVER, CLIENT
};

void set_mode(enum mode m);

enum mode get_mode();

const char *get_config(enum config c);

void set_config(enum config c, const char *value);



