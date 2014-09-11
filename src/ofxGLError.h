//
//  ofxGLError.h
//  BaseApp
//
//  Created by Oriol Ferrer Mesià on 11/09/14.
//
//

#ifndef ofxGLError_h
#define ofxGLError_h

#include "ofMain.h"

class ofxGLError{

	public:


	static string getError(){

		string err;
		//https://www.opengl.org/wiki/GLAPI/glGetError
		GLenum glErr = glGetError();
		
		switch (glErr) {
			case GL_NO_ERROR: err = "GL_NO_ERROR"; break;
			case GL_INVALID_ENUM: err = "GL_INVALID_ENUM"; break;
			case GL_INVALID_VALUE: err = "GL_INVALID_VALUE"; break;
			case GL_INVALID_OPERATION: err = "GL_INVALID_OPERATION"; break;
			case GL_INVALID_FRAMEBUFFER_OPERATION: err = "GL_INVALID_FRAMEBUFFER_OPERATION"; break;
			case GL_OUT_OF_MEMORY: err = "GL_OUT_OF_MEMORY"; break;
			case GL_STACK_UNDERFLOW: err = "GL_STACK_UNDERFLOW"; break;
			case GL_STACK_OVERFLOW: err = "GL_STACK_OVERFLOW"; break;
		}
		return err;
	}

	static void draw(int x, int y){
		ofDrawBitmapStringHighlight(getError(), x, y);
	}
};

#endif