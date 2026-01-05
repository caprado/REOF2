void func_001c9fb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c9fb0: addiu $sp, $sp, -0x10
    func_001c7f40();  // 1c7f40                                // 0x001c9fb8: jal 0x1c7f40
    /* nop */                                                   // 0x001c9fbc: nop 
    if (v0 >= 0) goto label_0x1c9fd8;                           // 0x001c9fc8: bgez $v0, 0x1c9fd8
    /* nop */                                                   // 0x001c9fcc: nop 
    goto label_0x1c9fe0;                                        // 0x001c9fd0: b 0x1c9fe0
    v0 = -1;                                                    // 0x001c9fd4: addiu $v0, $zero, -1
label_0x1c9fd8:
    at = 0x31 << 16;                                            // 0x001c9fd8: lui $at, 0x31
    g_00316aad = 0;  // Global at 0x00316aad                    // 0x001c9fdc: sb $zero, 0x6aad($at)
label_0x1c9fe0:
    return;                                                     // 0x001c9fe4: jr $ra
    sp = sp + 0x10;                                             // 0x001c9fe8: addiu $sp, $sp, 0x10
}