void func_0016d090() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_18, local_20;
    
    sp = sp + -0x40;                                            // 0x0016d090: addiu $sp, $sp, -0x40
    s0 = a1 + 0xcdc;                                            // 0x0016d09c: addiu $s0, $a1, 0xcdc
    v1 = *(int32_t*)((a1) + 0xd04);                             // 0x0016d0a8: lw $v1, 0xd04($a1)
    if (v1 == 0) goto label_0x16d110;                           // 0x0016d0ac: beqz $v1, 0x16d110
    a3 = *(int32_t*)((a1) + 0xd20);                             // 0x0016d0cc: lw $a3, 0xd20($a1)
    local_18 = a3;                                              // 0x0016d0e8: sw $a3, 0x18($sp)
    a1 = sp + 0x20;                                             // 0x0016d0ec: addiu $a1, $sp, 0x20
    a2 = sp + 0x24;                                             // 0x0016d0f0: addiu $a2, $sp, 0x24
    v0 = local_18;                                              // 0x0016d0f4: lw $v0, 0x18($sp)
    v0 = v0 + 1;                                                // 0x0016d0f8: addiu $v0, $v0, 1
    func_00176680();  // 176680                                // 0x0016d0fc: jal 0x176680
    local_18 = v0;                                              // 0x0016d100: sw $v0, 0x18($sp)
    v0 = local_20;                                              // 0x0016d104: lw $v0, 0x20($sp)
    v1 = *(int32_t*)((s0) + 0x20);                              // 0x0016d108: lw $v1, 0x20($s0)
    v0 = v0 - v1;                                               // 0x0016d10c: subu $v0, $v0, $v1
label_0x16d110:
    return;                                                     // 0x0016d118: jr $ra
    sp = sp + 0x40;                                             // 0x0016d11c: addiu $sp, $sp, 0x40
}