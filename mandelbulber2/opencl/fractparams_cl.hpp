/**
 * Mandelbulber v2, a 3D fractal generator       ,=#MKNmMMKmmßMNWy,
 *                                             ,B" ]L,,p%%%,,,§;, "K
 * Copyright (C) 2014-17 Mandelbulber Team     §R-==%w["'~5]m%=L.=~5N
 *                                        ,=mm=§M ]=4 yJKA"/-Nsaj  "Bw,==,,
 * This file is part of Mandelbulber.    §R.r= jw",M  Km .mM  FW ",§=ß., ,TN
 *                                     ,4R =%["w[N=7]J '"5=],""]]M,w,-; T=]M
 * Mandelbulber is free software:     §R.ß~-Q/M=,=5"v"]=Qf,'§"M= =,M.§ Rz]M"Kw
 * you can redistribute it and/or     §w "xDY.J ' -"m=====WeC=\ ""%""y=%"]"" §
 * modify it under the terms of the    "§M=M =D=4"N #"%==A%p M§ M6  R' #"=~.4M
 * GNU General Public License as        §W =, ][T"]C  §  § '§ e===~ U  !§[Z ]N
 * published by the                    4M",,Jm=,"=e~  §  §  j]]""N  BmM"py=ßM
 * Free Software Foundation,          ]§ T,M=& 'YmMMpM9MMM%=w=,,=MT]M m§;'§,
 * either version 3 of the License,    TWw [.j"5=~N[=§%=%W,T ]R,"=="Y[LFT ]N
 * or (at your option)                   TW=,-#"%=;[  =Q:["V""  ],,M.m == ]N
 * any later version.                      J§"mr"] ,=,," =="""J]= M"M"]==ß"
 *                                          §= "=C=4 §"eM "=B:m|4"]#F,§~
 * Mandelbulber is distributed in            "9w=,,]w em%wJ '"~" ,=,,ß"
 * the hope that it will be useful,                 . "K=  ,=RMMMßM"""
 * but WITHOUT ANY WARRANTY;                            .'''
 * without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with Mandelbulber. If not, see <http://www.gnu.org/licenses/>.
 *
 * ###########################################################################
 *
 * Authors: Krzysztof Marczak (buddhi1980@gmail.com)
 *
 * sParamRenderCl struct - container for scene parameters
 *       ____                   ________
 *      / __ \____  ___  ____  / ____/ /
 *     / / / / __ \/ _ \/ __ \/ /   / /
 *    / /_/ / /_/ /  __/ / / / /___/ /___
 *    \____/ .___/\___/_/ /_/\____/_____/
 *        /_/
 *
 * This file has been autogenerated by tools/populateOpenCL.php
 * from the file src/fractparams.hpp
 * D O    N O T    E D I T    T H I S    F I L E !
 */

#ifndef MANDELBULBER2_OPENCL_FRACTPARAMS_CL_HPP_
#define MANDELBULBER2_OPENCL_FRACTPARAMS_CL_HPP_

#ifndef OPENCL_KERNEL_CODE
#include "../src/fractal_enums.h"
#include "../opencl/opencl_algebra.h"
#endif

