
#### ShaServer
Implementation of an SSL proxy server based on the libevent framework

Furthermore, this project only exists for the purpose of learning network programming

#### Requires
 - libevent for asynchronous I/O and event loop.
 - libsodium for AEAD_CHACHA20_POLY1305 cipher and helpers.
 - mbedtls for key derivation.

#### Test on
 - Ubuntu Server 22.04
 - libevent 2.12.2-stable
 - libsodium 1.0.18-stable
 - mbedtls 2.25.0
