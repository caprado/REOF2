void func_001769c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x20;                                            // 0x001769c8: addiu $sp, $sp, -0x20
    v0 = ((unsigned)a1 < (unsigned)2) ? 1 : 0;                  // 0x001769cc: sltiu $v0, $a1, 2
    if (v0 != 0) goto label_0x176a18;                           // 0x001769d8: bnez $v0, 0x176a18
    v0 = 2;                                                     // 0x001769e0: addiu $v0, $zero, 2
    if (a1 != v0) goto label_0x176a1c;                          // 0x001769e4: bnel $a1, $v0, 0x176a1c
    func_00176ae8();  // 0x176aa8                                // 0x001769f0: jal 0x176aa8
    a2 = sp + 4;                                                // 0x001769f4: addiu $a2, $sp, 4
    a1 = local_0;                                               // 0x001769fc: lw $a1, 0($sp)
    func_00176a70();  // 0x176a28                                // 0x00176a00: jal 0x176a28
    a2 = local_4;                                               // 0x00176a04: lw $a2, 4($sp)
    a1 = local_0;                                               // 0x00176a0c: lw $a1, 0($sp)
    func_00176aa8();  // 0x176a70                                // 0x00176a10: jal 0x176a70
    a2 = local_4;                                               // 0x00176a14: lw $a2, 4($sp)
label_0x176a18:
label_0x176a1c:
    return;                                                     // 0x00176a20: jr $ra
    sp = sp + 0x20;                                             // 0x00176a24: addiu $sp, $sp, 0x20
}