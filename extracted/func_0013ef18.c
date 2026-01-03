void func_0013ef18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013ef18: addiu $sp, $sp, -0x10
    return func_001413a8();  // Tail call                        // 0x0013ef24: j 0x141390
    sp = sp + 0x10;                                             // 0x0013ef28: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013ef2c: nop 
    sp = sp + -0x10;                                            // 0x0013ef30: addiu $sp, $sp, -0x10
    return func_001413c0();  // Tail call                        // 0x0013ef3c: j 0x1413a8
    sp = sp + 0x10;                                             // 0x0013ef40: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013ef44: nop 
label_0x13ef48:
    sp = sp + -0x10;                                            // 0x0013ef48: addiu $sp, $sp, -0x10
    return func_001415b8();  // Tail call                        // 0x0013ef54: j 0x141568
    sp = sp + 0x10;                                             // 0x0013ef58: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013ef5c: nop 
    sp = sp + -0x10;                                            // 0x0013ef60: addiu $sp, $sp, -0x10
    a0 = 0x22 << 16;                                            // 0x0013ef64: lui $a0, 0x22
    a0 = &str_00226298;  // "\nSJ/PS2EE Ver.6.18 Build:Jul 28 2003 17:49:50\n" // 0x0013ef6c: addiu $a0, $a0, 0x6298
    goto label_0x13ef48;                                        // 0x0013ef74: j 0x13ef48
    sp = sp + 0x10;                                             // 0x0013ef78: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013ef7c: nop 
    sp = sp + -0x10;                                            // 0x0013ef80: addiu $sp, $sp, -0x10
    v0 = 0x21 << 16;                                            // 0x0013ef84: lui $v0, 0x21
    s0 = v0 + -0x5268;                                          // 0x0013ef8c: addiu $s0, $v0, -0x5268
    v0 = g_0020ad98;  // Global at 0x0020ad98                   // 0x0013ef90: lw $v0, 0($s0)
    if (v0 != 0) goto label_0x13efb4;                           // 0x0013ef94: bnez $v0, 0x13efb4
    a0 = 0x21 << 16;                                            // 0x0013ef9c: lui $a0, 0x21
    a0 = a0 + -0x5260;                                          // 0x0013efa4: addiu $a0, $a0, -0x5260
    func_00107c70();  // 107c70                                // 0x0013efa8: jal 0x107c70
    a2 = 0x480;                                                 // 0x0013efac: addiu $a2, $zero, 0x480
    v0 = g_0020ad98;  // Global at 0x0020ad98                   // 0x0013efb0: lw $v0, 0($s0)
label_0x13efb4:
    v0 = v0 + 1;                                                // 0x0013efb4: addiu $v0, $v0, 1
    g_0020ad98 = v0;  // Global at 0x0020ad98                   // 0x0013efbc: sw $v0, 0($s0)
    return;                                                     // 0x0013efc4: jr $ra
    sp = sp + 0x10;                                             // 0x0013efc8: addiu $sp, $sp, 0x10
}