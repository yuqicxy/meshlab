/*
 * Connect3D - Reconstruction of water-tight triangulated meshes from unstructured point clouds
 *
 * please credit the following article: Stefan Ohrhallinger, Sudhir Mudur and Michael Wimmer:
 * 'Minimizing Edge Length to Connect Sparsely Sampled Unstructured Point Sets',
 * Shape Modeling International 2013, published in Computers & Graphics Journal, 2013.
 *
 * Copyright (C) 2013 Stefan Ohrhallinger, Daniel Prieler
 * This program is free software; you can redistribute it and/or modify it under the terms of the
 * GNU General Public License as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 */

#pragma once


struct c3dModelData;

/*
 * create boundary-complex for DT(P)
 * three conditions: 1) all vertices interpolated, 2) all edges >=2 incident triangles, 3) one connected component
 * repeat until both conditions fulfilled
 * input: delaunay tetrahedralization
 * output: all triangles in boundary-complex marked as existing
 */
void createBoundaryComplex(c3dModelData &data);



/*
 * calculate criterion for triangles and return sorted map with its references
 */
void getSortedTriangleMap(btree::btree_multimap<double, Triangle *> &triMMap, c3dModelData &data);
