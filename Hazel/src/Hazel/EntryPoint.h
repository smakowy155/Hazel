#pragma once

#ifdef HZ_PLATROFM_WINDOWS 

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif