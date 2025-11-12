void func_001c0320() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x31 << 16;                                            // 0x001c0320: lui $at, 0x31
    a2 = 0x22 << 16;                                            // 0x001c0324: lui $a2, 0x22
    a3 = g_00316094;  // Global at 0x00316094                   // 0x001c0328: lw $a3, 0x6094($at)
    t1 = 0x31 << 16;                                            // 0x001c032c: lui $t1, 0x31
    a2 = a2 + -0x30e8;                                          // 0x001c0330: addiu $a2, $a2, -0x30e8
    v1 = -1;                                                    // 0x001c0334: addiu $v1, $zero, -1
    t2 = 4;                                                     // 0x001c0338: addiu $t2, $zero, 4
    t1 = t1 + 0x5fc0;                                           // 0x001c033c: addiu $t1, $t1, 0x5fc0
    a3 = a3 << 2;                                               // 0x001c0340: sll $a3, $a3, 2
    at = 0x31 << 16;                                            // 0x001c0344: lui $at, 0x31
    a2 = a2 + a3;                                               // 0x001c0348: addu $a2, $a2, $a3
    t0 = g_0021cf18;  // Global at 0x0021cf18                   // 0x001c034c: lw $t0, 0($a2)
    g_00315fe4 = v1;  // Global at 0x00315fe4                   // 0x001c0350: sw $v1, 0x5fe4($at)
    at = 0x31 << 16;                                            // 0x001c0354: lui $at, 0x31
    g_00315fd4 = a0;  // Global at 0x00315fd4                   // 0x001c0358: sw $a0, 0x5fd4($at)
    at = 0x31 << 16;                                            // 0x001c035c: lui $at, 0x31
    g_0031608c = t2;  // Global at 0x0031608c                   // 0x001c0360: sw $t2, 0x608c($at)
    at = 0x31 << 16;                                            // 0x001c0364: lui $at, 0x31
    g_00315fc0 = 0;  // Global at 0x00315fc0                    // 0x001c0368: sw $zero, 0x5fc0($at)
    at = 0x31 << 16;                                            // 0x001c036c: lui $at, 0x31
    g_00315fc4 = 0;  // Global at 0x00315fc4                    // 0x001c0370: sw $zero, 0x5fc4($at)
    at = 0x31 << 16;                                            // 0x001c0374: lui $at, 0x31
    g_00315fc8 = 0;  // Global at 0x00315fc8                    // 0x001c0378: sw $zero, 0x5fc8($at)
    at = 0x31 << 16;                                            // 0x001c037c: lui $at, 0x31
    g_003160a4 = 0;  // Global at 0x003160a4                    // 0x001c0380: sw $zero, 0x60a4($at)
    a2 = 1;                                                     // 0x001c0384: addiu $a2, $zero, 1
    v1 = t2 << 4;                                               // 0x001c038c: sll $v1, $t2, 4
label_0x1c0390:
    v1 = t0 + v1;                                               // 0x001c0390: addu $v1, $t0, $v1
    *(uint32_t*)((v1) + 0x10) = a1;                             // 0x001c0394: sw $a1, 0x10($v1)
    v1 = *(int32_t*)((v1) + 0x14);                              // 0x001c0398: lw $v1, 0x14($v1)
    if (t2 == a3) goto label_0x1c03b4;                          // 0x001c039c: beq $t2, $a3, 0x1c03b4
    a1 = a1 + v1;                                               // 0x001c03a0: addu $a1, $a1, $v1
    v1 = g_003160a4;  // Global at 0x003160a4                   // 0x001c03a4: lw $v1, 0xe4($t1)
    a0 = a2 << t2;                                              // 0x001c03a8: sllv $a0, $a2, $t2
    v1 = v1 | a0;                                               // 0x001c03ac: or $v1, $v1, $a0
    g_003160a4 = v1;  // Global at 0x003160a4                   // 0x001c03b0: sw $v1, 0xe4($t1)
label_0x1c03b4:
    t2 = t2 + 1;                                                // 0x001c03b4: addiu $t2, $t2, 1
    v1 = (t2 < 7) ? 1 : 0;                                      // 0x001c03b8: slti $v1, $t2, 7
    if (v1 != 0) goto label_0x1c0390;                           // 0x001c03bc: bnez $v1, 0x1c0390
    v1 = t2 << 4;                                               // 0x001c03c0: sll $v1, $t2, 4
    v1 = 1;                                                     // 0x001c03c4: addiu $v1, $zero, 1
    return;                                                     // 0x001c03c8: jr $ra
    g_003160a0 = v1;  // Global at 0x003160a0                   // 0x001c03cc: sw $v1, 0xe0($t1)
}