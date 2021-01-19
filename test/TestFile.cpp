#include "gtest/gtest.h"
#include "../File.h"

TEST(TestFile, testOpeningFile) {
    ASSERT_NO_THROW(File file("../../Files/morgagni.jpg"));
}

TEST(TestFile, testOpeningNonExistingFile) {
    ASSERT_THROW(File file("../../Files/morgangi.jpg"), std::runtime_error);
}

TEST(TestFile, testFileSize) {
    File file("../../Files/morgagni.jpg");
    ASSERT_EQ(file.getSize(),62583);
    ASSERT_FALSE(file.getSize() == 0);
}
