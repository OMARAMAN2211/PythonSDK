#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxAction_SetVariable(py::module &m)
{
    py::class_< UGFxAction_SetVariable,  USequenceAction   >(m, "UGFxAction_SetVariable")
		.def_static("StaticClass", &UGFxAction_SetVariable::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Movie", &UGFxAction_SetVariable::Movie)
        .def_readwrite("Variable", &UGFxAction_SetVariable::Variable)
        .def("eventIsValidLevelSequenceObject", &UGFxAction_SetVariable::eventIsValidLevelSequenceObject)
          ;
}