# cpp-glad-glfw

This project initializes the following:
* GLAD
* GLFW
* Makefile
---
To use:
* Download template; this will be referred to as **"template_dir/"**
* Download GLFW pre-compiled binaries from [GLFW Downloads](https://www.glfw.org/download)
	* Open the downloaded ZIP file
	* Copy the **contents** of **glfw.zip/include** into **template_dir/include**
	* Copy the **contents** of **glfw.zip/lib-mingw-w64** into **template_dir/lib**
* Download GLAD from [GLAD Downloads](https://glad.dav1d.de)
	* Select API.GL version (>3.3, recommended 4.6)
	* Select profile CORE
	* At the bottom, select Generate a loader & Local Files
	* Click Generate
	* Download the zip file
		* Move **glad.c** into **template_dir/src**
		* Move **glad.h** and **khrplatform.h** into **template_dir/include**
* Test the setup by running "make" and then run the "main" executable.
