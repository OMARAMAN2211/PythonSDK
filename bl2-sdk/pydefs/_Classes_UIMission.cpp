#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIMission(py::module &m)
{
    py::class_< UIMission,  UInterface   >(m, "UIMission")
		.def_static("StaticClass", &UIMission::StaticClass, py::return_value_policy::reference)
        .def("eventMissionReactionObjectiveComplete", &UIMission::eventMissionReactionObjectiveComplete)
        .def("eventMissionReactionObjectiveCleared", &UIMission::eventMissionReactionObjectiveCleared)
        .def("eventMissionReactionObjectiveUpdated", &UIMission::eventMissionReactionObjectiveUpdated)
        .def("eventMissionReactionObjectiveSetChanged", &UIMission::eventMissionReactionObjectiveSetChanged)
        .def("eventMissionReactionStatusChanged", &UIMission::eventMissionReactionStatusChanged)
        .def("eventMissionReactionLevelLoad", &UIMission::eventMissionReactionLevelLoad)
          ;
}