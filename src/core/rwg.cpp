#include "./rwg.hpp"
#include "godot_cpp/core/class_db.hpp"
#include "godot_cpp/core/object.hpp"
#include "godot_cpp/core/property_info.hpp"
#include "godot_cpp/variant/utility_functions.hpp"
#include "godot_cpp/variant/variant.hpp"

using namespace godot;

void RWG::print_logs() {
    UtilityFunctions::print("RWG Initialized Successfully!");
}

void RWG::set_my_data(const String &new_data) {
    my_data = new_data;
}

String RWG::get_my_data() const {
    return my_data;
}

void RWG::_bind_methods(){
    ClassDB::bind_method(D_METHOD("print_logs"), &RWG::print_logs);
    ClassDB::bind_method(D_METHOD("get_my_data"), &RWG::get_my_data);
    ClassDB::bind_method(D_METHOD("set_my_data", "new_data"), &RWG::set_my_data);
    ADD_PROPERTY(PropertyInfo(Variant::STRING, "my_data"), "set_my_data", "get_my_data");
}
