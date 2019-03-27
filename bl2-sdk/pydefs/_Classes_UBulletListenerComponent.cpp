#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBulletListenerComponent(py::module &m)
{
    py::class_< UBulletListenerComponent,  UCylinderComponent   >(m, "UBulletListenerComponent")
		.def_static("StaticClass", &UBulletListenerComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("OnBulletTouch", &UBulletListenerComponent::OnBulletTouch)
          ;
}