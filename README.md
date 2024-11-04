# cpp-glad-glfw

This project initializes the following:
* GLAD
* GLFW
* Makefile
---
To use:
* Download template
* Download GLFW pre-compiled binaries from [GLFW Downloads](https://www.glfw.org/download)
	* Open the downloaded ZIP file
	* Copy the **contents** of **glfw.zip/include** into the template's **include** folder
	* Copy the **contents** of **glfw.zip/lib-mingw-w64** into the template's **lib** folder
* Download GLAD from [GLAD Downloads](https://glad.dav1d.de)
	* Select API.GL version (>3.3, recommended 4.6)
	* Select profile CORE
	* At the bottom, select Generate a loader & Local Files
	* Click Generate
	* Download the zip file
		* Move **glad.c** into the template's **src** folder
		* Move **glad.h** and **khrplatform.h** into the template's **include** folder
* Test the setup by running "make" and then run the "main" executable.  