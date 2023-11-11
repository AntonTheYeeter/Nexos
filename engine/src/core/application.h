#ifndef APPLICATION_H
#define APPLICATION_H

#include "def.h"

typedef struct
{
    const char* application_name;
    u32 window_width;
    u32 window_height;
    u32 application_version_major;
    u32 application_version_minor;
    u32 application_version_patch;
} application_config;

typedef struct
{
    application_config* config;
    b8 running;
} application;

NXAPI b8 start_app(application* app, application_config* config);
NXAPI void end_app(application* app);

#endif