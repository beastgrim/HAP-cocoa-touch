//
//  sockets.c
//  HAPPairing
//
//  Created by Евгений Богомолов on 07/04/2018.
//  Copyright © 2018 Give Me App. All rights reserved.
//

#include "lwip_sockets.h"

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdbool.h>
#include <unistd.h>

#include <sys/socket.h>
#include <netinet/in.h>

void sdk_system_restart() {
    
}


uint8_t sdk_wifi_station_get_connect_status(void) {
    return STATION_GOT_IP;
}

