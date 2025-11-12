void func_00169610() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = a0 + 0x98;                                             // 0x00169610: addiu $a1, $a0, 0x98
    a0 = a0 + 0x90c;                                            // 0x00169614: addiu $a0, $a0, 0x90c
    v0 = *(int32_t*)((a1) + 4);                                 // 0x00169618: lw $v0, 4($a1)
    *(uint32_t*)((a0) + 0x24) = v0;                             // 0x0016961c: sw $v0, 0x24($a0)
    v1 = *(int32_t*)((a1) + 8);                                 // 0x00169620: lw $v1, 8($a1)
    *(uint32_t*)((a0) + 0x28) = v1;                             // 0x00169624: sw $v1, 0x28($a0)
    v0 = *(int32_t*)((a1) + 0xc);                               // 0x00169628: lw $v0, 0xc($a1)
    return;                                                     // 0x0016962c: jr $ra
    *(uint32_t*)((a0) + 0x2c) = v0;                             // 0x00169630: sw $v0, 0x2c($a0)
}