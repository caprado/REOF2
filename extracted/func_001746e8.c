void func_001746e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001746e8: addiu $sp, $sp, -0x20
    a1 = 3;                                                     // 0x001746f4: addiu $a1, $zero, 3
    func_00177950();  // 177950                                // 0x00174708: jal 0x177950
    if (v0 == 0) goto label_0x174748;                           // 0x00174714: beqz $v0, 0x174748
    a1 = 6;                                                     // 0x00174718: addiu $a1, $zero, 6
    func_001752e8();  // 1752e8                                // 0x0017471c: jal 0x1752e8
    /* nop */                                                   // 0x00174720: nop 
    v0 = 1;                                                     // 0x00174728: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x17474c;                          // 0x0017472c: bnel $v1, $v0, 0x17474c
    *(uint32_t*)(s1) = 0;                                       // 0x00174730: sw $zero, 0($s1)
    *(uint32_t*)(s1) = v1;                                      // 0x00174734: sw $v1, 0($s1)
    v0 = *(int32_t*)(s2);                                       // 0x00174738: lw $v0, 0($s2)
    goto label_0x174750;                                        // 0x0017473c: b 0x174750
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x00174740: sltiu $v0, $v0, 1
    /* nop */                                                   // 0x00174744: nop 
label_0x174748:
    *(uint32_t*)(s1) = 0;                                       // 0x00174748: sw $zero, 0($s1)
label_0x17474c:
label_0x174750:
    return;                                                     // 0x00174760: jr $ra
    sp = sp + 0x20;                                             // 0x00174764: addiu $sp, $sp, 0x20
}