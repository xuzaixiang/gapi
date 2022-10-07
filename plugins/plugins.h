//
// Created by xuzaixiang on 2022/10/7.
//

#ifndef GAPI_PLUGINS_H
#define GAPI_PLUGINS_H

#include <vector>

#include <framework/plugin/plugin.h>

namespace gapi {
    extern std::vector<Plugin *> get_all_plugins();
}

#endif //GAPI_PLUGINS_H
