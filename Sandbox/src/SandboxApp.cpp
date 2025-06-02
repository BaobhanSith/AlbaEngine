#include <Alba.h>

class Sandbox : public Alba::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Alba::Application* Alba::CreateApplication() {
	return new Sandbox;
}