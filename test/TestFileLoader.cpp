#include "gtest/gtest.h"
#include "../FileLoader.h"

TEST(TestFileLoader, testLoading){
    std::vector<const char*> files;
    FileLoader loader;
    files.push_back("morgagni.jpeg");
    loader.load(files);
    ASSERT_TRUE(loader.isLoaded());
}

TEST(TestFileLoader, testNonExistingFileLoading){
    std::vector<const char*> files;
    FileLoader loader;
    files.push_back("morgangi.jpeg");
    loader.load(files);
    ASSERT_FALSE(loader.isLoaded());
}

TEST(TestFileLoader, testNumberOfFiles){
    std::vector<const char*> files;
    FileLoader loader;
    files.push_back("morgagni.jpeg");
    loader.load(files);
    ASSERT_EQ(loader.getNumberOfFiles(), 1);
}

TEST(TestFileLoader, testNoFiles){
    std::vector<const char*> files;
    FileLoader loader;
    loader.load(files);
    ASSERT_EQ(loader.getNumberOfFiles(), 0);
}
