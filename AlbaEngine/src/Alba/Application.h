#pragma once
#include "Core.h"

namespace Alba {

	class ALBA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in client
	Application* CreateApplication();
}
