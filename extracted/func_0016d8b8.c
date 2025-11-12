void func_0016d8b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_20, local_24, local_28;
    
    sp = sp + -0x40;                                            // 0x0016d8b8: addiu $sp, $sp, -0x40
    v1 = *(int32_t*)((s0) + 0xd04);                             // 0x0016d8d0: lw $v1, 0xd04($s0)
    if (v1 == 0) goto label_0x16d938;                           // 0x0016d8d4: beqz $v1, 0x16d938
    func_0016def0();  // 0x16deb0                                // 0x0016d8dc: jal 0x16deb0
    /* nop */                                                   // 0x0016d8e0: nop 
    a1 = sp + 0x20;                                             // 0x0016d8e8: addiu $a1, $sp, 0x20
    func_00176720();  // 0x176680                                // 0x0016d8ec: jal 0x176680
    a2 = sp + 0x24;                                             // 0x0016d8f0: addiu $a2, $sp, 0x24
    a0 = s0 + 0xd08;                                            // 0x0016d8f4: addiu $a0, $s0, 0xd08
    a1 = sp + 0x28;                                             // 0x0016d8f8: addiu $a1, $sp, 0x28
    func_00176720();  // 0x176680                                // 0x0016d8fc: jal 0x176680
    a2 = sp + 0x24;                                             // 0x0016d900: addiu $a2, $sp, 0x24
    func_001752f8();  // 0x1752e8                                // 0x0016d908: jal 0x1752e8
    a1 = 0x35;                                                  // 0x0016d90c: addiu $a1, $zero, 0x35
    a2 = local_20;                                              // 0x0016d910: lw $a2, 0x20($sp)
    a1 = local_28;                                              // 0x0016d914: lw $a1, 0x28($sp)
    v1 = local_24;                                              // 0x0016d918: lw $v1, 0x24($sp)
    a0 = (a1 < a2) ? 1 : 0;                                     // 0x0016d91c: slt $a0, $a1, $a2
    /* multiply: v0 * v1 -> hi:lo */                            // 0x0016d920: mult $ac3, $v0, $v1
    if (a0 == 0) goto label_0x16d938;                           // 0x0016d924: beqz $a0, 0x16d938
    v0 = 1;                                                     // 0x0016d928: addiu $v0, $zero, 1
    v0 = a1 + v1;                                               // 0x0016d92c: addu $v0, $a1, $v1
    v0 = (a2 < v0) ? 1 : 0;                                     // 0x0016d930: slt $v0, $a2, $v0
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x0016d934: sltiu $v0, $v0, 1
label_0x16d938:
    return;                                                     // 0x0016d940: jr $ra
    sp = sp + 0x40;                                             // 0x0016d944: addiu $sp, $sp, 0x40
}