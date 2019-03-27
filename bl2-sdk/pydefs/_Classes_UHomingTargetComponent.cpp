#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHomingTargetComponent(py::module &m)
{
    py::class_< UHomingTargetComponent,  UPrimitiveComponent   >(m, "UHomingTargetComponent")
		.def_static("StaticClass", &UHomingTargetComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SocketName", &USocketComponent::SocketName)
          ;
}