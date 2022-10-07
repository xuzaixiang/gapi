//
// Created by xuzaixiang on 2022/10/7.
//

#ifndef GAPI_PLATFORM_WIN_H
#define GAPI_PLATFORM_WIN_H

#include "framework/platform/platform.h"

namespace gapi{
    class WinPlatform : public Platform {
    public:
        ExitCode initialize(const std::vector<Plugin *> &plugins) override;

	    void create_window(const Window::Properties &properties) override;
    };

}


#endif        // GAPI_PLATFORM_WIN_H
