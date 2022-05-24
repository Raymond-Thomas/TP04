int main (void) {
    HugeUnsignedInt* hugeNumber = createHugeUnsignedIntFromString ("123456789012345678901234567890");
    printHugeUnsignedInt (hugeNumber);
    hugeNumber = createHugeUnsignedIntFromString ("0000000123456789012345678901234567890");
    printHugeUnsignedInt (hugeNumber);
    
    //avec les floats
    HugeUnsignedFloat* hugeNumber = createHugeUnsignedFloatFromString ("123456789012345678901234567890.56");
    printHugeUnsignedFloat (hugeNumber);
    hugeNumber = createHugeUnsignedFloatFromString ("0000000123456789012345678901234567890.452");
    printHugeUnsignedFloat (hugeNumber);
}
