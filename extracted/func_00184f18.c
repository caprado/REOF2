void func_00184f18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_19, local_1a, local_1b, local_1c, local_1d, local_1e, local_210, local_214;
    
    sp = sp + -0x430;                                           // 0x00184f18: addiu $sp, $sp, -0x430
    func_00182f70();  // 182f70                                // 0x00184f38: jal 0x182f70
    a1 = sp + 0x200;                                            // 0x00184f3c: addiu $a1, $sp, 0x200
    if (v0 != 0) goto label_0x185034;                           // 0x00184f40: bnez $v0, 0x185034
    a1 = 0x23 << 16;                                            // 0x00184f48: lui $a1, 0x23
    a0 = sp + 0x240;                                            // 0x00184f4c: addiu $a0, $sp, 0x240
    func_0010ab20();  // 10ab20                                // 0x00184f50: jal 0x10ab20
    a1 = a1 + -0x60a0;                                          // 0x00184f54: addiu $a1, $a1, -0x60a0
    if (v0 == 0) goto label_0x184f6c;                           // 0x00184f58: beqz $v0, 0x184f6c
    a2 = local_210;                                             // 0x00184f5c: lw $a2, 0x210($sp)
    v0 = 0x8101 << 16;                                          // 0x00184f60: lui $v0, 0x8101
    goto label_0x185030;                                        // 0x00184f64: b 0x185030
    v0 = v0 | 0x9002;                                           // 0x00184f68: ori $v0, $v0, 0x9002
label_0x184f6c:
    a3 = local_214;                                             // 0x00184f70: lw $a3, 0x214($sp)
    func_00182f70();  // 182f70                                // 0x00184f74: jal 0x182f70
    if (v0 != 0) goto label_0x185034;                           // 0x00184f7c: bnez $v0, 0x185034
    a1 = *(uint8_t*)((s0) + 7);                                 // 0x00184f84: lbu $a1, 7($s0)
    v1 = 0xa;                                                   // 0x00184f88: addiu $v1, $zero, 0xa
    a3 = *(uint8_t*)((s0) + 3);                                 // 0x00184f8c: lbu $a3, 3($s0)
    a2 = *(uint8_t*)((s0) + 2);                                 // 0x00184f94: lbu $a2, 2($s0)
    v0 = (unsigned)a1 >> 4;                                     // 0x00184f98: srl $v0, $a1, 4
    t7 = *(uint8_t*)((s0) + 1);                                 // 0x00184f9c: lbu $t7, 1($s0)
    t3 = (unsigned)a3 >> 4;                                     // 0x00184fa0: srl $t3, $a3, 4
    t4 = *(uint8_t*)((s0) + 6);                                 // 0x00184fa4: lbu $t4, 6($s0)
    t0 = (unsigned)a2 >> 4;                                     // 0x00184fa8: srl $t0, $a2, 4
    t1 = *(uint8_t*)((s0) + 5);                                 // 0x00184fac: lbu $t1, 5($s0)
    t6 = (unsigned)t7 >> 4;                                     // 0x00184fb0: srl $t6, $t7, 4
    t5 = (unsigned)t4 >> 4;                                     // 0x00184fb4: srl $t5, $t4, 4
    /* multiply: v0 * v1 -> hi:lo */                            // 0x00184fb8: mult $ac2, $v0, $v1
    t2 = (unsigned)t1 >> 4;                                     // 0x00184fbc: srl $t2, $t1, 4
    a1 = a1 & 0xf;                                              // 0x00184fc8: andi $a1, $a1, 0xf
    a3 = a3 & 0xf;                                              // 0x00184fd0: andi $a3, $a3, 0xf
    a2 = a2 & 0xf;                                              // 0x00184fd8: andi $a2, $a2, 0xf
    v0 = v0 + a1;                                               // 0x00184fe0: addu $v0, $v0, $a1
    t3 = t3 + a3;                                               // 0x00184fe4: addu $t3, $t3, $a3
    t0 = t0 + a2;                                               // 0x00184fe8: addu $t0, $t0, $a2
    t4 = t4 & 0xf;                                              // 0x00184fec: andi $t4, $t4, 0xf
    t1 = t1 & 0xf;                                              // 0x00184ff0: andi $t1, $t1, 0xf
    t7 = t7 & 0xf;                                              // 0x00184ff4: andi $t7, $t7, 0xf
    t5 = t5 + t4;                                               // 0x00184ff8: addu $t5, $t5, $t4
    t2 = t2 + t1;                                               // 0x00184ffc: addu $t2, $t2, $t1
    t6 = t6 + t7;                                               // 0x00185000: addu $t6, $t6, $t7
    v0 = v0 + 0x7d0;                                            // 0x00185004: addiu $v0, $v0, 0x7d0
    a2 = local_210;                                             // 0x00185008: lw $a2, 0x210($sp)
    a3 = local_214;                                             // 0x0018500c: lw $a3, 0x214($sp)
    local_1e = v0;                                              // 0x00185014: sh $v0, 0x1e($sp)
    local_1d = t5;                                              // 0x00185018: sb $t5, 0x1d($sp)
    local_1c = t2;                                              // 0x0018501c: sb $t2, 0x1c($sp)
    local_1b = t3;                                              // 0x00185020: sb $t3, 0x1b($sp)
    local_1a = t0;                                              // 0x00185024: sb $t0, 0x1a($sp)
    func_00184770();  // 184770                                // 0x00185028: jal 0x184770
    local_19 = t6;                                              // 0x0018502c: sb $t6, 0x19($sp)
label_0x185030:
label_0x185034:
    return;                                                     // 0x0018503c: jr $ra
    sp = sp + 0x430;                                            // 0x00185040: addiu $sp, $sp, 0x430
}