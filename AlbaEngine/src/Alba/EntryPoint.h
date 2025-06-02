#pragma once

#ifdef AB_PLATFORM_WINDOWS

extern Alba::Application* Alba::CreateApplication();

int main(int argc, char** argv) {
	auto app = Alba::CreateApplication();
	app->Run();
	delete app;
}

#endif
