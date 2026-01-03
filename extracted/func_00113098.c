void func_00113098() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00113098: addiu $sp, $sp, -0x20
    func_001123a0();  // 1123a0                                // 0x001130a4: jal 0x1123a0
    /* nop */                                                   // 0x001130a8: nop 
    v0 = *(int32_t*)((s0) + 8);                                 // 0x001130b0: lw $v0, 8($s0)
    if (v0 != 0) goto label_0x1130f8;                           // 0x001130b4: bnez $v0, 0x1130f8
    /* nop */                                                   // 0x001130b8: nop 
    func_00114770();  // 114770                                // 0x001130bc: jal 0x114770
    /* nop */                                                   // 0x001130c0: nop 
    v1 = *(int16_t*)(s0);                                       // 0x001130c4: lh $v1, 0($s0)
    v0 = 1;                                                     // 0x001130c8: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x113120;                          // 0x001130cc: bne $v1, $v0, 0x113120
    v1 = 0x1200 << 16;                                          // 0x001130d4: lui $v1, 0x1200
    v1 = v1 | 0x1000;                                           // 0x001130d8: ori $v1, $v1, 0x1000
    v0 = v0 & 1;                                                // 0x001130e4: andi $v0, $v0, 1
    goto label_0x113124;                                        // 0x001130f0: b 0x113124
label_0x1130f8:
    func_00114800();  // 114800                                // 0x001130f8: jal 0x114800
    /* nop */                                                   // 0x001130fc: nop 
    v1 = *(int16_t*)(s0);                                       // 0x00113104: lh $v1, 0($s0)
    a0 = v0 & 1;                                                // 0x00113108: andi $a0, $v0, 1
    v0 = 1;                                                     // 0x0011310c: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x113120;                          // 0x00113110: bne $v1, $v0, 0x113120
label_0x113120:
label_0x113124:
    return;                                                     // 0x00113124: jr $ra
    sp = sp + 0x20;                                             // 0x00113128: addiu $sp, $sp, 0x20
}