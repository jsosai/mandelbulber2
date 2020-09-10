/**
 * Mandelbulber v2, a 3D fractal generator  _%}}i*<.        ____                _______
 * Copyright (C) 2020 Mandelbulber Team   _>]|=||i=i<,     / __ \___  ___ ___  / ___/ /
 *                                        \><||i|=>>%)    / /_/ / _ \/ -_) _ \/ /__/ /__
 * This file is part of Mandelbulber.     )<=i=]=|=i<>    \____/ .__/\__/_//_/\___/____/
 * The project is licensed under GPLv3,   -<>>=|><|||`        /_/
 * see also COPYING file in this folder.    ~+{i%+++
 *
 * spherical fold 4D
 * This formula contains aux.color

 * This file has been autogenerated by tools/populateUiInformation.php
 * from the file "fractal_transf_spherical_fold4d.cpp" in the folder formula/definition
 * D O    N O T    E D I T    T H I S    F I L E !
 */

REAL4 TransfSphericalFold4dV2Iteration(REAL4 z, __constant sFractalCl *fractal, sExtendedAuxCl *aux)
{
	REAL rrCol = 0.0;
	REAL rr = 0.0;
	z += fractal->transformCommon.offset0000;
	if (fractal->transformCommon.functionEnabledBxFalse)
	{
		rr = z.x * z.x + z.y * z.y;
	}
	if (fractal->transformCommon.functionEnabledByFalse)
	{
		rr = z.x * z.x + z.y * z.y + z.z * z.z;
	}
	if (fractal->transformCommon.functionEnabledBz)
	//{	r2 = z.Dot(z) ;}
	{
		rr = z.x * z.x + z.y * z.y + z.z * z.z + z.w * z.w;
	}
	rrCol = rr;
	if (rr < fractal->transformCommon.minR2p25)
	{
		z *= fractal->transformCommon.maxMinR2factor;
		aux->DE *= fractal->transformCommon.maxMinR2factor;
	}
	else if (rr < fractal->transformCommon.maxR2d1)
	{
		double tglad_factor2 = fractal->transformCommon.maxR2d1 / rr;
		z *= tglad_factor2;
		aux->DE *= tglad_factor2;
	}
	z -= fractal->transformCommon.offset0000;

	if (fractal->foldColor.auxColorEnabledFalse)
	{
		if (rrCol < fractal->transformCommon.maxR2d1)
		{
			if (rrCol < fractal->transformCommon.minR2p25)
				aux->color +=
					fractal->mandelbox.color.factorSp1 * (fractal->transformCommon.minR2p25 - rrCol)
					+ fractal->mandelbox.color.factorSp2
							* (fractal->transformCommon.maxR2d1 - fractal->transformCommon.minR2p25);
			else
				aux->color +=
					fractal->mandelbox.color.factorSp2 * (fractal->transformCommon.maxR2d1 - rrCol);
		}
	}
	return z;
}
