#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AMassiveLODOverrideVolume(py::module &m)
{
    py::class_< AMassiveLODOverrideVolume,  AVolume   >(m, "AMassiveLODOverrideVolume")
		.def_static("StaticClass", &AMassiveLODOverrideVolume::StaticClass, py::return_value_policy::reference)
          ;
}