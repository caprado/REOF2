void func_0015ae08() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x22 << 16;                                            // 0x0015ae08: lui $v0, 0x22
    v1 = 0x5a5a << 16;                                          // 0x0015ae0c: lui $v1, 0x5a5a
    a0 = str_00226ed0;  // "E206011: MwsfdCrePrm: illigal buffmt." // 0x0015ae10: lw $a0, 0x6ed0($v0)
    sp = sp + -0x10;                                            // 0x0015ae14: addiu $sp, $sp, -0x10
    v1 = v1 | 0x5a5a;                                           // 0x0015ae18: ori $v1, $v1, 0x5a5a
    if (a0 == v1) goto label_0x15ae40;                          // 0x0015ae1c: beq $a0, $v1, 0x15ae40
    a1 = 0xff03 << 16;                                          // 0x0015ae24: lui $a1, 0xff03
    a1 = a1 | 0xff02;                                           // 0x0015ae30: ori $a1, $a1, 0xff02
    return func_00158c48();  // Tail call                        // 0x0015ae34: j 0x158bf8
    sp = sp + 0x10;                                             // 0x0015ae38: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0015ae3c: nop 
label_0x15ae40:
    v0 = 0x22 << 16;                                            // 0x0015ae40: lui $v0, 0x22
    a0 = 4;                                                     // 0x0015ae44: addiu $a0, $zero, 4
    v1 = g_00226ee4;  // Global at 0x00226ee4                   // 0x0015ae48: lbu $v1, 0x6ee4($v0)
    if (v1 == a0) goto label_0x15ae70;                          // 0x0015ae4c: beq $v1, $a0, 0x15ae70
    /* nop */                                                   // 0x0015ae54: nop 
label_0x15ae58:
    at = -1;                                                    // 0x0015ae58: addiu $at, $zero, -1
    /* call function at address in at */                        // 0x0015ae5c: jalr $at
    /* nop */                                                   // 0x0015ae60: nop 
    goto label_0x15ae58;                                        // 0x0015ae64: b 0x15ae58
    /* nop */                                                   // 0x0015ae68: nop 
    /* nop */                                                   // 0x0015ae6c: nop 
label_0x15ae70:
    return;                                                     // 0x0015ae74: jr $ra
    sp = sp + 0x10;                                             // 0x0015ae78: addiu $sp, $sp, 0x10
}