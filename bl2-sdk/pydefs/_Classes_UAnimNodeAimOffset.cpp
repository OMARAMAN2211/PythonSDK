#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeAimOffset(py::module &m)
{
    py::class_< UAnimNodeAimOffset,  UAnimNodeBlendBase   >(m, "UAnimNodeAimOffset")
		.def_static("StaticClass", &UAnimNodeAimOffset::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Aim", &UAnimNodeAimOffset::Aim)
        .def_readwrite("AngleOffset", &UAnimNodeAimOffset::AngleOffset)
        .def_readwrite("PassThroughAtOrAboveLOD", &UAnimNodeAimOffset::PassThroughAtOrAboveLOD)
        .def_readwrite("ForcedAimDir", &UAnimNodeAimOffset::ForcedAimDir)
        .def_readwrite("RequiredBones", &UAnimNodeAimOffset::RequiredBones)
        .def_readwrite("AimCpntIndexLUT", &UAnimNodeAimOffset::AimCpntIndexLUT)
        .def_readwrite("TemplateNode", &UAnimNodeAimOffset::TemplateNode)
        .def_readwrite("Profiles", &UAnimNodeAimOffset::Profiles)
        .def_readwrite("CurrentProfileIndex", &UAnimNodeAimOffset::CurrentProfileIndex)
        .def("SetActiveProfileByIndex", &UAnimNodeAimOffset::SetActiveProfileByIndex)
        .def("SetActiveProfileByName", &UAnimNodeAimOffset::SetActiveProfileByName)
          ;
}