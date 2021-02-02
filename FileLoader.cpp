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

void FileLoader::load(const std::vector<std::string>& files) {
    try{
        numberOfFiles = files.size();
        if (!numberOfFiles)
            throw std::runtime_error("No files to load");

    } catch(std::runtime_error& e){
        std::cerr << e.what() << std::endl;

    }

    // Only executes this code if there is at least 1 file to load
    for (auto it : files){
        try {
            File file(it);
            filename = QString(it.c_str());
            filesize = file.getSize();
            loaded = true;
            notify();

        } catch(std::runtime_error& e){
            std::cerr << e.what() << std::endl;
            filename = QString(it.c_str());
            loaded = false;
            notify();

        }
    }
}

