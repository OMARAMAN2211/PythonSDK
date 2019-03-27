#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTI_Prioritize(py::module &m)
{
    py::class_< UTI_Prioritize,  UTargetIterator   >(m, "UTI_Prioritize")
		.def_static("StaticClass", &UTI_Prioritize::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Weight", &UTI_Prioritize::Weight)
          ;
}