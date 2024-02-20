// Create the world matrix for the robot
glm::mat4 getRobotWorldMatrix(GLFWwindow* window) {
	static glm::vec3 CamPos = glm::vec3(-3, 0, 2);	// variable to store robot position
												// here glm::vec3(-3,0,2) represents a
												// meaningful initial position for the robot
												//
												// this variable is here just as an example!
												// it should replaced or combined with
												//  the ones you think necessary for the task


	static glm::mat3 CamDir = glm::mat3(1.0f);
	static auto startTime = std::chrono::high_resolution_clock::now();
	static float lastTime = 0.0f;

	auto currentTime = std::chrono::high_resolution_clock::now();
	float time = std::chrono::duration<float, std::chrono::seconds::period>
		(currentTime - startTime).count();
	float deltaT = time - lastTime;
	lastTime = time;

	const float ROT_SPEED = glm::radians(270.0f);
	const float MOVE_SPEED = 5.0f;

	static float debounce = time;


	static float Deg = 0.0f;
	static glm::vec3 DirVec = glm::vec3(0, 1, 0);


	if (glfwGetKey(window, GLFW_KEY_A)) {
		//CamPos -= MOVE_SPEED * glm::vec3(CamDir[0]) * deltaT;
		CamPos[0] = CamPos[0] - MOVE_SPEED * deltaT;
		if (CamPos[0] < -10) CamPos[0] = -10;
		Deg = glm::radians(180.0f);
		DirVec = CamDir[1];

	}
	if (glfwGetKey(window, GLFW_KEY_D)) {
		CamPos += MOVE_SPEED * glm::vec3(CamDir[0]) * deltaT;
		if (CamPos[0] > 10) CamPos[0] = 10;
		Deg = glm::radians(0.0f);
		DirVec = CamDir[1];


	}
	if (glfwGetKey(window, GLFW_KEY_S)) {
		CamPos += MOVE_SPEED * glm::vec3(CamDir[2]) * deltaT;
		if (CamPos[2] > 10) CamPos[2] = 10;
		Deg = glm::radians(-90.0f);
		DirVec = CamDir[1];


	}
	if (glfwGetKey(window, GLFW_KEY_W)) {
		CamPos -= MOVE_SPEED * glm::vec3(CamDir[2]) * deltaT;
		if (CamPos[2] < -10) CamPos[2] = -10;
		Deg = glm::radians(90.0f);
		DirVec = CamDir[1];


	}
	if (glfwGetKey(window, GLFW_KEY_R)) {
		//CamPos -= MOVE_SPEED * glm::vec3(CamDir[1]) * deltaT;
		Deg = glm::radians(45.0f);
		DirVec = CamDir[1];

	}


	glm::mat4 out, m1;

	m1 = glm::translate(glm::transpose(glm::mat4(CamDir)), CamPos);
#include <iostream>
	using namespace std;
	std::cout << "DEG:   " << Deg * 360 / (2 * 3.14) << endl;

	
		std::cout << "posizione  " << SceneToLoad[0].pos.x << endl;

	out = glm::rotate(m1, Deg, DirVec);
	//out = glm::translate(glm::mat4(1), CamPos);	// this line has to be changed!
												// it is here just to allow the program to
												// be compiled and run
	return out;
}

