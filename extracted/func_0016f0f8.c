void func_0016f0f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8;
    
    sp = sp + -0x30;                                            // 0x0016f0f8: addiu $sp, $sp, -0x30
    v0 = *(int32_t*)((s0) + 0x44);                              // 0x0016f114: lw $v0, 0x44($s0)
    s2 = *(int32_t*)((a0) + 0x1b30);                            // 0x0016f118: lw $s2, 0x1b30($a0)
    v0 = v0 + -1;                                               // 0x0016f11c: addiu $v0, $v0, -1
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x0016f120: sltiu $v0, $v0, 2
    if (v0 == 0) goto label_0x16f134;                           // 0x0016f124: beqz $v0, 0x16f134
    a0 = s2 + 0x950;                                            // 0x0016f128: addiu $a0, $s2, 0x950
    func_0016f318();  // 16f318                                // 0x0016f12c: jal 0x16f318
    a1 = *(int32_t*)((s0) + 0x28);                              // 0x0016f130: lw $a1, 0x28($s0)
label_0x16f134:
    a2 = sp + 4;                                                // 0x0016f13c: addiu $a2, $sp, 4
    func_0016f1a0();  // 16f1a0                                // 0x0016f140: jal 0x16f1a0
    a3 = sp + 8;                                                // 0x0016f144: addiu $a3, $sp, 8
    v0 = local_0;                                               // 0x0016f148: lw $v0, 0($sp)
    v1 = 3;                                                     // 0x0016f14c: addiu $v1, $zero, 3
    if (v0 != v1) goto label_0x16f180;                          // 0x0016f150: bne $v0, $v1, 0x16f180
    a1 = s2 + 0x950;                                            // 0x0016f154: addiu $a1, $s2, 0x950
    v0 = *(int32_t*)((s0) + 0x28);                              // 0x0016f158: lw $v0, 0x28($s0)
    a1 = local_4;                                               // 0x0016f15c: lw $a1, 4($sp)
    a2 = local_8;                                               // 0x0016f160: lw $a2, 8($sp)
    func_00107ab8();  // 107ab8                                // 0x0016f164: jal 0x107ab8
    a0 = *(int32_t*)(v0);                                       // 0x0016f168: lw $a0, 0($v0)
    v1 = *(int32_t*)((s0) + 0x28);                              // 0x0016f16c: lw $v1, 0x28($s0)
    v0 = local_8;                                               // 0x0016f170: lw $v0, 8($sp)
    goto label_0x16f188;                                        // 0x0016f174: b 0x16f188
    *(uint32_t*)((v1) + 4) = v0;                                // 0x0016f178: sw $v0, 4($v1)
    /* nop */                                                   // 0x0016f17c: nop 
label_0x16f180:
    func_0016f318();  // 16f318                                // 0x0016f180: jal 0x16f318
    a0 = *(int32_t*)((s0) + 0x28);                              // 0x0016f184: lw $a0, 0x28($s0)
label_0x16f188:
    return;                                                     // 0x0016f198: jr $ra
    sp = sp + 0x30;                                             // 0x0016f19c: addiu $sp, $sp, 0x30
}