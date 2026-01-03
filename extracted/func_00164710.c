void func_00164710() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x10;                                            // 0x00164710: addiu $sp, $sp, -0x10
    goto label_0x164728;                                        // 0x0016471c: j 0x164728
    sp = sp + 0x10;                                             // 0x00164720: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00164724: nop 
label_0x164728:
    sp = sp + -0x30;                                            // 0x00164728: addiu $sp, $sp, -0x30
    a1 = 6;                                                     // 0x0016472c: addiu $a1, $zero, 6
    func_001752e8();  // 1752e8                                // 0x0016473c: jal 0x1752e8
    if (v0 == 0) goto label_0x1647a4;                           // 0x00164744: beqz $v0, 0x1647a4
    func_001652b8();  // 1652b8                                // 0x0016474c: jal 0x1652b8
    /* nop */                                                   // 0x00164750: nop 
    v1 = 1;                                                     // 0x00164754: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x164768;                          // 0x00164758: bne $v0, $v1, 0x164768
    goto label_0x1647a4;                                        // 0x00164760: b 0x1647a4
label_0x164768:
    func_001647b8();  // 1647b8                                // 0x00164768: jal 0x1647b8
    func_00164fd8();  // 164fd8                                // 0x00164774: jal 0x164fd8
    a1 = local_0;                                               // 0x0016477c: lw $a1, 0($sp)
    func_001650a8();  // 1650a8                                // 0x00164780: jal 0x1650a8
    func_001652f0();  // 1652f0                                // 0x00164788: jal 0x1652f0
    func_001653d0();  // 1653d0                                // 0x00164790: jal 0x1653d0
    func_00164680();  // 164680                                // 0x00164798: jal 0x164680
label_0x1647a4:
    return;                                                     // 0x001647b0: jr $ra
    sp = sp + 0x30;                                             // 0x001647b4: addiu $sp, $sp, 0x30
}