#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URouteRenderingComponent(py::module &m)
{
    py::class_< URouteRenderingComponent,  UPrimitiveComponent   >(m, "URouteRenderingComponent")
		.def_static("StaticClass", &URouteRenderingComponent::StaticClass, py::return_value_policy::reference)
          ;
}