# Tangram
The tangram is a dissection puzzle consisting of seven flat polygons which are put together to form shapes. The objective is to replicate a pattern using all seven pieces without overlap.

## Description
The Tangram project was developed as part of a Computer Graphics course. This project brings the classic Tangram puzzle to life in 3D, allowing users to complete the puzzle by moving and rotating each piece. Developed using Visual Studio IDE and the Vulkan SDK, it incorporates GLS and GLSL libraries to manage the graphics and shaders effectively. The game offers an interactive and engaging experience, challenging users to solve the puzzle with the help of numerical keys for piece selection and control.

## Technologies
- **Programming Language:** C++
- **Graphics:** Vulkan SDK, GLS, GLSL
- **IDE:** Visual Studio

## Key Features
- Empty tray at the start for users to place and manipulate pieces.
- Piece selection and manipulation using numerical keys for movement and rotation.
- Hit detection implemented between pieces and the tray borders.
- Adjustable point of view with different angles and heights.
- A solution button to show the solution if the user is unable to solve the puzzle.

## Installation
The project is contained within the `Tangram_proj` folder. To set up and run the project, follow these steps:
1. Ensure you have Visual Studio and the Vulkan SDK installed on your system.
2. Clone the repository or download the `Tangram_proj` folder to your local machine.
3. Open the project in Visual Studio by navigating to the project folder and opening the solution file.
4. Build and run the project from within Visual Studio.

## How to Play
- **WASD:** Move the game camera.
- **1-7:** Select pieces.
- **Left/Right Arrows:** Rotate the selected piece.
- **Spacebar:** Display the solution.
- **0:** Enter visual mode to change the camera angle and inclination using WASD or the arrow keys.

On game startup, commands are displayed on-screen for user reference.

## Dependencies
The project relies on external assets contained within the `10-Tangram>Pieces` folder, including pieces and textures used for the pieces, environment, and tray.

## Contributing
This project was developed for academic purposes and is not currently seeking contributions. However, feedback and suggestions are welcome.
Special thanks to my colleague and team mate MAria Chiara di Falco

## Support
For support or further information, please contact me at [lore.bancle@gmail.com].
