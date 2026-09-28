#pragma once

#include "godot_cpp/classes/node.hpp"
#include "godot_cpp/classes/wrapped.hpp"
#include "godot_cpp/variant/string.hpp"

namespace godot{
    class RWG : public Node{
        GDCLASS(RWG, Node);
        protected:
            static void _bind_methods();
        private:
            String my_data = "Testing property";
            
            String get_my_data() const;
            void set_my_data(const String &new_data);
            void print_logs();
    };
}
