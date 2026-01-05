void func_00172828() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00172828: addiu $sp, $sp, -0x10
    func_00172df0();  // 172df0                                // 0x00172834: jal 0x172df0
    if (v0 != 0) goto label_0x172854;                           // 0x0017283c: bnez $v0, 0x172854
    func_00172908();  // 172908                                // 0x00172844: jal 0x172908
    /* nop */                                                   // 0x00172848: nop 
    /* beqzl $v0, 0x172860 */                                   // 0x0017284c: beqzl $v0, 0x172860
    a1 = *(int32_t*)((s0) + 0x4c);                              // 0x00172850: lw $a1, 0x4c($s0)
label_0x172854:
    goto label_0x172888;                                        // 0x00172854: b 0x172888
    v0 = *(int32_t*)((s0) + 0x48);                              // 0x00172858: lw $v0, 0x48($s0)
    /* nop */                                                   // 0x0017285c: nop 
    a0 = *(int32_t*)((s0) + 0x48);                              // 0x00172860: lw $a0, 0x48($s0)
    v0 = (a1 < 2) ? 1 : 0;                                      // 0x00172864: slti $v0, $a1, 2
    if (v0 != 0) goto label_0x172884;                           // 0x00172868: bnez $v0, 0x172884
    v1 = (a1 < 5) ? 1 : 0;                                      // 0x0017286c: slti $v1, $a1, 5
    if (v1 != 0) goto label_0x172888;                           // 0x00172870: bnez $v1, 0x172888
    v1 = 6;                                                     // 0x00172878: addiu $v1, $zero, 6
    v0 = a1 ^ v1;                                               // 0x0017287c: xor $v0, $a1, $v1
    if (v0 == 0) a0 = v1;                                       // 0x00172880: movz $a0, $v1, $v0
label_0x172884:
label_0x172888:
    return;                                                     // 0x00172890: jr $ra
    sp = sp + 0x10;                                             // 0x00172894: addiu $sp, $sp, 0x10
}