//
// Created by xuzaixiang on 2022/10/7.
//

#ifndef GAPI_WINDOW_H
#define GAPI_WINDOW_H

#include <string>

namespace gapi
{
class Window
{
  public:
	struct Extent
	{
		uint32_t width;
		uint32_t height;
	};
	enum class Mode
	{
		Headless,
		Fullscreen,
		FullscreenBorderless,
		FullscreenStretch,
		Default
	};
	enum class Vsync
	{
		OFF,
		ON,
		Default
	};
	struct Properties
	{
		std::string title;
		Mode        mode       = Mode::Default;
		bool        resizeable = true;
		Vsync       vsync      = Vsync::Default;
		Extent      extent     = {1280, 720};
	};
};
}        // namespace gapi

#endif        // GAPI_WINDOW_H
