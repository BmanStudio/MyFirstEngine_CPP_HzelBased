#pragma once

#ifdef GE_PLATFORM_WINDOWS

extern GameEngine::Application* GameEngine::CreateApplication();

int main(int argc, char** argv)
{
	GameEngine::Log::Init();

	GE_WARN("client log warn");
	GE_INFO("client log info");
	GE_CORE_INFO("core log info");
	GE_CORE_ERROR("Core Error Log");

	auto app = GameEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif // GE_PLATFORM_WINDOWS

