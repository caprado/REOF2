void func_0017e0f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0017e0f8: addiu $sp, $sp, -0x30
    a1 = 0x23 << 16;                                            // 0x0017e0fc: lui $a1, 0x23
    a1 = &str_00229d80;  // "<%06X>"                            // 0x0017e108: addiu $a1, $a1, -0x6280
    a2 = 8;                                                     // 0x0017e10c: addiu $a2, $zero, 8
    func_0010b460();  // 0x10b2a0                                // 0x0017e118: jal 0x10b2a0
    a1 = 0x23 << 16;                                            // 0x0017e120: lui $a1, 0x23
    a2 = 5;                                                     // 0x0017e128: addiu $a2, $zero, 5
    func_0010a570();  // 0x10a4d8                                // 0x0017e12c: jal 0x10a4d8
    a1 = &str_00229d90;  // "libpad2: buffer addr is not 64 byte align. %08x\n" // 0x0017e130: addiu $a1, $a1, -0x6270
    func_0010a990();  // 0x10a860                                // 0x0017e13c: jal 0x10a860
    s0 = s0 + 0x10;                                             // 0x0017e140: addiu $s0, $s0, 0x10
    a1 = 0x23 << 16;                                            // 0x0017e144: lui $a1, 0x23
    a2 = 2;                                                     // 0x0017e148: addiu $a2, $zero, 2
    func_0010b460();  // 0x10b2a0                                // 0x0017e150: jal 0x10b2a0
    a1 = a1 + -0x6268;                                          // 0x0017e154: addiu $a1, $a1, -0x6268
    func_0017e268();  // 0x17e188                                // 0x0017e15c: jal 0x17e188
    a1 = 0x23 << 16;                                            // 0x0017e164: lui $a1, 0x23
    func_0010a990();  // 0x10a860                                // 0x0017e16c: jal 0x10a860
    a1 = a1 + -0x6260;                                          // 0x0017e170: addiu $a1, $a1, -0x6260
    return;                                                     // 0x0017e180: jr $ra
    sp = sp + 0x30;                                             // 0x0017e184: addiu $sp, $sp, 0x30
}