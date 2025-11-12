void func_00175978() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = -5;                                                    // 0x0017597c: addiu $v0, $zero, -5
    a2 = *(int32_t*)((t0) + 0x250);                             // 0x00175980: lw $a2, 0x250($t0)
    if (a2 != v0) return;  // Branch to 0x175998                // 0x00175984: bne $a2, $v0, 0x175998
    return;                                                     // 0x0017598c: jr $ra
    *(uint32_t*)((t0) + 0x250) = t2;                            // 0x00175990: sw $t2, 0x250($t0)
}