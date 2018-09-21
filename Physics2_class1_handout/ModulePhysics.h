#pragma once
#include "Module.h"
#include "Globals.h"
#define METERS_TO_PIXELS(pixels) { (int)(pixels * 100.0f)}
#define PIXEL_TO_METERS(meters) { (float)(meters * 0.1f) }
class b2World;

class ModulePhysics : public Module
{
public:
	ModulePhysics(Application* app, bool start_enabled = true);
	~ModulePhysics();

	bool Start();
	update_status PreUpdate();
	update_status PostUpdate();
	bool CleanUp();

private:
	b2World *world;
	bool debug;
};