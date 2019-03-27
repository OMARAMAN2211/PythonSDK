#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkelControlSpline(py::module &m)
{
    py::class_< USkelControlSpline,  USkelControlBase   >(m, "USkelControlSpline")
		.def_static("StaticClass", &USkelControlSpline::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SplineLength", &USkelControlSpline::SplineLength)
        .def_readwrite("SplineBoneAxis", &USkelControlSpline::SplineBoneAxis)
        .def_readwrite("BoneRotMode", &USkelControlSpline::BoneRotMode)
        .def_readwrite("EndSplineTension", &USkelControlSpline::EndSplineTension)
        .def_readwrite("StartSplineTension", &USkelControlSpline::StartSplineTension)
          ;
}