void func_0015eb88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_14, local_4;
    
    sp = sp + -0x40;                                            // 0x0015eb88: addiu $sp, $sp, -0x40
    func_00173af8();  // 173af8                                // 0x0015ebac: jal 0x173af8
    a0 = *(int32_t*)((a0) + 0x40);                              // 0x0015ebb0: lw $a0, 0x40($a0)
    a0 = local_0;                                               // 0x0015ebb4: lw $a0, 0($sp)
    v0 = local_4;                                               // 0x0015ebb8: lw $v0, 4($sp)
    v1 = local_14;                                              // 0x0015ebbc: lw $v1, 0x14($sp)
    *(uint32_t*)(s0) = v0;                                      // 0x0015ebc0: sw $v0, 0($s0)
    *(uint32_t*)(s2) = a0;                                      // 0x0015ebc4: sw $a0, 0($s2)
    *(uint32_t*)(s1) = v1;                                      // 0x0015ebc8: sw $v1, 0($s1)
    return;                                                     // 0x0015ebdc: jr $ra
    sp = sp + 0x40;                                             // 0x0015ebe0: addiu $sp, $sp, 0x40
}