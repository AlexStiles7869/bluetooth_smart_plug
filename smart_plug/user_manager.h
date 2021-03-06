#ifndef USER_MANAGER_H
#define USER_MANAGER_H

#if defined(__cplusplus)
extern "C" {
#endif

#include <stdint.h>

#include "connection.h"
#include "user.h"

void get_user_data(Connection_t* connection, uint8_t* packet_buf);
void create_user(Connection_t* connection, User_t* user);

#if defined(__cplusplus)
}
#endif

#endif // USER_MANAGER_H