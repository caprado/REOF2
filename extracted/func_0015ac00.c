void func_0015ac00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0015ac00: addiu $sp, $sp, -0x30
    a1 = a0 + 0x224;                                            // 0x0015ac18: addiu $a1, $a0, 0x224
    v0 = *(int32_t*)((a0) + 0x340);                             // 0x0015ac24: lw $v0, 0x340($a0)
    if (v0 == 0) goto label_0x15ac64;                           // 0x0015ac28: beqz $v0, 0x15ac64
    a2 = *(int32_t*)((a0) + 0x194);                             // 0x0015ac2c: lw $a2, 0x194($a0)
    v1 = *(int32_t*)((a0) + 0x344);                             // 0x0015ac30: lw $v1, 0x344($a0)
    *(uint32_t*)((a0) + 0x340) = 0;                             // 0x0015ac34: sw $zero, 0x340($a0)
    v1 = v1 + 1;                                                // 0x0015ac38: addiu $v1, $v1, 1
    *(uint32_t*)((a0) + 0x344) = v1;                            // 0x0015ac3c: sw $v1, 0x344($a0)
    v0 = *(int32_t*)((a1) + 0xc);                               // 0x0015ac40: lw $v0, 0xc($a1)
    v0 = v0 + 1;                                                // 0x0015ac44: addiu $v0, $v0, 1
    if (a2 != 0) goto label_0x15ac58;                           // 0x0015ac48: bnez $a2, 0x15ac58
    *(uint32_t*)((a1) + 0xc) = v0;                              // 0x0015ac4c: sw $v0, 0xc($a1)
    goto label_0x15acb0;                                        // 0x0015ac50: b 0x15acb0
    v0 = -2;                                                    // 0x0015ac54: addiu $v0, $zero, -2
label_0x15ac58:
    v0 = *(int32_t*)((a1) + 0x10);                              // 0x0015ac58: lw $v0, 0x10($a1)
    v0 = v0 + 1;                                                // 0x0015ac5c: addiu $v0, $v0, 1
    *(uint32_t*)((a1) + 0x10) = v0;                             // 0x0015ac60: sw $v0, 0x10($a1)
label_0x15ac64:
    v0 = -3;                                                    // 0x0015ac64: addiu $v0, $zero, -3
    s1 = -2;                                                    // 0x0015ac68: addiu $s1, $zero, -2
    if (a2 != 0) s1 = v0;                                       // 0x0015ac6c: movn $s1, $v0, $a2
    s2 = 4;                                                     // 0x0015ac70: addiu $s2, $zero, 4
    /* nop */                                                   // 0x0015ac74: nop 
label_0x15ac78:
    func_0015ac00();  // 0x15aaa8                                // 0x0015ac78: jal 0x15aaa8
    a1 = 1;                                                     // 0x0015ac84: addiu $a1, $zero, 1
    a2 = 4;                                                     // 0x0015ac88: addiu $a2, $zero, 4
    if (v0 == 0) goto label_0x15acac;                           // 0x0015ac8c: beqz $v0, 0x15acac
    v1 = v0 & s3;                                               // 0x0015ac90: and $v1, $v0, $s3
    /* bnezl $v1, 0x15acac */                                   // 0x0015ac94: bnezl $v1, 0x15acac
    func_0015ad38();  // 0x15acd0                                // 0x0015ac9c: jal 0x15acd0
    /* nop */                                                   // 0x0015aca0: nop 
    if (v0 == s2) goto label_0x15ac78;                          // 0x0015aca4: beq $v0, $s2, 0x15ac78
    /* nop */                                                   // 0x0015aca8: nop 
label_0x15acac:
label_0x15acb0:
    return;                                                     // 0x0015acc4: jr $ra
    sp = sp + 0x30;                                             // 0x0015acc8: addiu $sp, $sp, 0x30
}