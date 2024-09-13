cmake_minimum_required(VERSION 3.22.1)
project(ShaServer)
set(CMAKE_CXX_STANDARD 17)

include_directories(/usr/include)
include_directories(/usr/local/include)

include_directories(src/aead)
include_directories(src/cipher)
include_directories(src/client)
include_directories(src/config)
include_directories(src/context)
include_directories(src/logger)
include_directories(src/proxy)
include_directories(src/server)
include_directories(src/socks)
include_directories(src/tcp)

add_executable(${CMAKE_PROJECT_NAME}
        src/main.cpp
        src/aead/aead.cpp
        src/aead/aead.h
        src/cipher/cipher.cpp
        src/cipher/cipher.h
        src/client/client.cpp
        src/client/client.h
        src/config/config.cpp
        src/config/config.h
        src/context/context.cpp
        src/context/context.h
        src/logger/logger.h
        src/proxy/proxy.cpp
        src/proxy/proxy.h
        src/server/server.cpp
        src/server/server.h
        src/socks/socks.cpp
        src/socks/socks.h
        src/tcp/tcp.cpp
        src/tcp/tcp.h
)

target_link_libraries(${CMAKE_PROJECT_NAME}
        /lib/x86_64-linux-gnu/libjsoncpp.so
        /lib/x86_64-linux-gnu/libsodium.so
        /lib/x86_64-linux-gnu/libmbedcrypto.so
        /lib/x86_64-linux-gnu/libevent.so
)
