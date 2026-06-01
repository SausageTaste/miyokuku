#pragma once

#include "miyokuku/json_fwd.hpp"


namespace miyokuku {

    class InvalidTypeException : public std::exception {

    public:
        const char* what() const noexcept override {
            return "Invalid type provided.";
        }
    };


    std::string get_member_str(const Json& obj, const Str& key);

}  // namespace miyokuku
