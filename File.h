#ifndef LABORATORIO_PROGRAMMAZIONE_FILE_H
#define LABORATORIO_PROGRAMMAZIONE_FILE_H


#include <string>
#include <iostream>

class File {
public:
    explicit File(std::string filename);
    ~File();

    int getSize() const {
        return size;
    }

private:
    std::string name;
    int size {0};
    FILE* file;
};


#endif //LABORATORIO_PROGRAMMAZIONE_FILE_H
