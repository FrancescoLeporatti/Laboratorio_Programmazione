#ifndef LABORATORIO_PROGRAMMAZIONE_FILE_H
#define LABORATORIO_PROGRAMMAZIONE_FILE_H


#include <string>
#include <iostream>

class File {
public:
    File(const char* filepath);
    ~File();

    int getSIze() const {
        return size;
    }

private:
    int size {0};
    FILE* file;
};


#endif //LABORATORIO_PROGRAMMAZIONE_FILE_H
