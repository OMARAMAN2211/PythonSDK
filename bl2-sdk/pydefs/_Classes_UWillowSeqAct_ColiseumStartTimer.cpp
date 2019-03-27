#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ColiseumStartTimer(py::module &m)
{
    py::class_< UWillowSeqAct_ColiseumStartTimer,  USequenceAction   >(m, "UWillowSeqAct_ColiseumStartTimer")
		.def_static("StaticClass", &UWillowSeqAct_ColiseumStartTimer::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CountdownLength", &UWillowSeqAct_ColiseumStartTimer::CountdownLength)
        .def("eventActivated", &UWillowSeqAct_ColiseumStartTimer::eventActivated)
          ;
}