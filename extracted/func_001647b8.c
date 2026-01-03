void func_001647b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8;
    
    sp = sp + -0x30;                                            // 0x001647b8: addiu $sp, $sp, -0x30
    a2 = sp + 4;                                                // 0x001647d8: addiu $a2, $sp, 4
    *(uint32_t*)(s2) = 0;                                       // 0x001647dc: sw $zero, 0($s2)
    func_00165238();  // 165238                                // 0x001647e0: jal 0x165238
    s1 = *(int32_t*)((s0) + 0x1b74);                            // 0x001647e4: lw $s1, 0x1b74($s0)
    a3 = sp + 8;                                                // 0x001647e8: addiu $a3, $sp, 8
    if (v0 != 0) goto label_0x164818;                           // 0x001647ec: bnez $v0, 0x164818
    v0 = local_4;                                               // 0x001647f4: lw $v0, 4($sp)
    a1 = local_0;                                               // 0x001647f8: lw $a1, 0($sp)
    v1 = *(int32_t*)((s1) + 0x3c);                              // 0x001647fc: lw $v1, 0x3c($s1)
    /* call function at address in v1 */                        // 0x00164804: jalr $v1
    *(uint32_t*)(s2) = v0;                                      // 0x00164808: sw $v0, 0($s2)
    func_00165280();  // 165280                                // 0x00164810: jal 0x165280
    a1 = local_8;                                               // 0x00164814: lw $a1, 8($sp)
label_0x164818:
    return;                                                     // 0x00164828: jr $ra
    sp = sp + 0x30;                                             // 0x0016482c: addiu $sp, $sp, 0x30
}