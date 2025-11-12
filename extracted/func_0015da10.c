void func_0015da10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015da10: addiu $sp, $sp, -0x10
    v0 = 2;                                                     // 0x0015da14: addiu $v0, $zero, 2
    a1 = ((unsigned)a0 < (unsigned)3) ? 1 : 0;                  // 0x0015da1c: sltiu $a1, $a0, 3
    if (a0 == v0) goto label_0x15da68;                          // 0x0015da20: beq $a0, $v0, 0x15da68
    v1 = 2;                                                     // 0x0015da24: addiu $v1, $zero, 2
    /* beqzl $a1, 0x15da40 */                                   // 0x0015da28: beqzl $a1, 0x15da40
    v0 = 3;                                                     // 0x0015da2c: addiu $v0, $zero, 3
    v0 = 1;                                                     // 0x0015da30: addiu $v0, $zero, 1
    goto label_0x15da50;                                        // 0x0015da34: b 0x15da50
    v1 = 1;                                                     // 0x0015da38: addiu $v1, $zero, 1
    /* nop */                                                   // 0x0015da3c: nop 
    if (a0 == v0) goto label_0x15da68;                          // 0x0015da40: beq $a0, $v0, 0x15da68
    v1 = 3;                                                     // 0x0015da44: addiu $v1, $zero, 3
    v0 = 4;                                                     // 0x0015da48: addiu $v0, $zero, 4
    v1 = 4;                                                     // 0x0015da4c: addiu $v1, $zero, 4
label_0x15da50:
    if (a0 == v0) goto label_0x15da6c;                          // 0x0015da50: beq $a0, $v0, 0x15da6c
    a0 = 0x22 << 16;                                            // 0x0015da58: lui $a0, 0x22
    func_001634a8();  // 0x163410                                // 0x0015da5c: jal 0x163410
    a0 = &str_00227520;  // "E301271: mwsffrm_DecideFrmType() : Invalid Pstruct" // 0x0015da60: addiu $a0, $a0, 0x7520
    v1 = 1;                                                     // 0x0015da64: addiu $v1, $zero, 1
label_0x15da68:
label_0x15da6c:
    return;                                                     // 0x0015da70: jr $ra
    sp = sp + 0x10;                                             // 0x0015da74: addiu $sp, $sp, 0x10
}