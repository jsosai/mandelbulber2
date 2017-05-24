/**
 * Mandelbulber v2, a 3D fractal generator  _%}}i*<.        ____                _______
 * Copyright (C) 2017 Mandelbulber Team   _>]|=||i=i<,     / __ \___  ___ ___  / ___/ /
 *                                        \><||i|=>>%)    / /_/ / _ \/ -_) _ \/ /__/ /__
 * This file is part of Mandelbulber.     )<=i=]=|=i<>    \____/ .__/\__/_//_/\___/____/
 * The project is licensed under GPLv3,   -<>>=|><|||`        /_/
 * see also COPYING file in this folder.    ~+{i%+++
 *
 * Classic Mandelbulb Power 2 fractal
 * @reference http://www.fractalforums.com/3d-fractal-generation/true-3d-mandlebrot-type-fractal/
 */

/* ### This file has been autogenerated. Remove this line, to prevent override. ### */

#ifndef DOUBLE_PRECISION
void MandelbulbPower2Iteration(float4 *z, __constant sFractalCl *fractal, sExtendedAuxCl *aux)
{
	Q_UNUSED(fractal);

	aux->r_dz = aux->r_dz * 2.0f * aux->r;
	float x2 = z->x * z->x;
	float y2 = z->y * z->y;
	float z2 = z->z * z->z;
	float temp = 1.0f - native_divide(z2, (x2 + y2));
	float newx = (x2 - y2) * temp;
	float newy = 2.0f * z->x * z->y * temp;
	float newz = -2.0f * z->z * native_sqrt(x2 + y2);
	z->x = newx;
	z->y = newy;
	z->z = newz;
}
#else
void MandelbulbPower2Iteration(double4 *z, __constant sFractalCl *fractal, sExtendedAuxCl *aux)
{
	Q_UNUSED(fractal);

	aux->r_dz = aux->r_dz * 2.0 * aux->r;
	double x2 = z->x * z->x;
	double y2 = z->y * z->y;
	double z2 = z->z * z->z;
	double temp = 1.0 - native_divide(z2, (x2 + y2));
	double newx = (x2 - y2) * temp;
	double newy = 2.0 * z->x * z->y * temp;
	double newz = -2.0 * z->z * native_sqrt(x2 + y2);
	z->x = newx;
	z->y = newy;
	z->z = newz;
}
#endif
