/* Test the functionality of the DES_3 Library 

GOAL: Assure that the functionality of DES_2 is not changed. Conversion from byte-strings
to ciphertext creates encoding issues when ciphertxt is changed to plaintxt and vice versa.

Issue is that bits can be represented as any array of 64 bits. If conversion to base64
occurs first, then printable characters are certain to be returned after encryptionx
*/

#include "Binary.hpp"
#include <gtest/gtest.h>

TEST(BinaryTest, SwapBits){
    unsigned int num1 = 86;
    unsigned int num2 = 76;

    Binary::swapbits(num1, num2, 3, 2);

    EXPECT_EQ(num1, 94u);
    EXPECT_EQ(num2, 72u);
}

int main(int argc, char **argv){

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
