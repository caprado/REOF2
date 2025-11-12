void func_0019f080() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0019f080: addiu $sp, $sp, -0x10
    func_0019f2e0();  // 0x19f230                                // 0x0019f088: jal 0x19f230
    /* nop */                                                   // 0x0019f08c: nop 
    if (v0 != 0) goto label_0x19f0a0;                           // 0x0019f090: bnez $v0, 0x19f0a0
    /* nop */                                                   // 0x0019f094: nop 
    goto label_0x19f124;                                        // 0x0019f098: b 0x19f124
label_0x19f0a0:
    func_0018dba0();  // 0x18db40                                // 0x0019f0a0: jal 0x18db40
    /* nop */                                                   // 0x0019f0a4: nop 
    at = 0x29 << 16;                                            // 0x0019f0a8: lui $at, 0x29
    g_0028ffc4 = 0;  // Global at 0x0028ffc4                    // 0x0019f0ac: sw $zero, -0x3c($at)
    at = 0x29 << 16;                                            // 0x0019f0b0: lui $at, 0x29
    g_0028ffc8 = 0;  // Global at 0x0028ffc8                    // 0x0019f0b4: sw $zero, -0x38($at)
    at = 0x29 << 16;                                            // 0x0019f0b8: lui $at, 0x29
    func_0019f4e0();  // 0x19f420                                // 0x0019f0bc: jal 0x19f420
    g_0028ffcc = 0;  // Global at 0x0028ffcc                    // 0x0019f0c0: sw $zero, -0x34($at)
    a0 = 4;                                                     // 0x0019f0c4: addiu $a0, $zero, 4
    a2 = 1;                                                     // 0x0019f0c8: addiu $a2, $zero, 1
    func_001a0010();  // 0x19f4e0                                // 0x0019f0d4: jal 0x19f4e0
    func_001a05c0();  // 0x1a0010                                // 0x0019f0e0: jal 0x1a0010
    a1 = 1;                                                     // 0x0019f0e4: addiu $a1, $zero, 1
    func_001a1590();  // 0x1a1530                                // 0x0019f0e8: jal 0x1a1530
    /* nop */                                                   // 0x0019f0ec: nop 
label_0x19f0f0:
    func_00113130();  // 0x113098                                // 0x0019f0f0: jal 0x113098
    at = 0x29 << 16;                                            // 0x0019f0f8: lui $at, 0x29
    g_0028ffbc = v0;  // Global at 0x0028ffbc                   // 0x0019f0fc: sw $v0, -0x44($at)
    /* nop */                                                   // 0x0019f100: nop 
    if (v0 != 0) goto label_0x19f0f0;                           // 0x0019f104: bnez $v0, 0x19f0f0
    /* nop */                                                   // 0x0019f108: nop 
    v1 = 0x80;                                                  // 0x0019f10c: addiu $v1, $zero, 0x80
    at = 0x1000 << 16;                                          // 0x0019f110: lui $at, 0x1000
    g_10000810 = v1;  // Global at 0x10000810                   // 0x0019f114: sw $v1, 0x810($at)
    v0 = 1;                                                     // 0x0019f118: addiu $v0, $zero, 1
    at = 0x1000 << 16;                                          // 0x0019f11c: lui $at, 0x1000
    g_10000800 = 0;  // Global at 0x10000800                    // 0x0019f120: sw $zero, 0x800($at)
label_0x19f124:
    return;                                                     // 0x0019f128: jr $ra
    sp = sp + 0x10;                                             // 0x0019f12c: addiu $sp, $sp, 0x10
}