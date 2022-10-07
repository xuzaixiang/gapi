//
// Created by xuzaixiang on 2022/10/7.
//

#include "platform_win.h"
using namespace gapi;

Platform::ExitCode WinPlatform::initialize(const std::vector<Plugin *> &plugins) {
    return Platform::initialize(plugins);
}
void WinPlatform::create_window(const Window::Properties &properties)
{
}
