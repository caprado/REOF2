void func_00165bb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00165bb0: addiu $sp, $sp, -0x10
    a1 = a0 + 0xf60;                                            // 0x00165bc0: addiu $a1, $a0, 0xf60
    v1 = *(int32_t*)((a0) + 0x1b74);                            // 0x00165bc4: lw $v1, 0x1b74($a0)
    *(uint32_t*)((v1) + 0x2c) = v0;                             // 0x00165bc8: sw $v0, 0x2c($v1)
    if (v0 != 0) goto label_0x165be4;                           // 0x00165bcc: bnez $v0, 0x165be4
    a3 = *(int32_t*)(v1);                                       // 0x00165bd0: lw $a3, 0($v1)
    v1 = *(int32_t*)((a0) + 0x50);                              // 0x00165bd4: lw $v1, 0x50($a0)
    v0 = 1;                                                     // 0x00165bd8: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x165bf8;                          // 0x00165bdc: beq $v1, $v0, 0x165bf8
label_0x165be4:
    return func_00165c88();  // Tail call                        // 0x00165bec: j 0x165c48
    sp = sp + 0x10;                                             // 0x00165bf0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00165bf4: nop 
label_0x165bf8:
    return;                                                     // 0x00165bf8: jr $ra
    sp = sp + 0x10;                                             // 0x00165bfc: addiu $sp, $sp, 0x10
}