#ifndef LABORATORIO_PROGRAMMAZIONE_FILELOADER_H
#define LABORATORIO_PROGRAMMAZIONE_FILELOADER_H

#include "Subject.h"
#include "File.h"
#include <list>
#include <vector>
#include <iostream>

class FileLoader : public Subject {
public:
    void load(std::vector<const char*> filenames);

    void addObserver(Observer* o) override;
    void removeObserver(Observer* o) override;
    void notify() override;

    int getNumberOfFiles(){
        return numberOfFiles;
    }
    bool isLoaded(){
        return loaded;
    }

private:
    std::list<Observer*> observers;
    bool loaded;
    int numberOfFiles;
};


#endif //LABORATORIO_PROGRAMMAZIONE_FILELOADER_H
