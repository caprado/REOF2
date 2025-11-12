void func_001a5460() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(uint8_t*)((a0) + 5);                                 // 0x001a5460: lbu $v1, 5($a0)
    v0 = 0x80;                                                  // 0x001a5464: addiu $v0, $zero, 0x80
    a0 = 0x10;                                                  // 0x001a5468: addiu $a0, $zero, 0x10
    if (v1 != 0) a0 = v0;                                       // 0x001a546c: movn $a0, $v0, $v1
    /* divide: a1 / a0 -> hi:lo */                              // 0x001a5470: divu $zero, $a1, $a0
    /* nop */                                                   // 0x001a5474: nop 
    /* nop */                                                   // 0x001a5478: nop 
    /* mfhi $v0 */                                              // 0x001a547c
    if (v0 == 0) goto label_0x1a54bc;                           // 0x001a5480: beqz $v0, 0x1a54bc
    /* divide: a1 / a0 -> hi:lo */                              // 0x001a5488: divu $zero, $a1, $a0
    /* nop */                                                   // 0x001a548c: nop 
    /* nop */                                                   // 0x001a5490: nop 
    /* mflo $v0 */                                              // 0x001a5494
    /* multiply: a0 * v0 -> hi:lo */                            // 0x001a5498: mult $ac2, $a0, $v0
    v0 = a1 - v0;                                               // 0x001a549c: subu $v0, $a1, $v0
    /* divide: v0 / a0 -> hi:lo */                              // 0x001a54a0: divu $zero, $v0, $a0
    /* nop */                                                   // 0x001a54a4: nop 
    /* nop */                                                   // 0x001a54a8: nop 
    /* mfhi $v0 */                                              // 0x001a54ac
    v0 = a0 - v0;                                               // 0x001a54b0: subu $v0, $a0, $v0
    a1 = a1 + v0;                                               // 0x001a54b4: addu $a1, $a1, $v0
label_0x1a54bc:
    return;                                                     // 0x001a54bc: jr $ra
    /* nop */                                                   // 0x001a54c0: nop 
}