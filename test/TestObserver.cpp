#include "gtest/gtest.h"
#include "../ConcreteObserver.h"


TEST(TestObserver, testNumberOfUpdates){
    std::vector<const char*> files;
    FileLoader loader;
    ConcreteObserver observer(&loader);
    files.push_back("./Files/morgagni.jpeg");
    files.push_back("./Files/santamarta.jpeg");
    files.push_back("./Files/SampleText.txt");
    loader.load(files);

    ASSERT_EQ(files.size(), observer.getCount());
}