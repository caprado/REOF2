void func_00107b68() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = ((unsigned)a1 < (unsigned)t0) ? 1 : 0;                 // 0x00107b6c: sltu $v0, $a1, $t0
    if (v0 == 0) return;  // Branch to 0x107bc0                 // 0x00107b70: beqz $v0, 0x107bc0
    a3 = a1 + a2;                                               // 0x00107b78: addu $a3, $a1, $a2
    v0 = ((unsigned)t0 < (unsigned)a3) ? 1 : 0;                 // 0x00107b7c: sltu $v0, $t0, $a3
    if (v0 == 0) return;  // Branch to 0x107bc0                 // 0x00107b80: beqz $v0, 0x107bc0
    v0 = -1;                                                    // 0x00107b84: addiu $v0, $zero, -1
    v1 = t0 + a2;                                               // 0x00107b88: addu $v1, $t0, $a2
    a2 = a2 + -1;                                               // 0x00107b8c: addiu $a2, $a2, -1
    if (a2 == v0) return;  // Branch to 0x107c64                // 0x00107b90: beq $a2, $v0, 0x107c64
label_0x107b9c:
    a1 = a1 + -1;                                               // 0x00107b9c: addiu $a1, $a1, -1
    v1 = v1 + -1;                                               // 0x00107ba0: addiu $v1, $v1, -1
    v0 = *(uint8_t*)(a1);                                       // 0x00107ba4: lbu $v0, 0($a1)
    a2 = a2 + -1;                                               // 0x00107ba8: addiu $a2, $a2, -1
    *(uint8_t*)(v1) = v0;                                       // 0x00107bac: sb $v0, 0($v1)
    if (a2 != a0) goto label_0x107b9c;                          // 0x00107bb0: bne $a2, $a0, 0x107b9c
    /* nop */                                                   // 0x00107bb4: nop 
    return;                                                     // 0x00107bb8: jr $ra
}