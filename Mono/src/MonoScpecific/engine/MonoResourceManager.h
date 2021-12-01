#pragma once
#include <resourceManagment/TextureRes.h>
#include <Texture.h>
#include <Custom.h>
#include <resourceManagment/ShaderLoader.h>
#include <resourceManagment/ObjLoader.h>
#include <3dRender/Material.h>
namespace monoEngine
{
	class ResourceManager
	{
	private:
		//textureStrings;
		const std::string woodTextureFileRef{ "G:\\Programming\\c++\\MonoEngine\\Mono\\Textures\\drevo.jpg" };
		const std::string ironTextureFileRef{ "G:\\Programming\\c++\\MonoEngine\\Mono\\Textures\\iron.jpg" };
		const std::string cubeTextureFileRef{ "G:\\Programming\\c++\\MonoEngine\\Mono\\Textures\\CubeTex.png" };
		const std::string rasterTextureFileRef{ "G:\\Programming\\c++\\MonoEngine\\Mono\\Textures\\Raster4k.png" };
		const std::string treeTextureFileRef{ "G:\\Programming\\c++\\MonoEngine\\Mono\\Textures\\TreeTexture.png" };
		const std::string bricksTextureFileRef{ "G:\\Programming\\c++\\MonoEngine\\Mono\\Textures\\BricksFlemishRed.jpg" };
		const std::string bricksNormalTextureFileRef{ "G:\\Programming\\c++\\MonoEngine\\Mono\\Textures\\BricksFlemishRedNormal.png" };
		//UI textures
		const std::string textTextureFileRef{ "G:\\Programming\\c++\\MonoEngine\\Mono\\Textures\\text\\Font1_1.bmp" };
		const std::string btnTextureFileRef{ "G:\\Programming\\c++\\MonoEngine\\Mono\\Textures\\btn.png" };

		void loadShaders();
	public:
		static ResourceManager* s_inst;
		ResourceManager();
		~ResourceManager();


		shader_file sh1;
		shader_file sh2;
		shader_file sh3;
		shader_file sh4;
		shader_file sh5Normal;

		//text
		Texture textTexture;
		//UI
		Texture btnTexture;
		//ambient
		Texture woodTexture;
		Texture ironTexture;
		Texture rasterTexture;
		Texture treeTexture;
		Texture bricksTexture;
		//normal
		Texture bricksNormalTexture;

		//Material woodsNormalMaterial;
		Material wireframe;
		Material crossMat;
		Material flatface;
		Material woodMaterial;
		Material ironMaterial;
		Material treeMaterial;
		Material rasterMaterial;
		Material bricksMaterial;
		Material bricksNormalMat;

		ObjLoader MonkeyObj;
		ObjLoader TreeObj;
		ObjLoader RasterPlaneObj;
		ObjLoader CottageObj;
		FaceScript cross;


	};
}


