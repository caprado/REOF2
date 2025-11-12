void func_00163768() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00163768: addiu $sp, $sp, -0x10
    func_00174ff8();  // 0x174fb8                                // 0x00163778: jal 0x174fb8
    a0 = *(int32_t*)((s0) + 0x40);                              // 0x0016377c: lw $a0, 0x40($s0)
    v1 = 3;                                                     // 0x00163780: addiu $v1, $zero, 3
    if (v0 != v1) goto label_0x1637e0;                          // 0x00163784: bne $v0, $v1, 0x1637e0
    func_0015eb88();  // 0x15eb48                                // 0x0016378c: jal 0x15eb48
    /* nop */                                                   // 0x00163790: nop 
    v1 = *(int8_t*)((s0) + 0x72);                               // 0x00163794: lb $v1, 0x72($s0)
    if (v1 != 0) goto label_0x1637ac;                           // 0x0016379c: bnez $v1, 0x1637ac
    func_0015f1d0();  // 0x15f0b0                                // 0x001637a4: jal 0x15f0b0
    /* nop */                                                   // 0x001637a8: nop 
label_0x1637ac:
    v1 = *(int8_t*)((s0) + 0x70);                               // 0x001637ac: lb $v1, 0x70($s0)
    v0 = 1;                                                     // 0x001637b0: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1637e4;                          // 0x001637b4: bnel $v1, $v0, 0x1637e4
    func_00167a90();  // 0x167a30                                // 0x001637bc: jal 0x167a30
    a0 = *(int32_t*)((s0) + 0x40);                              // 0x001637c0: lw $a0, 0x40($s0)
    a0 = 0x23 << 16;                                            // 0x001637c4: lui $a0, 0x23
    if (v0 == 0) goto label_0x1637e0;                           // 0x001637c8: beqz $v0, 0x1637e0
    a0 = &str_00228d20;  // "E211141 MWSTM_ReqStart: can't start '%s'" // 0x001637cc: addiu $a0, $a0, -0x72e0
    return func_001634a8();  // Tail call                        // 0x001637d8: j 0x163410
    sp = sp + 0x10;                                             // 0x001637dc: addiu $sp, $sp, 0x10
label_0x1637e0:
label_0x1637e4:
    return;                                                     // 0x001637e8: jr $ra
    sp = sp + 0x10;                                             // 0x001637ec: addiu $sp, $sp, 0x10
}