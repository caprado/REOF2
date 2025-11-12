void func_001ac020() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001ac020: addiu $sp, $sp, -0x10
    a1 = 0x24 << 16;                                            // 0x001ac024: lui $a1, 0x24
    func_001a8450();  // 0x1a82b0                                // 0x001ac030: jal 0x1a82b0
    a1 = a1 + -0x24f0;                                          // 0x001ac034: addiu $a1, $a1, -0x24f0
    func_001d3170();  // 0x1d3110                                // 0x001ac038: jal 0x1d3110
    /* nop */                                                   // 0x001ac03c: nop 
    func_0012a028();  // 0x129ea8                                // 0x001ac040: jal 0x129ea8
    /* nop */                                                   // 0x001ac044: nop 
    a0 = 0x1b << 16;                                            // 0x001ac048: lui $a0, 0x1b
    func_0012b2f8();  // 0x12b2e0                                // 0x001ac050: jal 0x12b2e0
    a0 = a0 + -0x3ff0;                                          // 0x001ac054: addiu $a0, $a0, -0x3ff0
    v0 = 1;                                                     // 0x001ac058: addiu $v0, $zero, 1
    at = 0x31 << 16;                                            // 0x001ac05c: lui $at, 0x31
    a0 = -1;                                                    // 0x001ac060: addiu $a0, $zero, -1
    func_001a87c0();  // 0x1a8600                                // 0x001ac064: jal 0x1a8600
    g_003137b7 = v0;  // Global at 0x003137b7                   // 0x001ac068: sb $v0, 0x37b7($at)
    func_001a91f0();  // 0x1a90e0                                // 0x001ac06c: jal 0x1a90e0
    /* nop */                                                   // 0x001ac070: nop 
    func_001aaef0();  // 0x1aaee0                                // 0x001ac074: jal 0x1aaee0
    /* nop */                                                   // 0x001ac078: nop 
    return;                                                     // 0x001ac080: jr $ra
    sp = sp + 0x10;                                             // 0x001ac084: addiu $sp, $sp, 0x10
}