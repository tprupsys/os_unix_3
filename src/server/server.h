//
//      Tomas Petras Rupsys
//

#ifndef server_H
#define server_H

#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "processor.h"

#define MAX_CLIENTS 10
#define MAX_BUFFER_LEN 1024
#define SERVER_PORT 65000
#define SLA 500

void start_server();

#endif
