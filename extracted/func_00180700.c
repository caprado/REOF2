void func_00180700() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00180700: addiu $sp, $sp, -0x20
    func_00180698();  // 0x180630                                // 0x0018070c: jal 0x180630
    a1 = g_0026798c;  // Global at 0x0026798c                   // 0x00180714: lw $a1, 0x7c($v0)
    if (a1 == 0) goto label_0x180740;                           // 0x00180718: beqz $a1, 0x180740
    a0 = 0x334;                                                 // 0x0018071c: addiu $a0, $zero, 0x334
    v0 = 0x26 << 16;                                            // 0x00180720: lui $v0, 0x26
    v0 = v0 + 0x7908;                                           // 0x00180728: addiu $v0, $v0, 0x7908
    v0 = v0 + 8;                                                // 0x0018072c: addiu $v0, $v0, 8
    a0 = a0 + v0;                                               // 0x00180730: addu $a0, $a0, $v0
    v1 = *(int32_t*)(a0);                                       // 0x00180734: lw $v1, 0($a0)
    if (a1 != v1) goto label_0x180748;                          // 0x00180738: bnel $a1, $v1, 0x180748
    *(uint32_t*)(a0) = a1;                                      // 0x0018073c: sw $a1, 0($a0)
label_0x180740:
    goto label_0x18074c;                                        // 0x00180740: b 0x18074c
label_0x180748:
    v0 = 1;                                                     // 0x00180748: addiu $v0, $zero, 1
label_0x18074c:
    return;                                                     // 0x00180754: jr $ra
    sp = sp + 0x20;                                             // 0x00180758: addiu $sp, $sp, 0x20
}