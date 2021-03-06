#ifndef CAMERACONTROLLER_H
#define CAMERACONTROLLER_H

#include "../stage3/graphics/Camera.h"

class CameraController
{
public:
	CameraController(s3::Camera* camIn);
	void keyInput(int key , bool pressed);
	void mouseInput(int dx, int dy);

	void update();
private:

	enum 
	{
		UP,
		DOWN,
		RIGHT,
		LEFT,
		FORWARD,
		BACK,
		NUM_MOVES,
	};

	bool moving[6];

	s3::Camera* camera;
};

#endif
