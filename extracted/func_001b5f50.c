void func_001b5f50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = a0 & 0xff;                                             // 0x001b5f50: andi $v1, $a0, 0xff
    at = (v1 < 0x60) ? 1 : 0;                                   // 0x001b5f54: slti $at, $v1, 0x60
    if (at == 0) goto label_0x1b5f6c;                           // 0x001b5f58: beqz $at, 0x1b5f6c
    at = (v1 < 0x80) ? 1 : 0;                                   // 0x001b5f5c: slti $at, $v1, 0x80
    v0 = v1 + 0x7fff;                                           // 0x001b5f60: addiu $v0, $v1, 0x7fff
    goto label_0x1b5f98;                                        // 0x001b5f64: b 0x1b5f98
    v0 = v0 + 0x520;                                            // 0x001b5f68: addiu $v0, $v0, 0x520
label_0x1b5f6c:
    if (at == 0) goto label_0x1b5f80;                           // 0x001b5f6c: beqz $at, 0x1b5f80
    v0 = 0xa5;                                                  // 0x001b5f70: addiu $v0, $zero, 0xa5
    v0 = v1 + 0x7fff;                                           // 0x001b5f74: addiu $v0, $v1, 0x7fff
    goto label_0x1b5f98;                                        // 0x001b5f78: b 0x1b5f98
    v0 = v0 + 0x521;                                            // 0x001b5f7c: addiu $v0, $v0, 0x521
label_0x1b5f80:
    if (v1 != v0) goto label_0x1b5f90;                          // 0x001b5f80: bne $v1, $v0, 0x1b5f90
    /* nop */                                                   // 0x001b5f84: nop 
    goto label_0x1b5f98;                                        // 0x001b5f88: b 0x1b5f98
    v0 = 0 | 0x85a3;                                            // 0x001b5f8c: ori $v0, $zero, 0x85a3
label_0x1b5f90:
    v0 = v1 + 0x7fff;                                           // 0x001b5f90: addiu $v0, $v1, 0x7fff
    v0 = v0 + 0x4ff;                                            // 0x001b5f94: addiu $v0, $v0, 0x4ff
label_0x1b5f98:
    return;                                                     // 0x001b5f98: jr $ra
    /* nop */                                                   // 0x001b5f9c: nop 
}