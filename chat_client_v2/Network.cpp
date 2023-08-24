#define _WINSOCK_DEPRECATED_NO_WARNINGS
#pragma warning(disable: 4996)

#include <iostream>
#include <cstring>

#ifdef _WIN32
#include <winsock2.h>
#pragma comment(lib, "ws2_32.lib")
#else
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#endif

#include "Message.h"

#define MESSAGE_BUFFER 4096
#define PORT 7777

static char buffer[MESSAGE_BUFFER];
static char message[MESSAGE_BUFFER];

#ifdef _WIN32
static SOCKET socket_descriptor;
#else
static int socket_descriptor
#endif

static struct sockaddr_in serveraddress;
