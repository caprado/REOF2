void func_0015cd60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015cd60: addiu $sp, $sp, -0x10
    v1 = 2;                                                     // 0x0015cd64: addiu $v1, $zero, 2
    v0 = *(int32_t*)(s0);                                       // 0x0015cd74: lw $v0, 0($s0)
    if (v0 != v1) goto label_0x15cd90;                          // 0x0015cd78: bne $v0, $v1, 0x15cd90
    a0 = 1;                                                     // 0x0015cd7c: addiu $a0, $zero, 1
    a0 = 0x22 << 16;                                            // 0x0015cd80: lui $a0, 0x22
    func_00163410();  // 163410                                // 0x0015cd84: jal 0x163410
    a0 = &str_00227330;  // "E3012101: Buffer format is invalid." // 0x0015cd88: addiu $a0, $a0, 0x7330
label_0x15cd90:
    v0 = *(int32_t*)((s0) + 0x24);                              // 0x0015cd90: lw $v0, 0x24($s0)
    v0 = ((unsigned)v0 < (unsigned)3) ? 1 : 0;                  // 0x0015cd94: sltiu $v0, $v0, 3
    /* bnezl $v0, 0x15cdb4 */                                   // 0x0015cd98: bnezl $v0, 0x15cdb4
    a0 = 0x22 << 16;                                            // 0x0015cda0: lui $a0, 0x22
    func_00163410();  // 163410                                // 0x0015cda4: jal 0x163410
    a0 = &str_00227360;  // "E2053003: not enough work: sfx_wk" // 0x0015cda8: addiu $a0, $a0, 0x7360
    return;                                                     // 0x0015cdbc: jr $ra
    sp = sp + 0x10;                                             // 0x0015cdc0: addiu $sp, $sp, 0x10
}