void func_00137b50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x20 << 16;                                            // 0x00137b50: lui $v0, 0x20
    sp = sp + -0x10;                                            // 0x00137b54: addiu $sp, $sp, -0x10
    v0 = v0 + 0x21d8;                                           // 0x00137b58: addiu $v0, $v0, 0x21d8
    g_002021d8 = 0;  // Global at 0x002021d8                    // 0x00137b60: sw $zero, 0($v0)
    t0 = 0x20 << 16;                                            // 0x00137b64: lui $t0, 0x20
    a3 = 1;                                                     // 0x00137b68: addiu $a3, $zero, 1
    a2 = 0x1964 << 16;                                          // 0x00137b70: lui $a2, 0x1964
    a0 = 0x22 << 16;                                            // 0x00137b74: lui $a0, 0x22
    v0 = g_002021c4;  // Global at 0x002021c4                   // 0x00137b78: lw $v0, 0x21c4($t0)
    /* nop */                                                   // 0x00137b7c: nop 
    if (v0 != a3) goto label_0x137bb0;                          // 0x00137b80: bne $v0, $a3, 0x137bb0
    v0 = *(int32_t*)(a1);                                       // 0x00137b88: lw $v0, 0($a1)
    v0 = v0 + 1;                                                // 0x00137b8c: addiu $v0, $v0, 1
    *(uint32_t*)(a1) = v0;                                      // 0x00137b90: sw $v0, 0($a1)
    v1 = *(int32_t*)(a1);                                       // 0x00137b94: lw $v1, 0($a1)
    v1 = ((unsigned)a2 < (unsigned)v1) ? 1 : 0;                 // 0x00137b98: sltu $v1, $a2, $v1
    /* beqzl $v1, 0x137b80 */                                   // 0x00137b9c: beqzl $v1, 0x137b80
    v0 = g_002021c4;  // Global at 0x002021c4                   // 0x00137ba0: lw $v0, 0x21c4($t0)
    func_00116508();  // 116508                                // 0x00137ba4: jal 0x116508
    a0 = &str_00224e48;  // "SRD: SRD Info.\n"                  // 0x00137ba8: addiu $a0, $a0, 0x4e48
label_0x137bb0:
    return;                                                     // 0x00137bb0: jr $ra
    sp = sp + 0x10;                                             // 0x00137bb4: addiu $sp, $sp, 0x10
}