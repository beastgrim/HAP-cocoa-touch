//
//  sockets.h
//  HAPPairing
//
//  Created by Евгений Богомолов on 07/04/2018.
//  Copyright © 2018 Give Me App. All rights reserved.
//

#ifndef lwip_sockets_h
#define lwip_sockets_h

#include <stdio.h>
#include <sys/poll.h>
#include <sys/errno.h>

#define lwip_read         read
#define lwip_readv        readv
#define lwip_write        write
#define lwip_writev       writev
#undef lwip_close
#define lwip_close        close
#define closesocket(s)    close(s)
#undef lwip_ioctl
#define lwip_ioctl        ioctl
#define ioctlsocket       ioctl



void sdk_system_restart();

enum {
    STATION_IDLE = 0,
    STATION_CONNECTING,
    STATION_WRONG_PASSWORD,
    STATION_NO_AP_FOUND,
    STATION_CONNECT_FAIL,
    STATION_GOT_IP
};

uint8_t sdk_wifi_station_get_connect_status(void);

#endif /* sockets_h */
