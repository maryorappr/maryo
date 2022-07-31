#pragma once

#ifdef MO_PLATFORM_WINDOWS

extern maryo::Application* maryo::CreateApplication();

int main(int argc, char** argv)
{
	printf("maryo engine\n");
	auto app = maryo::CreateApplication();
	app->Run();
	delete app;
}

#endif