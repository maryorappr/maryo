#include <maryo.h>

class Sandbox : public maryo::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

maryo::Application* maryo::CreateApplication()
{
	return new Sandbox();
}