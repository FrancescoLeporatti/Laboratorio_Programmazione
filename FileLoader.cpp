#include "FileLoader.h"

void FileLoader::addObserver(Observer *o) {
    observers.push_back(o);
}

void FileLoader::removeObserver(Observer *o) {
    observers.remove(o);
}

void FileLoader::notify() {
    for (auto it : observers)
        it->update();
}

void FileLoader::load(std::vector<const char *> filenames) {
    try{

        numberOfFiles = filenames.size();
        if (!numberOfFiles)
            throw std::runtime_error("No files to load");

    } catch(std::runtime_error& e){
        std::cerr << e.what() << std::endl;
    }

    for (auto it : filenames){
        try {

            File file(it);
            loaded = true;
            notify();

        } catch(std::runtime_error& e){

            std::cerr << e.what() << std::endl;
            loaded = false;
            notify();

        }
    }
}

