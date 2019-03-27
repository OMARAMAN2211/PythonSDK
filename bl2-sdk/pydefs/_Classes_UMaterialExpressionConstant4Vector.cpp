#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionConstant4Vector(py::module &m)
{
    py::class_< UMaterialExpressionConstant4Vector,  UMaterialExpression   >(m, "UMaterialExpressionConstant4Vector")
		.def_static("StaticClass", &UMaterialExpressionConstant4Vector::StaticClass, py::return_value_policy::reference)
        .def_readwrite("R", &UMaterialExpressionConstant4Vector::R)
        .def_readwrite("G", &UMaterialExpressionConstant4Vector::G)
        .def_readwrite("B", &UMaterialExpressionConstant4Vector::B)
        .def_readwrite("A", &UMaterialExpressionConstant4Vector::A)
          ;
}