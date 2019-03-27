#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEngineTypes(py::module &m)
{
    py::class_< UEngineTypes,  UObject   >(m, "UEngineTypes")
		.def_static("StaticClass", &UEngineTypes::StaticClass, py::return_value_policy::reference)
          ;
}