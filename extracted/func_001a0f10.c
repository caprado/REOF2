void func_001a0f10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001a0f10: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a0f18: addu.qb $zero, $sp, $s1
    v1 = *(int32_t*)((a0) + 0x18);                              // 0x001a0f24: lw $v1, 0x18($a0)
    v0 = a1 + v1;                                               // 0x001a0f28: addu $v0, $a1, $v1
    v1 = v1 + -1;                                               // 0x001a0f2c: addiu $v1, $v1, -1
    v0 = v0 + -1;                                               // 0x001a0f30: addiu $v0, $v0, -1
    v1 = ~v1;                                                   // 0x001a0f34: not $v1, $v1
    func_001a12a0();  // 0x1a1250                                // 0x001a0f38: jal 0x1a1250
    s0 = v1 & v0;                                               // 0x001a0f3c: and $s0, $v1, $v0
    at = ((unsigned)v0 < (unsigned)s0) ? 1 : 0;                 // 0x001a0f40: sltu $at, $v0, $s0
    if (at == 0) goto label_0x1a0f88;                           // 0x001a0f44: beqz $at, 0x1a0f88
    func_001a1250();  // 0x1a1090                                // 0x001a0f4c: jal 0x1a1090
    /* nop */                                                   // 0x001a0f50: nop 
    v0 = *(int32_t*)((s1) + 0x18);                              // 0x001a0f54: lw $v0, 0x18($s1)
    v1 = v0 + -1;                                               // 0x001a0f5c: addiu $v1, $v0, -1
    v0 = s0 + v0;                                               // 0x001a0f60: addu $v0, $s0, $v0
    v1 = ~v1;                                                   // 0x001a0f64: not $v1, $v1
    v0 = v0 + -1;                                               // 0x001a0f68: addiu $v0, $v0, -1
    func_001a12a0();  // 0x1a1250                                // 0x001a0f6c: jal 0x1a1250
    s0 = v1 & v0;                                               // 0x001a0f70: and $s0, $v1, $v0
    at = ((unsigned)v0 < (unsigned)s0) ? 1 : 0;                 // 0x001a0f74: sltu $at, $v0, $s0
    if (at == 0) goto label_0x1a0f88;                           // 0x001a0f78: beqz $at, 0x1a0f88
    /* nop */                                                   // 0x001a0f7c: nop 
    goto label_0x1a0fb4;                                        // 0x001a0f80: b 0x1a0fb4
label_0x1a0f88:
    v0 = *(int32_t*)((s1) + 0xc);                               // 0x001a0f88: lw $v0, 0xc($s1)
    if (v0 == 0) goto label_0x1a0fa8;                           // 0x001a0f8c: beqz $v0, 0x1a0fa8
    /* nop */                                                   // 0x001a0f90: nop 
    v1 = *(int32_t*)((s1) + 0x14);                              // 0x001a0f94: lw $v1, 0x14($s1)
    v0 = *(int32_t*)((s1) + 4);                                 // 0x001a0f98: lw $v0, 4($s1)
    v0 = v1 + v0;                                               // 0x001a0f9c: addu $v0, $v1, $v0
    goto label_0x1a0fb4;                                        // 0x001a0fa0: b 0x1a0fb4
    v0 = v0 - s0;                                               // 0x001a0fa4: subu $v0, $v0, $s0
label_0x1a0fa8:
    v1 = *(int32_t*)((s1) + 0x14);                              // 0x001a0fa8: lw $v1, 0x14($s1)
    v0 = *(int32_t*)((s1) + 4);                                 // 0x001a0fac: lw $v0, 4($s1)
    v0 = v1 - v0;                                               // 0x001a0fb0: subu $v0, $v1, $v0
label_0x1a0fb4:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a0fb8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a0fbc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a0fc0: jr $ra
    sp = sp + 0x30;                                             // 0x001a0fc4: addiu $sp, $sp, 0x30
}