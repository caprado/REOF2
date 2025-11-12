void func_0016baf8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a1 + 0xf;                                              // 0x0016baf8: addiu $v0, $a1, 0xf
    a1 = a1 + 0x1e;                                             // 0x0016bafc: addiu $a1, $a1, 0x1e
    v1 = (v0 < 0) ? 1 : 0;                                      // 0x0016bb00: slti $v1, $v0, 0
    t2 = a2 + 0xf;                                              // 0x0016bb04: addiu $t2, $a2, 0xf
    if (v1 != 0) v0 = a1;                                       // 0x0016bb08: movn $v0, $a1, $v1
    t3 = (t2 < 0) ? 1 : 0;                                      // 0x0016bb0c: slti $t3, $t2, 0
    v0 = v0 >> 4;                                               // 0x0016bb10: sra $v0, $v0, 4
    a2 = a2 + 0x1e;                                             // 0x0016bb14: addiu $a2, $a2, 0x1e
    a1 = v0 << 4;                                               // 0x0016bb18: sll $a1, $v0, 4
    v0 = v0 << 3;                                               // 0x0016bb1c: sll $v0, $v0, 3
    t0 = a1 + 0x3f;                                             // 0x0016bb20: addiu $t0, $a1, 0x3f
    a1 = a1 + 0x7e;                                             // 0x0016bb24: addiu $a1, $a1, 0x7e
    t1 = v0 + 0x3f;                                             // 0x0016bb28: addiu $t1, $v0, 0x3f
    v0 = v0 + 0x7e;                                             // 0x0016bb2c: addiu $v0, $v0, 0x7e
    v1 = (t0 < 0) ? 1 : 0;                                      // 0x0016bb30: slti $v1, $t0, 0
    if (t3 != 0) t2 = a2;                                       // 0x0016bb34: movn $t2, $a2, $t3
    if (v1 != 0) t0 = a1;                                       // 0x0016bb38: movn $t0, $a1, $v1
    v1 = (t1 < 0) ? 1 : 0;                                      // 0x0016bb3c: slti $v1, $t1, 0
    if (v1 != 0) t1 = v0;                                       // 0x0016bb40: movn $t1, $v0, $v1
    t0 = t0 >> 6;                                               // 0x0016bb44: sra $t0, $t0, 6
    t2 = t2 >> 4;                                               // 0x0016bb48: sra $t2, $t2, 4
    t1 = t1 >> 6;                                               // 0x0016bb4c: sra $t1, $t1, 6
    /* multiply: t0 * t2 -> hi:lo */                            // 0x0016bb50: mult $ac2, $t0, $t2
    t0 = t0 << 6;                                               // 0x0016bb58: sll $t0, $t0, 6
    t1 = t1 << 6;                                               // 0x0016bb5c: sll $t1, $t1, 6
    *(uint16_t*)((a3) + 0xe) = t0;                              // 0x0016bb60: sh $t0, 0xe($a3)
    *(uint16_t*)((a3) + 0xc) = t1;                              // 0x0016bb64: sh $t1, 0xc($a3)
    v0 = v0 << 0xa;                                             // 0x0016bb68: sll $v0, $v0, 0xa
    t2 = t2 << 9;                                               // 0x0016bb6c: sll $t2, $t2, 9
    v0 = a0 + v0;                                               // 0x0016bb70: addu $v0, $a0, $v0
    *(uint32_t*)((a3) + 8) = a0;                                // 0x0016bb74: sw $a0, 8($a3)
    t2 = v0 + t2;                                               // 0x0016bb78: addu $t2, $v0, $t2
    *(uint32_t*)(a3) = v0;                                      // 0x0016bb7c: sw $v0, 0($a3)
    return;                                                     // 0x0016bb80: jr $ra
    *(uint32_t*)((a3) + 4) = t2;                                // 0x0016bb84: sw $t2, 4($a3)
}