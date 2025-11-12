void func_00165238() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x40;                                            // 0x00165238: addiu $sp, $sp, -0x40
    func_00166d88();  // 0x166ca8                                // 0x00165254: jal 0x166ca8
    a1 = *(int32_t*)((a0) + 0x1b7c);                            // 0x00165258: lw $a1, 0x1b7c($a0)
    v1 = local_0;                                               // 0x0016525c: lw $v1, 0($sp)
    a0 = local_4;                                               // 0x00165260: lw $a0, 4($sp)
    *(uint32_t*)(s1) = v1;                                      // 0x00165264: sw $v1, 0($s1)
    *(uint32_t*)(s0) = a0;                                      // 0x00165268: sw $a0, 0($s0)
    return;                                                     // 0x00165278: jr $ra
    sp = sp + 0x40;                                             // 0x0016527c: addiu $sp, $sp, 0x40
}