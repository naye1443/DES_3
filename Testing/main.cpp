/* Test the functionality of the DES_3 Library 

GOAL: Assure that the functionality of DES_2 is not changed. Conversion from byte-strings
to ciphertext creates encoding issues when ciphertxt is changed to plaintxt and vice versa.

Issue is that bits can be represented as any array of 64 bits. If conversion to base64
occurs first, then printable characters are certain to be returned after encryptionx
*/