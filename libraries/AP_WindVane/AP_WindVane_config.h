#pragma once

#include <AP_HAL/AP_HAL_Boards.h>

#include <AP_Airspeed/AP_Airspeed_config.h>
#include <AP_RPM/AP_RPM_config.h>

#ifndef AP_WINDVANE_ENABLED
#define AP_WINDVANE_ENABLED 1
#endif

#ifndef AP_WINDVANE_BACKEND_DEFAULT_ENABLED
#define AP_WINDVANE_BACKEND_DEFAULT_ENABLED AP_WINDVANE_ENABLED
#endif

#ifndef AP_WINDVANE_AIRSPEED_ENABLED
#define AP_WINDVANE_AIRSPEED_ENABLED AP_WINDVANE_BACKEND_DEFAULT_ENABLED && AP_AIRSPEED_ENABLED
#endif

#ifndef AP_WINDVANE_ANALOG_ENABLED
#define AP_WINDVANE_ANALOG_ENABLED AP_WINDVANE_BACKEND_DEFAULT_ENABLED
#endif

#ifndef AP_WINDVANE_HOME_ENABLED
#define AP_WINDVANE_HOME_ENABLED AP_WINDVANE_BACKEND_DEFAULT_ENABLED
#endif

#ifndef AP_WINDVANE_MODERNDEVICE_ENABLED
#define AP_WINDVANE_MODERNDEVICE_ENABLED AP_WINDVANE_BACKEND_DEFAULT_ENABLED
#endif

#ifndef AP_WINDVANE_NMEA_ENABLED
#define AP_WINDVANE_NMEA_ENABLED AP_WINDVANE_BACKEND_DEFAULT_ENABLED
#endif

#ifndef AP_WINDVANE_RPM_ENABLED
#define AP_WINDVANE_RPM_ENABLED AP_WINDVANE_BACKEND_DEFAULT_ENABLED && AP_RPM_ENABLED
#endif

#ifndef AP_WINDVANE_SIM_ENABLED
#define AP_WINDVANE_SIM_ENABLED AP_WINDVANE_BACKEND_DEFAULT_ENABLED && AP_SIM_ENABLED
#endif