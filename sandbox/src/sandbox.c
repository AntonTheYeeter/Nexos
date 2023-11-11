#include <entry.h>

application_config config_app()
{
    application_config config =
    {
        .application_name = "Nexos Sandbox",
        .window_width = 1280,
        .window_height = 720,
        .application_version_major = 0,
        .application_version_minor = 0,
        .application_version_patch = 1
    };

    return config;
}