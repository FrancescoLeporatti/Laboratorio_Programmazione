#include "gtest/gtest.h"
#include "../ConcreteObserver.h"


TEST(TestObserver, testNumberOfUpdates){
    std::vector<std::string> files;
    FileLoader loader;
    ConcreteObserver observer(&loader);
    files.push_back("morgagni.jpeg");
    files.push_back("santamarta.jpeg");
    files.push_back("SampleText.txt");
    loader.load(files);

    ASSERT_EQ(files.size(), observer.getCount());
}