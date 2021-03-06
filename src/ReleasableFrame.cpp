#include <ZividPython/ReleasableFrame.h>

#include <pybind11/pybind11.h>

namespace py = pybind11;

namespace ZividPython
{
    void wrapClass(pybind11::class_<ReleasableFrame> pyClass)
    {
        pyClass.def(py::init())
            .def(py::init<const std::string &>(), py::arg("file_name"))
            .def("save", &ReleasableFrame::save, py::arg("file_name"))
            .def("load", &ReleasableFrame::load, py::arg("file_name"))
            .def_property_readonly("settings", &ReleasableFrame::settings)
            .def_property_readonly("state", &ReleasableFrame::state)
            .def_property_readonly("info", &ReleasableFrame::info)
            .def("get_point_cloud", &ReleasableFrame::getPointCloud);
    }
} // namespace ZividPython
