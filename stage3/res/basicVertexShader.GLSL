#version 330 core

layout(location = 0) in vec3 position;
layout(location = 1) in vec2 texCoordIn;
layout(location = 2) in vec3 normal;

uniform mat4 perspective;
uniform mat4 view;
uniform mat4 model;

out vec2 texCoordOut;
out vec3 normalOut;

uniform sampler2D ourTexture;

void main(){
	gl_Position = perspective*view*model*(vec4(position, 1.0));
	texCoordOut = texCoordIn;
	normalOut = normal;
}