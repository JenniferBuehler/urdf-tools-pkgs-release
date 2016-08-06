/**
    Copyright (C) 2016 Jennifer Buehler

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software Foundation,
    Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
**/

#ifndef PRINT_MODEL_H
#define PRINT_MODEL_H

namespace urdf_traverser
{
class UrdfTraverser;
}

namespace urdf_traverser
{

extern bool printModel(urdf_traverser::UrdfTraverser& traverser, const std::string& fromLink, bool verbose);

extern bool printModel(urdf_traverser::UrdfTraverser& traverser, bool verbose);

}

#endif  // PRINT_MODEL_H
