void func_001482c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001482c8: addiu $sp, $sp, -0x30
    s0 = *(int32_t*)((s1) + 0x40);                              // 0x001482dc: lw $s0, 0x40($s1)
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001482e0: lw $v0, 4($s0)
    if (v0 == 0) goto label_0x148318;                           // 0x001482e4: beqz $v0, 0x148318
    v0 = *(int32_t*)((s0) + 8);                                 // 0x001482ec: lw $v0, 8($s0)
    if (v0 == 0) goto label_0x14831c;                           // 0x001482f0: beqz $v0, 0x14831c
    func_00148340();  // 148340                                // 0x001482f8: jal 0x148340
    v0 = *(int32_t*)((s0) + 0x130);                             // 0x00148300: lw $v0, 0x130($s0)
    a0 = 1;                                                     // 0x00148304: addiu $a0, $zero, 1
    v1 = *(int32_t*)((s0) + 0xc4);                              // 0x00148308: lw $v1, 0xc4($s0)
    v0 = v0 - v1;                                               // 0x0014830c: subu $v0, $v0, $v1
    *(uint32_t*)((s1) + 8) = v0;                                // 0x00148310: sw $v0, 8($s1)
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x00148314: sw $zero, 4($s0)
label_0x148318:
label_0x14831c:
    return;                                                     // 0x00148328: jr $ra
    sp = sp + 0x30;                                             // 0x0014832c: addiu $sp, $sp, 0x30
}