#ifndef ENTRY_H
#define ENTRY_H

#include "core/application.h"

application_config config_app();

int main(int argc, char* argv[])
{
    application_config config = config_app();

    application app;

    start_app(&app, &config);

    end_app(&app);
}

#endif