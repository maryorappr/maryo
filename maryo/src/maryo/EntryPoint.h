#pragma once

#ifdef MO_PLATFORM_WINDOWS

extern maryo::Application* maryo::CreateApplication();

int main(int argc, char** argv)
{
	auto app = maryo::CreateApplication();
	app->Run();
	delete app;
}

#endif