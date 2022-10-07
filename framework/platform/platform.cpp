//
// Created by xuzaixiang on 2022/10/7.
//

#include "platform.h"

using namespace gapi;

Platform::ExitCode Platform::initialize(const std::vector<Plugin *> &plugins) {
    return Platform::ExitCode::GSUCCESS;
}

Platform::ExitCode Platform::loop() {
    return Platform::GERROR;
}

void Platform::terminate(Platform::ExitCode code) {

}
