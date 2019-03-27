#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerClassCountAttributeValueResolver(py::module &m)
{
    py::class_< UPlayerClassCountAttributeValueResolver,  UAttributeValueResolver   >(m, "UPlayerClassCountAttributeValueResolver")
		.def_static("StaticClass", &UPlayerClassCountAttributeValueResolver::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PlayerClassId", &UPlayerClassCountAttributeValueResolver::PlayerClassId)
        .def("ResetPlayerClassCountOverride", &UPlayerClassCountAttributeValueResolver::ResetPlayerClassCountOverride)
        .def("SetPlayerClassCountOverride", &UPlayerClassCountAttributeValueResolver::SetPlayerClassCountOverride)
          ;
}