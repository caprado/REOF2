void func_00165c00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00165c00: addiu $sp, $sp, -0x10
    v1 = *(int32_t*)((a0) + 0x1b74);                            // 0x00165c10: lw $v1, 0x1b74($a0)
    a0 = a0 + 0xf60;                                            // 0x00165c14: addiu $a0, $a0, 0xf60
    if (v0 != 0) goto label_0x165c34;                           // 0x00165c1c: bnez $v0, 0x165c34
    a0 = *(int32_t*)(v1);                                       // 0x00165c20: lw $a0, 0($v1)
    v1 = *(int32_t*)((v1) + 0x2c);                              // 0x00165c24: lw $v1, 0x2c($v1)
    v0 = 1;                                                     // 0x00165c28: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x165c40;                          // 0x00165c2c: beq $v1, $v0, 0x165c40
label_0x165c34:
    return func_00165c88();  // Tail call                        // 0x00165c38: j 0x165c48
    sp = sp + 0x10;                                             // 0x00165c3c: addiu $sp, $sp, 0x10
label_0x165c40:
    return;                                                     // 0x00165c40: jr $ra
    sp = sp + 0x10;                                             // 0x00165c44: addiu $sp, $sp, 0x10
}