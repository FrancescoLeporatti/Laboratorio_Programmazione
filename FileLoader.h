#ifndef LABORATORIO_PROGRAMMAZIONE_FILELOADER_H
#define LABORATORIO_PROGRAMMAZIONE_FILELOADER_H

#include "Subject.h"
#include "File.h"
#include <QString>
#include <list>
#include <vector>
#include <iostream>

class FileLoader : public Subject {
public:
    void load(const std::vector<std::string>& files);

    void addObserver(Observer* o) override;
    void removeObserver(Observer* o) override;
    void notify() override;

    int getNumberOfFiles() const{
        return numberOfFiles;
    }

    bool isLoaded() const{
        return loaded;
    }

    const QString &getFilename() const {
        return filename;
    }

    int getFilesize() const {
        return filesize;
    }

private:
    std::list<Observer*> observers;
    int numberOfFiles {0};

    // Attributes regarding the current file that is being loaded
    bool loaded;
    QString filename;
    int filesize;
};


#endif //LABORATORIO_PROGRAMMAZIONE_FILELOADER_H
