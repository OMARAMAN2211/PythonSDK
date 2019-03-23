#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UClass(py::module &m)
{
    py::class_< UClass,  UObject, std::shared_ptr<UClass>>(m, "UClass")
		.def(py::init<>())
        .def_readwrite("SuperField", &UStruct::SuperField)
        .def_readwrite("Children", &UStruct::Children)
        .def_readwrite("PropertySize", &UStruct::PropertySize)
        .def_readwrite("Next", &UField::Next)
          ;
}