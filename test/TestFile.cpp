#include "gtest/gtest.h"
#include "../File.h"

TEST(TestFile, testOpeningFile) {
    ASSERT_NO_THROW(File file("morgagni.jpeg"));
}

TEST(TestFile, testOpeningNonExistingFile) {
    ASSERT_THROW(File file("morgangi.jpeg"), std::runtime_error);
}

TEST(TestFile, testFileSize) {
    File file("morgagni.jpeg");
    ASSERT_EQ(file.getSize(),62583);
    ASSERT_FALSE(file.getSize() == 0);
}
