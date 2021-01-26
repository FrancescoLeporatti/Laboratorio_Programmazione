#include "File.h"

File::File(const char* filepath) : file(fopen(filepath, "r")) {
    if (!file) {
        throw std::runtime_error("Could not find file");
    } else {

        // Get the size of the opened file
        fseek(file, 0, SEEK_END);
        size = static_cast<int>(ftell(file));
        std::cout << "File '" << filepath << "'(" << size <<" bytes) opened successfully." << std::endl;
    }
}

File::~File() {
    fclose(file);
}