//
// Created by xuzaixiang on 2022/10/7.
//

#include "framework/platform/platform.h"
#include <cstdlib>

using namespace gapi;

#if defined(_WIN32)

#	include "framework/platform/platform_win.h"
#	include <Windows.h>

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, INT nCmdShow) {
	WinPlatform platform;
#endif
    auto code = platform.initialize({});
    if (code == Platform::ExitCode::GSUCCESS) {
        code = platform.loop();
    }
    platform.terminate(code);
    return EXIT_SUCCESS;
}

