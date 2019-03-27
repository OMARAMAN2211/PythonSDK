#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_External(py::module &m)
{
    py::class_< USeqVar_External,  USequenceVariable   >(m, "USeqVar_External")
		.def_static("StaticClass", &USeqVar_External::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ExpectedType", &USeqVar_External::ExpectedType)
        .def_readwrite("VariableLabel", &USeqVar_External::VariableLabel)
          ;
}