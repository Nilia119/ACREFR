class StageTI
{
	texture="a3\weapons_f\rifles\trg20\data\tar21_ti_ca.paa";
};
ambient[]={1,1,1,1};
diffuse[]={1,1,1,1};
forcedDiffuse[]={0,0,0,0};
emmisive[]={0,0,0,1};
specular[]={0.1,0.1,0.1,1};
specularPower=30;
PixelShaderID="Super";
VertexShaderID="Super";
class Stage1
{
	texture="ACREFR_Backpacks\Models\data\backpack_nohq.paa";
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
	texture="#(argb,8,8,3)color(0.5,0.5,0.5,1,DT)";
	uvSource="tex";
	class uvTransform
	{
		aside[]={0,9,0};
		up[]={4.5,0,0};
		dir[]={0,0,0};
		pos[]={0,0,0};
	};
};
class Stage3
{
	texture="#(argb,8,8,3)color(0.5,0.5,0.5,0,MC)";
	uvSource="tex";
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
	texture="#(argb,8,8,3)color(1,1,1,1,AS)";
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
	texture="ACREFR_Backpacks\Models\data\backpack_smdi.paa";
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
	texture="#(ai,16,2,2)fresnel(10.4,8.3)";
	uvSource="tex";
	class uvTransform
	{
		aside[]={1,0,0};
		up[]={0,1,0};
		dir[]={0,0,1};
		pos[]={0,0,0};
	};
};
class Stage7
{
	texture="a3\data_f\env_land_co.paa";
	uvSource="tex";
	class uvTransform
	{
		aside[]={1,0,0};
		up[]={0,1,0};
		dir[]={0,0,0};
		pos[]={0,0,0};
	};
};
