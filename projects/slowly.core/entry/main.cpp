/**********************************************************/
//
// File: main.hpp
//
// Purpose: entry point
//
// Project: slowly.core
//
/**********************************************************/

#include CORE_NAMES_INCLUDE
#include CORE_STL_INCLUDE_PATH

enum class codes {
    success = 0,
    uninit,
    invalid_file_path,
};



// functions
codes translate(std::filesystem::path sl_file);


int main(int argc, char* argv[]) {
    // argc: number of arguments (including program name)
    // argv: array of C-strings (arguments)

    // Example: print all arguments
    for (int i = 0; i < argc; ++i) {
        std::cout << "Arg " << i << ": " << argv[i] << std::endl;
    }

    // parse each .sl file and translate into c++



    return 0;
}

codes translate(std::filesystem::path sl_file) {
    // check if file exists
    if (std::filesystem::exists(sl_file) == false) {
        return codes::invalid_file_path;
    }


}