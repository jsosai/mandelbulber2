/**
 * Mandelbulber v2, a 3D fractal generator  _%}}i*<.        ____                _______
 * Copyright (C) 2020 Mandelbulber Team   _>]|=||i=i<,     / __ \___  ___ ___  / ___/ /
 *                                        \><||i|=>>%)    / /_/ / _ \/ -_) _ \/ /__/ /__
 * This file is part of Mandelbulber.     )<=i=]=|=i<>    \____/ .__/\__/_//_/\___/____/
 * The project is licensed under GPLv3,   -<>>=|><|||`        /_/
 * see also COPYING file in this folder.    ~+{i%+++
 *
 * TransfDeLinearCube
 *

 * This file has been autogenerated by tools/populateUiInformation.php
 * from the file "fractal_transf_de_linear_cube.cpp" in the folder formula/definition
 * D O    N O T    E D I T    T H I S    F I L E !
 */

REAL4 TransfDELinearCubeIteration(REAL4 z, __constant sFractalCl *fractal, sExtendedAuxCl *aux)
{
	REAL R;
	if (!fractal->transformCommon.functionEnabledFalse)
	{
		R = max(max(fabs(z.x), fabs(z.y)), fabs(z.z));
	}
	else
	{
		R = length(z);
	}
	aux->dist =
		(fractal->transformCommon.scale1 * R / aux->DE) - fractal->transformCommon.offset0 / 100.0f;

	// aux->color
	if (fractal->foldColor.auxColorEnabledFalse)
	{
		aux->color = fractal->foldColor.difs1 * aux->DE / R;
	}
	return z;
}