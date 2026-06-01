#include "miyokuku/argcheck.hpp"

#include "miyokuku/json.hpp"


namespace miyokuku {

    Str get_member_str(const Json& obj, const Str& key) {
        if (!obj.contains(key)) {
            throw InvalidTypeException();
        }
        if (!obj[key].is_string()) {
            throw InvalidTypeException();
        }
        return obj[key].get<Str>();
    }

}  // namespace miyokuku
