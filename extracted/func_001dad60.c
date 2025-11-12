void func_001dad60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xa0;                                            // 0x001dad60: addiu $sp, $sp, -0xa0
    v0 = *(uint16_t*)((a0) + 0xbc8);                            // 0x001dad6c: lhu $v0, 0xbc8($a0)
    if (v0 != 0) goto label_0x1dad94;                           // 0x001dad70: bnez $v0, 0x1dad94
    a2 = *(uint8_t*)((s0) + 0xbb0);                             // 0x001dad78: lbu $a2, 0xbb0($s0)
    a1 = 0x24 << 16;                                            // 0x001dad7c: lui $a1, 0x24
    a0 = sp + 0x20;                                             // 0x001dad80: addiu $a0, $sp, 0x20
    func_0010a570();  // 0x10a4d8                                // 0x001dad84: jal 0x10a4d8
    a1 = &str_00247988;  // "pl06_voi"                          // 0x001dad88: addiu $a1, $a1, 0x7988
    goto label_0x1dadd0;                                        // 0x001dad8c: b 0x1dadd0
    v0 = *(uint8_t*)((s0) + 3);                                 // 0x001dad90: lbu $v0, 3($s0)
label_0x1dad94:
    v1 = v0 & 0xffff;                                           // 0x001dad94: andi $v1, $v0, 0xffff
    v0 = 0x5b;                                                  // 0x001dad98: addiu $v0, $zero, 0x5b
    if (v1 != v0) goto label_0x1dadb8;                          // 0x001dad9c: bne $v1, $v0, 0x1dadb8
    a1 = 0x24 << 16;                                            // 0x001dada0: lui $a1, 0x24
    a0 = sp + 0x20;                                             // 0x001dada4: addiu $a0, $sp, 0x20
    func_0010a570();  // 0x10a4d8                                // 0x001dada8: jal 0x10a4d8
    a1 = &str_00247998;  // "pl%02d_npc"                        // 0x001dadac: addiu $a1, $a1, 0x7998
    goto label_0x1dadcc;                                        // 0x001dadb0: b 0x1dadcc
    /* nop */                                                   // 0x001dadb4: nop 
label_0x1dadb8:
    a2 = *(uint8_t*)((s0) + 0xbb0);                             // 0x001dadb8: lbu $a2, 0xbb0($s0)
    a1 = 0x24 << 16;                                            // 0x001dadbc: lui $a1, 0x24
    a0 = sp + 0x20;                                             // 0x001dadc0: addiu $a0, $sp, 0x20
    func_0010a570();  // 0x10a4d8                                // 0x001dadc4: jal 0x10a4d8
    a1 = &str_002479a8;  // "s%02d_npc00"                       // 0x001dadc8: addiu $a1, $a1, 0x79a8
label_0x1dadcc:
    v0 = *(uint8_t*)((s0) + 3);                                 // 0x001dadcc: lbu $v0, 3($s0)
label_0x1dadd0:
    a0 = sp + 0x20;                                             // 0x001dadd0: addiu $a0, $sp, 0x20
    func_001daf80();  // 0x1daef0                                // 0x001dadd4: jal 0x1daef0
    a1 = v0 + 4;                                                // 0x001dadd8: addiu $a1, $v0, 4
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001dade0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001dade4: jr $ra
    sp = sp + 0xa0;                                             // 0x001dade8: addiu $sp, $sp, 0xa0
}