class StageTI
{
	texture="ACREFR_Backpacks\Models\data\tf_bussole_ti_ca.paa";
};
ambient[]={1,1,1,1};
diffuse[]={1,1,1,1};
forcedDiffuse[]={0,0,0,1};
emmisive[]={0,0,0,1};
specular[]={0.67450982,0.67450982,0.67450982,1};
specularPower=95;
PixelShaderID="Super";
VertexShaderID="Super";
class Stage1
{
	texture="ACREFR_Backpacks\Models\data\tf_bussole_nohq.paa";
	uvSource="tex";
	class uvTransform
	{
		aside[]={1,0,0};
		up[]={0,1,0};
		dir[]={0,0,0};
		pos[]={0,0,0};
	};
};
class Stage2
{
	texture="#(argb,8,8,3)color(0.5,0.5,0.5,0.5,DT)";
	uvSource="tex1";
	class uvTransform
	{
		aside[]={1,0,0};
		up[]={0,1,0};
		dir[]={0,0,0};
		pos[]={0,0,0};
	};
};
class Stage3
{
	texture="#(argb,8,8,3)color(0,0,0,0,MC)";
	uvSource="tex1";
	class uvTransform
	{
		aside[]={1,0,0};
		up[]={0,1,0};
		dir[]={0,0,0};
		pos[]={0,0,0};
	};
};
class Stage4
{
	texture="ACREFR_Backpacks\Models\data\tf_bussole_as.paa";
	uvSource="tex";
	class uvTransform
	{
		aside[]={1,0,0};
		up[]={0,1,0};
		dir[]={0,0,0};
		pos[]={0,0,0};
	};
};
class Stage5
{
	texture="ACREFR_Backpacks\Models\data\tf_bussole_smdi.paa";
	uvSource="tex";
	class uvTransform
	{
		aside[]={1,0,0};
		up[]={0,1,0};
		dir[]={0,0,0};
		pos[]={0,0,0};
	};
};
class Stage6
{
	texture="#(ai,64,64,1)fresnel(2.73,1.19)";
	uvSource="none";
};
class Stage7
{
	texture="a3\data\env_land_co.paa";
	uvSource="none";
};
