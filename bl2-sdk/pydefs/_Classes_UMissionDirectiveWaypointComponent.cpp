#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMissionDirectiveWaypointComponent(py::module &m)
{
    py::class_< UMissionDirectiveWaypointComponent,  UWaypointComponent   >(m, "UMissionDirectiveWaypointComponent")
		.def_static("StaticClass", &UMissionDirectiveWaypointComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("LinkedMission", &UMissionDirectiveWaypointComponent::LinkedMission)
        .def_readwrite("BranchEnding", &UMissionDirectiveWaypointComponent::BranchEnding)
        .def("RemoveWaypoint", &UMissionDirectiveWaypointComponent::RemoveWaypoint)
          ;
}