void func_0017b1a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_20, local_24, local_28, local_4, local_8;
    
    sp = sp + -0x50;                                            // 0x0017b1a8: addiu $sp, $sp, -0x50
    a1 = sp + 0x20;                                             // 0x0017b1b8: addiu $a1, $sp, 0x20
    t0 = *(int32_t*)((v0) + 0x48);                              // 0x0017b1bc: lw $t0, 0x48($v0)
    a3 = *(int32_t*)((v0) + 0x44);                              // 0x0017b1c0: lw $a3, 0x44($v0)
    v1 = *(int32_t*)((v0) + 4);                                 // 0x0017b1c4: lw $v1, 4($v0)
    local_24 = a3;                                              // 0x0017b1c8: sw $a3, 0x24($sp)
    local_20 = a2;                                              // 0x0017b1cc: sw $a2, 0x20($sp)
    local_0 = v1;                                               // 0x0017b1d0: sw $v1, 0($sp)
    local_28 = t0;                                              // 0x0017b1d4: sw $t0, 0x28($sp)
    local_4 = a3;                                               // 0x0017b1d8: sw $a3, 4($sp)
    func_0014fcc0();  // 0x14fc10                                // 0x0017b1dc: jal 0x14fc10
    local_8 = t0;                                               // 0x0017b1e0: sw $t0, 8($sp)
    return;                                                     // 0x0017b1e8: jr $ra
    sp = sp + 0x50;                                             // 0x0017b1ec: addiu $sp, $sp, 0x50
}