typedef struct
{
	// constructor with init

	cl_int antialiasingSize;
	cl_int ambientOcclusionQuality; // ambient occlusion quality
	cl_int auxLightNumber;
	cl_int auxLightRandomNumber;
	cl_int auxLightRandomSeed;
	cl_int frameNo;
	cl_int imageHeight; // image height
	cl_int imageWidth;	// image width
	cl_int formulaMaterialId[NUMBER_OF_FRACTALS];
	cl_int minN; // minimum number of iterations
	cl_int N;
	cl_int reflectionsMax;
	cl_int repeatFrom;
	cl_int DOFNumberOfPasses;
	cl_int DOFSamples;
	cl_int DOFMinSamples;

#ifdef CLSUPPORT
	cl_int OpenCLDOFMethod;
	cl_int OpenCLEngine;
	cl_int OpenCLPixelsPerJob;
#endif

	cl_int antialiasingEnabled;
	cl_int ambientOcclusionEnabled; // enable global illumination
	cl_int auxLightPreEnabled[4];
	cl_int auxLightRandomEnabled;
	cl_int booleanOperatorsEnabled;
	cl_int constantDEThreshold;
	cl_int DOFEnabled;
	cl_int DOFHDRMode;
	cl_int DOFMonteCarlo;
	cl_int envMappingEnable;
	cl_int fakeLightsEnabled;
	cl_int fogEnabled;
	cl_int glowEnabled;
	cl_int hdrBlurEnabled;
	cl_int hybridFractalEnable;
	cl_int interiorMode;
	cl_int iterFogEnabled;
	cl_int legacyCoordinateSystem;
	cl_int limitsEnabled; // enable limits (intersections)
	cl_int mainLightEnable;
	cl_int mainLightPositionAsRelative;
	cl_int penetratingLights;
	cl_int raytracedReflections;
	cl_int shadow;			// enable shadows
	cl_int slowShading; // enable fake gradient calculation for shading
	cl_int SSAO_random_mode;
	cl_int texturedBackground; // enable textured background
	cl_int useDefaultBailout;
	cl_int volumetricLightEnabled[5];
	cl_int volumetricLightAnyEnabled;
	cl_int volFogEnabled;

#ifdef CLSUPPORT
	cl_int useCustomOCLFormula;
#endif

	cl_int3 auxLightPreColour[4];
	cl_int3 background_color1; // background colour
	cl_int3 background_color2;
	cl_int3 background_color3;
	cl_int3 fogColor;
	cl_int3 glowColor1;
	cl_int3 glowColor2;
	cl_int3 iterFogColour1;
	cl_int3 iterFogColour2;
	cl_int3 iterFogColour3;
	cl_int3 mainLightColour;
	cl_int3 volFogColour1;
	cl_int3 volFogColour2;
	cl_int3 volFogColour3;

	cl_float ambientOcclusion;
	cl_float ambientOcclusionFastTune;
	cl_float auxLightPreIntensity[4];
	cl_float auxLightVisibility;
	cl_float auxLightVisibilitySize;
	cl_float auxLightRandomRadius;
	cl_float auxLightRandomMaxDistanceFromFractal;
	cl_float auxLightRandomIntensity;
	cl_float background_brightness;
	cl_float backgroundHScale;
	cl_float backgroundVScale;
	cl_float backgroundTextureOffsetX;
	cl_float backgroundTextureOffsetY;
	cl_float cameraDistanceToTarget; // zoom
	cl_float constantFactor;
	cl_float DEFactor;		// factor for distance estimation steps
	cl_float detailLevel; // DE threshold factor
	cl_float DEThresh;
	cl_float DOFFocus;
	cl_float DOFRadius;
	cl_float DOFBlurOpacity;
	cl_float DOFMaxNoise;
	cl_float fakeLightsIntensity;
	cl_float fakeLightsVisibility;
	cl_float fakeLightsVisibilitySize;
	cl_float fogVisibility;
	cl_float formulaScale[NUMBER_OF_FRACTALS];
	cl_float fov; // perspective factor
	cl_float glowIntensity;
	cl_float hdrBlurIntensity;
	cl_float hdrBlurRadius;
	cl_float iterFogColor1Maxiter;
	cl_float iterFogColor2Maxiter;
	cl_float iterFogOpacity;
	cl_float iterFogOpacityTrim;
	cl_float mainLightAlpha;
	cl_float mainLightBeta;
	cl_float mainLightIntensity;
	cl_float mainLightVisibility;
	cl_float mainLightVisibilitySize;
	cl_float resolution; // resolution of image in fractal coordinates
	cl_float shadowConeAngle;
	cl_float smoothness;
	cl_float stereoEyeDistance;
	cl_float stereoInfiniteCorrection;
	cl_float sweetSpotHAngle;
	cl_float sweetSpotVAngle;
	cl_float viewDistanceMax;
	cl_float viewDistanceMin;
	cl_float volFogColour1Distance;
	cl_float volFogColour2Distance;
	cl_float volFogDensity;
	cl_float volFogDistanceFactor;
	cl_float volumetricLightIntensity[5];

	cl_float3 auxLightPre[4];
	cl_float3 auxLightRandomCenter;
	cl_float3 backgroundRotation;
	cl_float3 formulaPosition[NUMBER_OF_FRACTALS];
	cl_float3 formulaRotation[NUMBER_OF_FRACTALS];
	cl_float3 formulaRepeat[NUMBER_OF_FRACTALS];
	cl_float3 limitMin;
	cl_float3 limitMax;
	cl_float3 repeat;
	cl_float3 target;
	cl_float3 camera; // view point
	cl_float3 viewAngle;
	cl_float3 topVector;

	matrix33 mRotFormulaRotation[NUMBER_OF_FRACTALS];
	matrix33 mRotBackgroundRotation;

} sParamRenderCl;

#endif /* MANDELBULBER2_OPENCL_FRACTPARAMS_CL_HPP_ */
