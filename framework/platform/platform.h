//
// Created by xuzaixiang on 2022/10/7.
//

#ifndef GAPI_PLATFORM_H
#define GAPI_PLATFORM_H

#include "framework/plugin/plugin.h"
#include "window.h"

#include <vector>

namespace gapi
{
class Platform
{
  public:
	enum ExitCode
	{
		GSUCCESS = 0,
		GHELP,
		GCLOSE,
		GERROR
	};

	virtual ExitCode initialize(const std::vector<Plugin *> &plugins);

	virtual ExitCode loop();

	virtual void terminate(ExitCode code);

	virtual void create_window(const Window::Properties &properties) = 0;
};
}        // namespace gapi
#endif        // GAPI_PLATFORM_H
