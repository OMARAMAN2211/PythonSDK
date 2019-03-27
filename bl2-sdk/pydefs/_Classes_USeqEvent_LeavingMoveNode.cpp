#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_LeavingMoveNode(py::module &m)
{
    py::class_< USeqEvent_LeavingMoveNode,  USequenceEvent   >(m, "USeqEvent_LeavingMoveNode")
		.def_static("StaticClass", &USeqEvent_LeavingMoveNode::StaticClass, py::return_value_policy::reference)
          ;
}