void func_00132818() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00132818: addiu $sp, $sp, -0x10
    if (s0 != 0) goto label_0x132840;                           // 0x00132824: bnez $s0, 0x132840
    a0 = 0x22 << 16;                                            // 0x0013282c: lui $a0, 0x22
    func_00127de8();  // 0x127d90                                // 0x00132830: jal 0x127d90
    a0 = &str_00223b80;  // "E02080802 ADXT_IsCompleted: parameter error" // 0x00132834: addiu $a0, $a0, 0x3b80
    goto label_0x132874;                                        // 0x00132838: b 0x132874
    v0 = -1;                                                    // 0x0013283c: addiu $v0, $zero, -1
label_0x132840:
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x00132840: lw $v1, 0x14($s0)
    if (v1 == 0) goto label_0x132870;                           // 0x00132844: beqz $v1, 0x132870
    v1 = *(int32_t*)(v1);                                       // 0x0013284c: lw $v1, 0($v1)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x00132850: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x00132854: jalr $v0
    a1 = 1;                                                     // 0x00132858: addiu $a1, $zero, 1
    v1 = *(int16_t*)((s0) + 0x3e);                              // 0x0013285c: lh $v1, 0x3e($s0)
    v1 = v1 << 0xb;                                             // 0x00132860: sll $v1, $v1, 0xb
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x00132864: slt $v0, $v0, $v1
    goto label_0x132874;                                        // 0x00132868: b 0x132874
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x0013286c: sltiu $v0, $v0, 1
label_0x132870:
label_0x132874:
    return;                                                     // 0x0013287c: jr $ra
    sp = sp + 0x10;                                             // 0x00132880: addiu $sp, $sp, 0x10
}